
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spin_lock; } ;
typedef TYPE_1__ SL_LOCK ;
typedef int NDIS_SPIN_LOCK ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

SL_LOCK *FUNC_2()
{
 NDIS_SPIN_LOCK *VAR_0;


 SL_LOCK *VAR_1 = FUNC_1(sizeof(SL_LOCK));
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_0 = &VAR_1->spin_lock;

 FUNC_0(VAR_0);

 return VAR_1;
}
