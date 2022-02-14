
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef scalar_t__ u8 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int dummy; } ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct brcms_phy_pub*,int ,scalar_t__*,scalar_t__*,scalar_t__) ;

void
FUNC_5(struct brcms_phy_pub *VAR_3, uint VAR_4,
      u8 *VAR_5, u8 *VAR_6)
{
 struct brcms_phy *VAR_7 = (struct brcms_phy *) VAR_3;
 u8 VAR_8 = 0;
 u8 VAR_9 = 255;
 u8 VAR_10;
 u8 VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_14 = 0;

 VAR_10 = FUNC_1(VAR_7) ? VAR_2 :
         FUNC_0(VAR_7) ? (VAR_1 +
           1) : (VAR_0 + 1);

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {

  FUNC_4(VAR_3, VAR_4, &VAR_12, &VAR_11,
       VAR_13);

  VAR_11 = (VAR_11 > VAR_14) ? (VAR_11 - VAR_14) : 0;

  VAR_11 = (VAR_11 > 6) ? (VAR_11 - 6) : 0;

  VAR_8 = FUNC_2(VAR_8, VAR_11);
  VAR_9 = FUNC_3(VAR_9, VAR_11);
 }
 *VAR_5 = VAR_8;
 *VAR_6 = VAR_9;
}
