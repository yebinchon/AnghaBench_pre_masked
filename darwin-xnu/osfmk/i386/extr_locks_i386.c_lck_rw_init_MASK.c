
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lck_rw_priv_excl; scalar_t__ lck_rw_tag; scalar_t__ lck_w_waiting; scalar_t__ lck_r_waiting; int lck_rw_can_sleep; scalar_t__ lck_rw_shared_count; void* lck_rw_want_upgrade; void* lck_rw_want_write; int lck_rw_interlock; } ;
typedef TYPE_1__ lck_rw_t ;
typedef int lck_grp_t ;
struct TYPE_8__ {int lck_attr_val; } ;
typedef TYPE_2__ lck_attr_t ;


 void* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(
 lck_rw_t *VAR_6,
 lck_grp_t *VAR_7,
 lck_attr_t *VAR_8)
{
 lck_attr_t *VAR_9 = (VAR_8 != VAR_1) ?
     VAR_8 : &VAR_4;

 FUNC_0(&VAR_6->lck_rw_interlock);
 VAR_6->lck_rw_want_write = VAR_0;
 VAR_6->lck_rw_want_upgrade = VAR_0;
 VAR_6->lck_rw_shared_count = 0;
 VAR_6->lck_rw_can_sleep = VAR_5;
 VAR_6->lck_r_waiting = VAR_6->lck_w_waiting = 0;
 VAR_6->lck_rw_tag = 0;
 VAR_6->lck_rw_priv_excl = ((VAR_9->lck_attr_val &
    VAR_2) == 0);

 FUNC_2(VAR_7);
 FUNC_1(VAR_7, VAR_3);
}
