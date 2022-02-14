
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct lcnphy_iq_est {int iq_prod; int i_pwr; int q_pwr; } ;
struct brcms_phy {int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static bool
FUNC_4(struct brcms_phy *VAR_0,
       u16 VAR_1,
       u8 VAR_2, struct lcnphy_iq_est *VAR_3)
{
 int VAR_4 = 0;
 bool VAR_5 = 1;
 u8 VAR_6;
 VAR_6 = FUNC_0(VAR_0->radio_chanspec);

 FUNC_1(VAR_0, 0x6da, (0x1 << 5), (1) << 5);

 FUNC_1(VAR_0, 0x410, (0x1 << 3), (0) << 3);

 FUNC_1(VAR_0, 0x482, (0xffff << 0), (VAR_1) << 0);

 FUNC_1(VAR_0, 0x481, (0xff << 0), ((u16) VAR_2) << 0);

 FUNC_1(VAR_0, 0x481, (0x1 << 8), (0) << 8);

 FUNC_1(VAR_0, 0x481, (0x1 << 9), (1) << 9);

 while (FUNC_2(VAR_0, 0x481) & (0x1 << 9)) {

  if (VAR_4 > (10 * 500)) {
   VAR_5 = 0;
   goto cleanup;
  }
  FUNC_3(100);
  VAR_4++;
 }

 VAR_3->iq_prod = ((u32) FUNC_2(VAR_0, 0x483) << 16) |
     (u32) FUNC_2(VAR_0, 0x484);
 VAR_3->i_pwr = ((u32) FUNC_2(VAR_0, 0x485) << 16) |
   (u32) FUNC_2(VAR_0, 0x486);
 VAR_3->q_pwr = ((u32) FUNC_2(VAR_0, 0x487) << 16) |
   (u32) FUNC_2(VAR_0, 0x488);

cleanup:
 FUNC_1(VAR_0, 0x410, (0x1 << 3), (1) << 3);

 FUNC_1(VAR_0, 0x6da, (0x1 << 5), (0) << 5);

 return VAR_5;
}
