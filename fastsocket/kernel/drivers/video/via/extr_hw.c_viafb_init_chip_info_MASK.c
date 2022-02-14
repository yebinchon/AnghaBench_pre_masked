
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_8__ {TYPE_2__* lvds_setting_info; TYPE_1__* lvds_setting_info2; TYPE_3__* crt_setting_info; } ;
struct TYPE_7__ {int refresh_rate; int iga_path; } ;
struct TYPE_6__ {int lcd_mode; int display_method; int get_lcd_size_method; } ;
struct TYPE_5__ {int lcd_mode; int display_method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 TYPE_4__* VAR_5 ;

void FUNC_4(struct pci_dev *VAR_6,
     const struct pci_device_id *VAR_7)
{
 FUNC_0(VAR_6, VAR_7);
 FUNC_2();
 FUNC_1();

 VAR_5->crt_setting_info->iga_path = VAR_1;
 VAR_5->crt_setting_info->refresh_rate = VAR_4;


 FUNC_3();

 VAR_5->lvds_setting_info->display_method = VAR_2;
 VAR_5->lvds_setting_info->get_lcd_size_method =
  VAR_0;
 VAR_5->lvds_setting_info->lcd_mode = VAR_3;
 VAR_5->lvds_setting_info2->display_method =
  VAR_5->lvds_setting_info->display_method;
 VAR_5->lvds_setting_info2->lcd_mode =
  VAR_5->lvds_setting_info->lcd_mode;
}
