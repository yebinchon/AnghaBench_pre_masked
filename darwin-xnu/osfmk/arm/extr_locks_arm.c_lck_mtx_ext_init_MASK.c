
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int type; } ;
struct TYPE_9__ {int lck_mtx_type; } ;
struct TYPE_11__ {int lck_mtx_attr; TYPE_4__* lck_mtx_grp; TYPE_2__ lck_mtx_deb; TYPE_1__ lck_mtx; } ;
typedef TYPE_3__ lck_mtx_ext_t ;
struct TYPE_12__ {int lck_grp_attr; } ;
typedef TYPE_4__ lck_grp_t ;
struct TYPE_13__ {int lck_attr_val; } ;
typedef TYPE_5__ lck_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int) ;

void
FUNC_1(
   lck_mtx_ext_t * VAR_6,
   lck_grp_t * VAR_7,
   lck_attr_t * VAR_8)
{
 FUNC_0((void *) VAR_6, sizeof(lck_mtx_ext_t));

 VAR_6->lck_mtx.lck_mtx_type = VAR_4;

 if ((VAR_8->lck_attr_val) & VAR_0) {
  VAR_6->lck_mtx_deb.type = VAR_5;
  VAR_6->lck_mtx_attr |= VAR_2;
 }
 VAR_6->lck_mtx_grp = VAR_7;

 if (VAR_7->lck_grp_attr & VAR_1)
  VAR_6->lck_mtx_attr |= VAR_3;
}
