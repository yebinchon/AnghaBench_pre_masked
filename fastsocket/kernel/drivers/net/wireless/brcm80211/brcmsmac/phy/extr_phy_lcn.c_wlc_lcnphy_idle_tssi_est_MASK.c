
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lcnphy_txgains {int dummy; } ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {TYPE_1__* sh; int d11core; } ;
struct TYPE_2__ {int physhim; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*,int ,int,int) ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct brcms_phy*) ;
 int FUNC_9 (struct brcms_phy*,struct lcnphy_txgains*) ;
 int FUNC_10 (struct brcms_phy*) ;
 int FUNC_11 (struct brcms_phy*,struct lcnphy_txgains*) ;
 int FUNC_12 (struct brcms_phy*,int) ;
 int FUNC_13 (struct brcms_phy*,int) ;
 int FUNC_14 (struct brcms_phy*,int) ;
 int FUNC_15 (struct brcms_phy*) ;
 int FUNC_16 (struct brcms_phy*) ;
 int FUNC_17 (struct brcms_phy*,int,int ) ;
 int FUNC_18 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void FUNC_19(struct brcms_phy_pub *VAR_8)
{
 bool VAR_9, VAR_10;
 struct lcnphy_txgains VAR_11;
 struct brcms_phy *VAR_12 = (struct brcms_phy *) VAR_8;
 u16 VAR_13, VAR_14, VAR_15, VAR_16,
     VAR_17;
 u16 VAR_18 = FUNC_10(VAR_12);
 u16 VAR_19 = FUNC_5(VAR_12, VAR_5);
 u16 VAR_20 =
  FUNC_5(VAR_12, VAR_3) & 1;
 u16 VAR_21 = FUNC_5(VAR_12, VAR_4) & 0x10;
 u16 VAR_22 = FUNC_5(VAR_12, VAR_6) & 4;
 VAR_13 = FUNC_4(VAR_12, 0x4ab);
 VAR_9 = (0 == (FUNC_1(VAR_12->d11core, FUNC_0(VAR_7)) &
    VAR_1));
 if (!VAR_9)
  FUNC_7(VAR_12->sh->physhim);
 FUNC_14(VAR_12, VAR_0);

 VAR_10 = FUNC_16(VAR_12);
 FUNC_9(VAR_12, &VAR_11);

 FUNC_8(VAR_12);
 FUNC_13(VAR_12, 127);
 FUNC_18(VAR_12, VAR_5, 0x6);
 FUNC_3(VAR_12, VAR_3, 0x1, 1);
 FUNC_3(VAR_12, VAR_4, 0x10, 1 << 4);
 FUNC_3(VAR_12, VAR_6, 0x4, 1 << 2);
 FUNC_15(VAR_12);
 FUNC_17(VAR_12, 1, VAR_2);
 VAR_13 = ((FUNC_4(VAR_12, 0x4ab) & (0x1ff << 0))
      >> 0);

 VAR_14 = ((FUNC_4(VAR_12, 0x63e) & (0x1ff << 0))
   >> 0);

 if (VAR_14 >= 256)
  VAR_15 = VAR_14 - 256;
 else
  VAR_15 = VAR_14 + 256;

 VAR_16 = VAR_15;
 if (VAR_16 >= 256)
  VAR_17 = VAR_16 - 256;
 else
  VAR_17 = VAR_16 + 256;
 FUNC_2(VAR_12, 0x4a6, (0x1ff << 0), (VAR_17) << 0);

 FUNC_2(VAR_12, 0x44c, (0x1 << 12), (0) << 12);

 FUNC_12(VAR_12, VAR_10);
 FUNC_11(VAR_12, &VAR_11);
 FUNC_14(VAR_12, VAR_18);

 FUNC_18(VAR_12, VAR_5, VAR_19);
 FUNC_3(VAR_12, VAR_3, 0x1, VAR_20);
 FUNC_3(VAR_12, VAR_4, 0x10, VAR_21);
 FUNC_3(VAR_12, VAR_6, 0x4, VAR_22);
 FUNC_3(VAR_12, VAR_5, 0x80, 1 << 7);
 if (!VAR_9)
  FUNC_6(VAR_12->sh->physhim);
}
