
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* lck_mtx_type; scalar_t__ lck_mtx_pri; scalar_t__ lck_mtx_waiters; int * lck_mtx_ptr; int lck_mtx_tag; } ;
typedef TYPE_1__ lck_mtx_t ;
typedef int lck_mtx_ext_t ;
typedef int lck_grp_t ;
struct TYPE_10__ {int lck_attr_val; } ;
typedef TYPE_2__ lck_attr_t ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(
      lck_mtx_t * VAR_6,
      lck_grp_t * VAR_7,
      lck_attr_t * VAR_8)
{



 lck_attr_t *VAR_9;

 if (VAR_8 != VAR_1)
  VAR_9 = VAR_8;
 else
  VAR_9 = &VAR_5;
 {
  VAR_6->lck_mtx_ptr = ((void*)0);
  VAR_6->lck_mtx_waiters = 0;
  VAR_6->lck_mtx_pri = 0;
  VAR_6->lck_mtx_type = VAR_3;
  FUNC_4(VAR_6, 0);
 }
 FUNC_2(VAR_7);
 FUNC_1(VAR_7, VAR_4);
}
