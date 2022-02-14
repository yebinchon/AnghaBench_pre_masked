
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83627ehf_data {int* fan_div; int has_fan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct w83627ehf_data*,int ) ;
 int FUNC_1 (struct w83627ehf_data*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct w83627ehf_data *VAR_5, int VAR_6)
{
 u8 VAR_7;

 switch (VAR_6) {
 case 0:
  VAR_7 = (FUNC_0(VAR_5, VAR_1) & 0xcf)
      | ((VAR_5->fan_div[0] & 0x03) << 4);

  VAR_7 |= (VAR_5->has_fan & (1 << 4)) ? 1 : 0;
  FUNC_1(VAR_5, VAR_1, VAR_7);
  VAR_7 = (FUNC_0(VAR_5, VAR_4) & 0xdf)
      | ((VAR_5->fan_div[0] & 0x04) << 3);
  FUNC_1(VAR_5, VAR_4, VAR_7);
  break;
 case 1:
  VAR_7 = (FUNC_0(VAR_5, VAR_1) & 0x3f)
      | ((VAR_5->fan_div[1] & 0x03) << 6);

  VAR_7 |= (VAR_5->has_fan & (1 << 4)) ? 1 : 0;
  FUNC_1(VAR_5, VAR_1, VAR_7);
  VAR_7 = (FUNC_0(VAR_5, VAR_4) & 0xbf)
      | ((VAR_5->fan_div[1] & 0x04) << 4);
  FUNC_1(VAR_5, VAR_4, VAR_7);
  break;
 case 2:
  VAR_7 = (FUNC_0(VAR_5, VAR_2) & 0x3f)
      | ((VAR_5->fan_div[2] & 0x03) << 6);
  FUNC_1(VAR_5, VAR_2, VAR_7);
  VAR_7 = (FUNC_0(VAR_5, VAR_4) & 0x7f)
      | ((VAR_5->fan_div[2] & 0x04) << 5);
  FUNC_1(VAR_5, VAR_4, VAR_7);
  break;
 case 3:
  VAR_7 = (FUNC_0(VAR_5, VAR_0) & 0xfc)
      | (VAR_5->fan_div[3] & 0x03);
  FUNC_1(VAR_5, VAR_0, VAR_7);
  VAR_7 = (FUNC_0(VAR_5, VAR_3) & 0x7f)
      | ((VAR_5->fan_div[3] & 0x04) << 5);
  FUNC_1(VAR_5, VAR_3, VAR_7);
  break;
 case 4:
  VAR_7 = (FUNC_0(VAR_5, VAR_0) & 0x73)
      | ((VAR_5->fan_div[4] & 0x03) << 2)
      | ((VAR_5->fan_div[4] & 0x04) << 5);
  FUNC_1(VAR_5, VAR_0, VAR_7);
  break;
 }
}
