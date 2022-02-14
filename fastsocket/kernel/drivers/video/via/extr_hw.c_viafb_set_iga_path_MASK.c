
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* tmds_setting_info; TYPE_4__* lvds_setting_info; TYPE_3__* crt_setting_info; TYPE_2__* lvds_setting_info2; TYPE_1__* chip_info; } ;
struct TYPE_11__ {void* iga_path; } ;
struct TYPE_10__ {void* iga_path; } ;
struct TYPE_9__ {void* iga_path; } ;
struct TYPE_8__ {void* iga_path; } ;
struct TYPE_7__ {scalar_t__ gfx_chip_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_6__* VAR_14 ;

void FUNC_0(void)
{

 if (VAR_11 == 1) {
  if (VAR_7) {
   if (VAR_13 == VAR_0)
    VAR_14->crt_setting_info->iga_path = VAR_2;
   else
    VAR_14->crt_setting_info->iga_path = VAR_3;
  }

  if (VAR_8) {
   if (VAR_13 == VAR_1)
    VAR_14->tmds_setting_info->iga_path = VAR_2;
   else
    VAR_14->tmds_setting_info->iga_path = VAR_3;
  }

  if (VAR_10) {
   if (VAR_13 == VAR_5) {
    if (VAR_12 &&
     (VAR_14->chip_info->gfx_chip_name ==
     VAR_6)) {
     VAR_14->
     lvds_setting_info->iga_path = VAR_3;
     VAR_14->
     crt_setting_info->iga_path = VAR_2;
     VAR_14->
     tmds_setting_info->iga_path = VAR_2;
    } else
     VAR_14->
     lvds_setting_info->iga_path = VAR_2;
   } else {
    VAR_14->lvds_setting_info->iga_path = VAR_3;
   }
  }
  if (VAR_9) {
   if (VAR_4 == VAR_13)
    VAR_14->lvds_setting_info2->iga_path = VAR_2;
   else
    VAR_14->lvds_setting_info2->iga_path = VAR_3;
  }
 } else {
  VAR_11 = 0;

  if (VAR_7 && VAR_10) {
   VAR_14->crt_setting_info->iga_path = VAR_2;
   VAR_14->lvds_setting_info->iga_path = VAR_3;
  } else if (VAR_7 && VAR_8) {
   VAR_14->crt_setting_info->iga_path = VAR_2;
   VAR_14->tmds_setting_info->iga_path = VAR_3;
  } else if (VAR_10 && VAR_8) {
   VAR_14->tmds_setting_info->iga_path = VAR_2;
   VAR_14->lvds_setting_info->iga_path = VAR_3;
  } else if (VAR_10 && VAR_9) {
   VAR_14->lvds_setting_info->iga_path = VAR_3;
   VAR_14->lvds_setting_info2->iga_path = VAR_3;
  } else if (VAR_7) {
   VAR_14->crt_setting_info->iga_path = VAR_2;
  } else if (VAR_10) {
   VAR_14->lvds_setting_info->iga_path = VAR_3;
  } else if (VAR_8) {
   VAR_14->tmds_setting_info->iga_path = VAR_2;
  }
 }
}
