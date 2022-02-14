
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ lvds_chip_name; } ;
struct TYPE_6__ {TYPE_1__* chip_info; int lvds_setting_info; } ;
struct TYPE_5__ {scalar_t__ gfx_chip_name; TYPE_3__ lvds_chip_info; TYPE_3__ lvds_chip_info2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ,int ,int,int) ;
 TYPE_2__* VAR_15 ;

void FUNC_4(void)
{

 if (VAR_15->chip_info->gfx_chip_name == VAR_9) {
  FUNC_1();

  FUNC_3(VAR_6, VAR_12, 0x00, 0x30);
 } else if (VAR_15->chip_info->gfx_chip_name == VAR_10) {
  if (VAR_14
      && (VAR_4 ==
   VAR_15->chip_info->lvds_chip_info2.lvds_chip_name))
   FUNC_0(VAR_15->lvds_setting_info,
    &VAR_15->chip_info->lvds_chip_info2);
  if (VAR_4 ==
   VAR_15->chip_info->lvds_chip_info.lvds_chip_name)
   FUNC_0(VAR_15->lvds_setting_info,
    &VAR_15->chip_info->lvds_chip_info);
  if (VAR_13 == VAR_15->chip_info->
   lvds_chip_info.lvds_chip_name)
   FUNC_2(VAR_15->lvds_setting_info,
    &VAR_15->chip_info->lvds_chip_info);
 } else if (VAR_13 ==
 VAR_15->chip_info->lvds_chip_info.lvds_chip_name) {
  FUNC_2(VAR_15->lvds_setting_info,
        &VAR_15->chip_info->lvds_chip_info);
 } else {

  FUNC_3(VAR_7, VAR_12, 0x00, 0x0F);

  FUNC_3(VAR_8, VAR_12, 0x00, 0x20);

  FUNC_3(VAR_3, VAR_11, 0x80, 0x80);

  FUNC_3(VAR_1, VAR_11, 0x00, 0x08);
 }


 FUNC_3(VAR_2, VAR_11, 0x00, 0x01);

 FUNC_3(VAR_5, VAR_12, 0x00, 0x40);

 FUNC_3(VAR_1, VAR_11, 0x00, 0x08);

 FUNC_3(VAR_0, VAR_11, 0x00, 0x80);

}
