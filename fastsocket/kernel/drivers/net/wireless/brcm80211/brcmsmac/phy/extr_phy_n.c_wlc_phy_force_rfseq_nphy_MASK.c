
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct brcms_phy {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct brcms_phy*,int,int) ;
 int FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (struct brcms_phy*,int,int) ;

void FUNC_5(struct brcms_phy *VAR_14, u8 VAR_15)
{
 u16 VAR_16, VAR_17;
 u16 VAR_18;

 switch (VAR_15) {
 case 132:
  VAR_16 = VAR_9;
  VAR_17 = VAR_3;
  break;
 case 131:
  VAR_16 = VAR_10;
  VAR_17 = VAR_4;
  break;
 case 133:
  VAR_16 = VAR_8;
  VAR_17 = VAR_2;
  break;
 case 130:
  VAR_16 = VAR_11;
  VAR_17 = VAR_5;
  break;
 case 129:
  VAR_16 = VAR_12;
  VAR_17 = VAR_6;
  break;
 case 128:
  VAR_16 = VAR_13;
  VAR_17 = VAR_7;
  break;
 default:
  return;
 }

 VAR_18 = FUNC_3(VAR_14, 0xa1);
 FUNC_2(VAR_14, 0xa1,
     (VAR_0 |
      VAR_1));
 FUNC_2(VAR_14, 0xa3, VAR_16);
 FUNC_0((FUNC_3(VAR_14, 0xa4) & VAR_17), 200000);
 FUNC_4(VAR_14, 0xa1, VAR_18);
 FUNC_1(FUNC_3(VAR_14, 0xa4) & VAR_17, "HW error in rf");
}
