
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spin_lock; } ;
typedef TYPE_1__ NEO_LOCK ;
typedef int NDIS_SPIN_LOCK ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(NEO_LOCK *VAR_0)
{
 NDIS_SPIN_LOCK *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = &VAR_0->spin_lock;
 FUNC_0(VAR_1);


 FUNC_1(VAR_0);
}
