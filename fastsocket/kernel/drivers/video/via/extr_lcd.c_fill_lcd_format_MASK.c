
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* lvds_setting_info; } ;
struct TYPE_3__ {scalar_t__ LCDDithering; scalar_t__ device_lcd_dualedge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void FUNC_1(void)
{
 u8 VAR_5 = 0, VAR_6 = 0;

 if (VAR_4->lvds_setting_info->device_lcd_dualedge)
  VAR_6 = VAR_1;
 if (VAR_4->lvds_setting_info->LCDDithering)
  VAR_5 = VAR_0;

 FUNC_0(VAR_2, VAR_3, (VAR_5 | VAR_6), VAR_1 + VAR_0);
}
