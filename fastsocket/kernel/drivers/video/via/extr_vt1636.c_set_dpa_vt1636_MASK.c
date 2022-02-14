
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_setting_information {int dummy; } ;
struct lvds_chip_information {int dummy; } ;
struct VT1636_DPA_SETTING {int CLK_SEL_ST2; int CLK_SEL_ST1; } ;
struct IODATA {int Index; int Mask; int Data; } ;


 int FUNC_0 (struct lvds_setting_information*,struct lvds_chip_information*,struct IODATA) ;

__attribute__((used)) static void FUNC_1(struct lvds_setting_information
 *VAR_0, struct lvds_chip_information *VAR_1,
      struct VT1636_DPA_SETTING *VAR_2)
{
 struct IODATA VAR_3;

 VAR_3.Index = 0x09;
 VAR_3.Mask = 0x1F;
 VAR_3.Data = VAR_2->CLK_SEL_ST1;
 FUNC_0(VAR_0,
  VAR_1, VAR_3);

 VAR_3.Index = 0x08;
 VAR_3.Mask = 0x0F;
 VAR_3.Data = VAR_2->CLK_SEL_ST2;
 FUNC_0(VAR_0, VAR_1,
  VAR_3);
}
