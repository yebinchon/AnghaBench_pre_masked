
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lck_spin_data; } ;
typedef TYPE_1__ lck_spin_t ;
typedef int lck_grp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(
   lck_spin_t * VAR_2,
   lck_grp_t * VAR_3)
{
 if (VAR_2->lck_spin_data == VAR_0)
  return;
 VAR_2->lck_spin_data = VAR_0;
 FUNC_1(VAR_3, VAR_1);
 FUNC_0(VAR_3);
}
