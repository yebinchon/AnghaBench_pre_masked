
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct phy_iq_est {int i_pwr; int q_pwr; int iq_prod; } ;
struct TYPE_2__ {size_t phy_corenum; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int,char*) ;
 int FUNC_8 (struct brcms_phy*,int,int,int) ;
 int FUNC_9 (struct brcms_phy*,int) ;
 int FUNC_10 (struct brcms_phy*,int,int ) ;

void
FUNC_11(struct brcms_phy *VAR_2, struct phy_iq_est *VAR_3,
         u16 VAR_4, u8 VAR_5, u8 VAR_6)
{
 u8 VAR_7;

 FUNC_10(VAR_2, 0x12b, VAR_4);
 FUNC_8(VAR_2, 0x12a, (0xff << 0), (VAR_5 << 0));
 FUNC_8(VAR_2, 0x129, VAR_0,
      (VAR_6) ? VAR_0 : 0);

 FUNC_8(VAR_2, 0x129, VAR_1, VAR_1);

 FUNC_6(((FUNC_9(VAR_2, 0x129) & VAR_1) != 0),
   10000);
 if (FUNC_7(FUNC_9(VAR_2, 0x129) & VAR_1,
   "HW error: rxiq est"))
  return;

 if ((FUNC_9(VAR_2, 0x129) & VAR_1) == 0) {
  for (VAR_7 = 0; VAR_7 < VAR_2->pubpi.phy_corenum; VAR_7++) {
   VAR_3[VAR_7].i_pwr =
    (FUNC_9(VAR_2,
           FUNC_2(VAR_7)) << 16)
    | FUNC_9(VAR_2, FUNC_3(VAR_7));
   VAR_3[VAR_7].q_pwr =
    (FUNC_9(VAR_2,
           FUNC_4(VAR_7)) << 16)
    | FUNC_9(VAR_2, FUNC_5(VAR_7));
   VAR_3[VAR_7].iq_prod =
    (FUNC_9(VAR_2,
           FUNC_0(VAR_7)) << 16) |
    FUNC_9(VAR_2, FUNC_1(VAR_7));
  }
 }
}
