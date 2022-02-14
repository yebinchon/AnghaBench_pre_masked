
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Ready; int lock; scalar_t__ c; } ;
typedef TYPE_1__ COUNTER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

UINT FUNC_3(COUNTER *VAR_2)
{
 UINT VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }
 if (VAR_2->Ready == 0)
 {
  return 0;
 }

 FUNC_1(VAR_2->lock);
 {
  VAR_2->c++;
  VAR_3 = VAR_2->c;
 }
 FUNC_2(VAR_2->lock);


 FUNC_0(VAR_1);
 FUNC_0(VAR_0);

 return VAR_3;
}
