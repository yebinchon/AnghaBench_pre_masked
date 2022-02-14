
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lck_mtx_is_ext; int lck_mtx_pad32; } ;
struct TYPE_10__ {int type; } ;
struct TYPE_11__ {TYPE_1__ lck_mtx; int lck_mtx_attr; TYPE_4__* lck_mtx_grp; TYPE_2__ lck_mtx_deb; } ;
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
 int FUNC_0 (void*,int) ;

__attribute__((used)) static void
FUNC_1(
 lck_mtx_ext_t *VAR_5,
 lck_grp_t *VAR_6,
 lck_attr_t *VAR_7)
{
 FUNC_0((void *)VAR_5, sizeof(lck_mtx_ext_t));

 if ((VAR_7->lck_attr_val) & VAR_0) {
  VAR_5->lck_mtx_deb.type = VAR_4;
  VAR_5->lck_mtx_attr |= VAR_2;
 }

 VAR_5->lck_mtx_grp = VAR_6;

 if (VAR_6->lck_grp_attr & VAR_1)
  VAR_5->lck_mtx_attr |= VAR_3;

 VAR_5->lck_mtx.lck_mtx_is_ext = 1;
 VAR_5->lck_mtx.lck_mtx_pad32 = 0xFFFFFFFF;
}
