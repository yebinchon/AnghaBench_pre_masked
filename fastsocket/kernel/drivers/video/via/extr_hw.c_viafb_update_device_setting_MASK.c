
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* lvds_setting_info2; TYPE_3__* lvds_setting_info; TYPE_2__* tmds_setting_info; TYPE_1__* crt_setting_info; } ;
struct TYPE_9__ {int h_active; int v_active; int bpp; int refresh_rate; scalar_t__ iga_path; } ;
struct TYPE_8__ {int h_active; int v_active; int bpp; int refresh_rate; scalar_t__ iga_path; } ;
struct TYPE_7__ {int h_active; int v_active; int bpp; int refresh_rate; scalar_t__ iga_path; } ;
struct TYPE_6__ {int h_active; int v_active; int bpp; int refresh_rate; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* VAR_1 ;

void FUNC_0(int VAR_2, int VAR_3,
 int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_6 == 0) {
  VAR_1->crt_setting_info->h_active = VAR_2;
  VAR_1->crt_setting_info->v_active = VAR_3;
  VAR_1->crt_setting_info->bpp = VAR_4;
  VAR_1->crt_setting_info->refresh_rate =
   VAR_5;

  VAR_1->tmds_setting_info->h_active = VAR_2;
  VAR_1->tmds_setting_info->v_active = VAR_3;
  VAR_1->tmds_setting_info->bpp = VAR_4;
  VAR_1->tmds_setting_info->refresh_rate =
   VAR_5;

  VAR_1->lvds_setting_info->h_active = VAR_2;
  VAR_1->lvds_setting_info->v_active = VAR_3;
  VAR_1->lvds_setting_info->bpp = VAR_4;
  VAR_1->lvds_setting_info->refresh_rate =
   VAR_5;
  VAR_1->lvds_setting_info2->h_active = VAR_2;
  VAR_1->lvds_setting_info2->v_active = VAR_3;
  VAR_1->lvds_setting_info2->bpp = VAR_4;
  VAR_1->lvds_setting_info2->refresh_rate =
   VAR_5;
 } else {

  if (VAR_1->tmds_setting_info->iga_path == VAR_0) {
   VAR_1->tmds_setting_info->h_active = VAR_2;
   VAR_1->tmds_setting_info->v_active = VAR_3;
   VAR_1->tmds_setting_info->bpp = VAR_4;
   VAR_1->tmds_setting_info->refresh_rate =
    VAR_5;
  }

  if (VAR_1->lvds_setting_info->iga_path == VAR_0) {
   VAR_1->lvds_setting_info->h_active = VAR_2;
   VAR_1->lvds_setting_info->v_active = VAR_3;
   VAR_1->lvds_setting_info->bpp = VAR_4;
   VAR_1->lvds_setting_info->refresh_rate =
    VAR_5;
  }
  if (VAR_0 == VAR_1->lvds_setting_info2->iga_path) {
   VAR_1->lvds_setting_info2->h_active = VAR_2;
   VAR_1->lvds_setting_info2->v_active = VAR_3;
   VAR_1->lvds_setting_info2->bpp = VAR_4;
   VAR_1->lvds_setting_info2->refresh_rate =
    VAR_5;
  }
 }
}
