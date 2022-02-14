
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lpphy_iq_est {int iq_prod; int i_pwr; int q_pwr; } ;
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
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct b43_wldev *VAR_9, u16 VAR_10, u8 VAR_11,
      struct lpphy_iq_est *VAR_12)
{
 int VAR_13;

 FUNC_0(VAR_9, VAR_0, 0xFFF7);
 FUNC_4(VAR_9, VAR_6, VAR_10);
 FUNC_1(VAR_9, VAR_3, 0xFF00, VAR_11);
 FUNC_0(VAR_9, VAR_3, 0xFEFF);
 FUNC_3(VAR_9, VAR_3, 0x200);

 for (VAR_13 = 0; VAR_13 < 500; VAR_13++) {
  if (!(FUNC_2(VAR_9,
    VAR_3) & 0x200))
   break;
  FUNC_5(1);
 }

 if ((FUNC_2(VAR_9, VAR_3) & 0x200)) {
  FUNC_3(VAR_9, VAR_0, 0x8);
  return 0;
 }

 VAR_12->iq_prod = FUNC_2(VAR_9, VAR_1);
 VAR_12->iq_prod <<= 16;
 VAR_12->iq_prod |= FUNC_2(VAR_9, VAR_2);

 VAR_12->i_pwr = FUNC_2(VAR_9, VAR_4);
 VAR_12->i_pwr <<= 16;
 VAR_12->i_pwr |= FUNC_2(VAR_9, VAR_5);

 VAR_12->q_pwr = FUNC_2(VAR_9, VAR_7);
 VAR_12->q_pwr <<= 16;
 VAR_12->q_pwr |= FUNC_2(VAR_9, VAR_8);

 FUNC_3(VAR_9, VAR_0, 0x8);
 return 1;
}
