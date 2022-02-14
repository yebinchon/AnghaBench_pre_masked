
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_setting_information {int dummy; } ;
struct lvds_chip_information {int output_interface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct lvds_setting_information
        *VAR_14,
        struct lvds_chip_information *VAR_15)
{
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 if (129 == VAR_15->output_interface)
  VAR_16 = 1;
 if (130 == VAR_15->output_interface)
  VAR_16 = 1;
 if (128 == VAR_15->output_interface)
  VAR_17 = 1;
 if (VAR_17) {



  FUNC_0(VAR_10, VAR_12, 0, VAR_1);


  FUNC_0(VAR_9, VAR_12, 0xC0, VAR_4 + VAR_5);
 }
 if (VAR_16) {



  FUNC_0(VAR_6, VAR_12, 0, VAR_3);


  FUNC_0(VAR_7, VAR_12, 0xC0, VAR_4 + VAR_5);
 }


 FUNC_0(VAR_11, VAR_13, 0, VAR_0 + VAR_1 + VAR_2 + VAR_3);


 switch (VAR_15->output_interface) {
 case 130:
  {
   FUNC_0(VAR_8, VAR_12, 0x80, VAR_5);
   break;
  }

 case 128:
  {
   FUNC_0(VAR_8, VAR_12, 0x40, VAR_4);
   break;
  }

 case 129:
  {
   FUNC_0(VAR_8, VAR_12, 0xC0, VAR_4 + VAR_5);
   break;
  }
 }
}
