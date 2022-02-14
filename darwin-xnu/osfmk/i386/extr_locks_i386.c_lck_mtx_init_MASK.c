
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lck_mtx_pad32; scalar_t__ lck_mtx_state; scalar_t__ lck_mtx_owner; int * lck_mtx_ptr; int lck_mtx_tag; } ;
typedef TYPE_1__ lck_mtx_t ;
typedef int lck_mtx_ext_t ;
typedef int lck_grp_t ;
struct TYPE_9__ {int lck_attr_val; } ;
typedef TYPE_2__ lck_attr_t ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,TYPE_2__*) ;

void
FUNC_4(
 lck_mtx_t *VAR_5,
 lck_grp_t *VAR_6,
 lck_attr_t *VAR_7)
{
 lck_mtx_ext_t *VAR_8;
 lck_attr_t *VAR_9;

 if (VAR_7 != VAR_1)
  VAR_9 = VAR_7;
 else
  VAR_9 = &VAR_4;

 if ((VAR_9->lck_attr_val) & VAR_0) {
  if ((VAR_8 = (lck_mtx_ext_t *)FUNC_0(sizeof(lck_mtx_ext_t))) != 0) {
   FUNC_3(VAR_8, VAR_6, VAR_9);
   VAR_5->lck_mtx_tag = VAR_2;
   VAR_5->lck_mtx_ptr = VAR_8;
  }
 } else {
  VAR_5->lck_mtx_owner = 0;
  VAR_5->lck_mtx_state = 0;
 }
 VAR_5->lck_mtx_pad32 = 0xFFFFFFFF;
 FUNC_2(VAR_6);
 FUNC_1(VAR_6, VAR_3);
}
