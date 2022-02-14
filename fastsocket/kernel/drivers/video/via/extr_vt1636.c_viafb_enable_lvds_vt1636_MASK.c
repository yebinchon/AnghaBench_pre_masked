
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_setting_information {int dummy; } ;
struct lvds_chip_information {int output_interface; } ;






 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lvds_setting_information*,struct lvds_chip_information*,int ) ;
 int FUNC_1 (int ,int ,int,int) ;

void FUNC_2(struct lvds_setting_information
   *VAR_4,
   struct lvds_chip_information *VAR_5)
{

 FUNC_0(VAR_4, VAR_5,
     VAR_2[0]);


 switch (VAR_5->output_interface) {
 case 129:
  {
   FUNC_1(VAR_0, VAR_3, 0xC0, 0xC0);
   break;
  }

 case 128:
  {
   FUNC_1(VAR_0, VAR_3, 0x30, 0x30);
   break;
  }

 case 130:
  {
   FUNC_1(VAR_1, VAR_3, 0x03, 0x03);
   break;
  }

 case 131:
  {
   FUNC_1(VAR_1, VAR_3, 0x03, 0x0C);
   break;
  }

 }
}
