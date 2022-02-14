
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Ready; int lock; int c; } ;
typedef TYPE_1__ COUNTER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

UINT FUNC_2(COUNTER *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }
 if (VAR_0->Ready == 0)
 {
  return 0;
 }

 FUNC_0(VAR_0->lock);
 {
  VAR_1 = VAR_0->c;
 }
 FUNC_1(VAR_0->lock);

 return VAR_1;
}
