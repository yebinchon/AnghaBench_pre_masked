
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ lvds_chip_name; } ;
struct TYPE_9__ {scalar_t__ iga_path; } ;
struct TYPE_8__ {TYPE_3__* lvds_setting_info; TYPE_1__* chip_info; TYPE_3__* lvds_setting_info2; } ;
struct TYPE_7__ {scalar_t__ gfx_chip_name; TYPE_4__ lvds_chip_info; TYPE_4__ lvds_chip_info2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (int ,int ,int,int) ;
 TYPE_2__* VAR_17 ;

void FUNC_4(void)
{
 if (VAR_17->chip_info->gfx_chip_name == VAR_11) {

  FUNC_3(VAR_8, VAR_14, 0x30, 0x30);
  FUNC_1();
 } else if (VAR_17->chip_info->gfx_chip_name == VAR_12) {
  if (VAR_16 && (VAR_6 ==
   VAR_17->chip_info->lvds_chip_info2.lvds_chip_name))
   FUNC_0(VAR_17->lvds_setting_info2, &VAR_17->chip_info->lvds_chip_info2);

  if (VAR_6 ==
   VAR_17->chip_info->lvds_chip_info.lvds_chip_name)
   FUNC_0(VAR_17->lvds_setting_info,
    &VAR_17->chip_info->lvds_chip_info);
  if (VAR_15 == VAR_17->chip_info->
   lvds_chip_info.lvds_chip_name)
   FUNC_2(VAR_17->
   lvds_setting_info, &VAR_17->chip_info->
   lvds_chip_info);
 } else if (VAR_15 ==
 VAR_17->chip_info->lvds_chip_info.lvds_chip_name) {
  FUNC_2(VAR_17->lvds_setting_info,
       &VAR_17->chip_info->lvds_chip_info);
 } else {

  FUNC_3(VAR_9, VAR_14, 0x0F, 0x0F);

  FUNC_3(VAR_10, VAR_14, 0x20, 0x20);

  FUNC_3(VAR_1, VAR_13, 0x00, 0x80);


  if (VAR_17->lvds_setting_info->iga_path == VAR_4) {

   FUNC_3(VAR_2, VAR_13, 0x00, 0x10);

   FUNC_3(VAR_3, VAR_13, 0x00, 0x10);
  } else {

   FUNC_3(VAR_2, VAR_13, 0x10, 0x10);

   FUNC_3(VAR_3, VAR_13, 0x10, 0x10);
  }

  FUNC_3(VAR_0, VAR_13, 0x48, 0x48);
 }

 if ((VAR_17->lvds_setting_info->iga_path == VAR_4)
     || (VAR_17->lvds_setting_info->iga_path == VAR_5)) {

  FUNC_3(VAR_7, VAR_14, 0x40, 0x40);

  FUNC_3(VAR_0, VAR_13, 0x00, 0x80);

 } else {
  FUNC_3(VAR_0, VAR_13, 0x80, 0x80);
 }

}
