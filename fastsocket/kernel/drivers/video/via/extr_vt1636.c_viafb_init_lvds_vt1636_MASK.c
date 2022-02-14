
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_setting_information {scalar_t__ LCDDithering; scalar_t__ device_lcd_dualedge; } ;
struct lvds_chip_information {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct lvds_setting_information*,struct lvds_chip_information*,int ) ;

void FUNC_2(struct lvds_setting_information
 *VAR_5, struct lvds_chip_information *VAR_6)
{
 int VAR_7, VAR_8;


 VAR_7 = FUNC_0(VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_1(VAR_5,
      VAR_6,
      VAR_0[VAR_8]);
 }


 if (VAR_5->device_lcd_dualedge) {
  FUNC_1(VAR_5,
      VAR_6,
      VAR_3[0]);
 } else {
  FUNC_1(VAR_5,
      VAR_6,
      VAR_4[0]);
 }

 if (VAR_5->LCDDithering) {
  FUNC_1(VAR_5,
      VAR_6,
      VAR_2[0]);
 } else {
  FUNC_1(VAR_5,
      VAR_6,
      VAR_1[0]);
 }
}
