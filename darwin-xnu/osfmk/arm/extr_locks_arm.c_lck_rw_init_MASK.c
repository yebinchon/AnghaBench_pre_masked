
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* lck_rw_priv_excl; void* lck_rw_can_sleep; } ;
typedef TYPE_1__ lck_rw_t ;
typedef int lck_grp_t ;
struct TYPE_9__ {int lck_attr_val; } ;
typedef TYPE_2__ lck_attr_t ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void
FUNC_3(
 lck_rw_t *VAR_5,
 lck_grp_t *VAR_6,
 lck_attr_t *VAR_7)
{
 if (VAR_7 == VAR_0)
  VAR_7 = &VAR_3;
 FUNC_2(VAR_5, 0, sizeof(lck_rw_t));
 VAR_5->lck_rw_can_sleep = VAR_4;
 if ((VAR_7->lck_attr_val & VAR_1) == 0)
  VAR_5->lck_rw_priv_excl = VAR_4;

 FUNC_1(VAR_6);
 FUNC_0(VAR_6, VAR_2);
}
