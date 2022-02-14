
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {int dummy; } ;
struct TYPE_6__ {int lvds_chip_name; } ;
struct TYPE_5__ {TYPE_1__* chip_info; int lvds_setting_info2; int lvds_setting_info; } ;
struct TYPE_4__ {TYPE_3__ lvds_chip_info2; TYPE_3__ lvds_chip_info; } ;



 int FUNC_0 (struct seq_file*,char*,int,int) ;
 int FUNC_1 (int ,TYPE_3__*,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 u8 VAR_3 = 0, VAR_4 = 0;
 switch (VAR_0->chip_info->lvds_chip_info.lvds_chip_name) {
 case 128:
  VAR_3 =
      FUNC_1(VAR_0->lvds_setting_info,
      &VAR_0->chip_info->lvds_chip_info, 0x08) & 0x0f;
  VAR_4 =
      FUNC_1(VAR_0->lvds_setting_info,
      &VAR_0->chip_info->lvds_chip_info, 0x09) & 0x1f;
  FUNC_0(VAR_1, "%x %x\n", VAR_3, VAR_4);
  break;
 default:
  break;
 }
 switch (VAR_0->chip_info->lvds_chip_info2.lvds_chip_name) {
 case 128:
  VAR_3 =
      FUNC_1(VAR_0->lvds_setting_info2,
   &VAR_0->chip_info->lvds_chip_info2, 0x08) & 0x0f;
  VAR_4 =
      FUNC_1(VAR_0->lvds_setting_info2,
   &VAR_0->chip_info->lvds_chip_info2, 0x09) & 0x1f;
  FUNC_0(VAR_1, " %x %x\n", VAR_3, VAR_4);
  break;
 default:
  break;
 }
 return 0;
}
