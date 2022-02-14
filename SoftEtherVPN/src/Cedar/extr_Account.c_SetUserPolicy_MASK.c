
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int Policy; } ;
typedef TYPE_1__ USER ;
typedef int POLICY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(USER *VAR_0, POLICY *VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->lock);
 {
  FUNC_1(&VAR_0->Policy, VAR_1);
 }
 FUNC_2(VAR_0->lock);
}
