
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int bw; } ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




u32 FUNC_2(struct brcms_phy_pub *VAR_3)
{
 struct brcms_phy *VAR_4 = (struct brcms_phy *) VAR_3;

 u32 VAR_5 = 0;

 if (VAR_4 && (FUNC_1(VAR_4) || FUNC_0(VAR_4))) {
  switch (VAR_4->bw) {
  case 130:
   VAR_5 = VAR_0;
   break;
  case 129:
   VAR_5 = VAR_1;
   break;
  case 128:
   VAR_5 = VAR_2;
   break;
  default:
   break;
  }
 }

 return VAR_5;
}
