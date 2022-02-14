
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nphy_iq_est {int i0_pwr; int q0_pwr; int iq0_prod; int i1_pwr; int q1_pwr; int iq1_prod; } ;
struct b43_wldev {int dummy; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct nphy_iq_est*,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_18, struct nphy_iq_est *VAR_19,
    u16 VAR_20, u8 VAR_21, bool VAR_22)
{
 int VAR_23;
 u16 VAR_24;

 FUNC_4(VAR_18, VAR_15, VAR_20);
 FUNC_1(VAR_18, VAR_16, ~VAR_17, VAR_21);
 if (VAR_22)
  FUNC_3(VAR_18, VAR_0, VAR_1);
 else
  FUNC_0(VAR_18, VAR_0, ~VAR_1);

 FUNC_3(VAR_18, VAR_0, VAR_2);

 for (VAR_23 = 1000; VAR_23; VAR_23--) {
  VAR_24 = FUNC_2(VAR_18, VAR_0);
  if (!(VAR_24 & VAR_2)) {
   VAR_19->i0_pwr = (FUNC_2(VAR_18, VAR_3) << 16) |
     FUNC_2(VAR_18, VAR_5);
   VAR_19->q0_pwr = (FUNC_2(VAR_18, VAR_11) << 16) |
     FUNC_2(VAR_18, VAR_13);
   VAR_19->iq0_prod = (FUNC_2(VAR_18, VAR_7) << 16) |
     FUNC_2(VAR_18, VAR_9);

   VAR_19->i1_pwr = (FUNC_2(VAR_18, VAR_4) << 16) |
     FUNC_2(VAR_18, VAR_6);
   VAR_19->q1_pwr = (FUNC_2(VAR_18, VAR_12) << 16) |
     FUNC_2(VAR_18, VAR_14);
   VAR_19->iq1_prod = (FUNC_2(VAR_18, VAR_8) << 16) |
     FUNC_2(VAR_18, VAR_10);
   return;
  }
  FUNC_6(10);
 }
 FUNC_5(VAR_19, 0, sizeof(*VAR_19));
}
