
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpphy_iq_est {int i_pwr; int q_pwr; } ;
struct b43_wldev {int dummy; } ;
typedef int iq_est ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int,int,int,int,int ) ;
 int FUNC_4 (struct b43_wldev*,int,int,struct lpphy_iq_est*) ;
 int FUNC_5 (struct b43_wldev*,int) ;
 int FUNC_6 (struct b43_wldev*,int,int) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct lpphy_iq_est*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct b43_wldev *VAR_5)
{
 struct lpphy_iq_est VAR_6;
 int VAR_7, VAR_8 = -1;
 u32 VAR_9;

 FUNC_8(&VAR_6, 0, sizeof(VAR_6));

 FUNC_6(VAR_5, 1, 1);
 FUNC_1(VAR_5, VAR_1, 1);
 FUNC_0(VAR_5, VAR_2, 0xFFFE);
 FUNC_1(VAR_5, VAR_3, 0x800);
 FUNC_1(VAR_5, VAR_4, 0x800);
 FUNC_1(VAR_5, VAR_3, 0x8);
 FUNC_1(VAR_5, VAR_4, 0x8);
 FUNC_2(VAR_5, VAR_0, 0x80);
 FUNC_1(VAR_5, VAR_3, 0x80);
 FUNC_1(VAR_5, VAR_4, 0x80);
 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  FUNC_5(VAR_5, VAR_7);
  FUNC_3(VAR_5, 1, 1, 5, 5, 0);
  if (!(FUNC_4(VAR_5, 1000, 32, &VAR_6)))
   continue;
  VAR_9 = (VAR_6.i_pwr + VAR_6.q_pwr) / 1000;
  if ((VAR_9 > 4000) && (VAR_9 < 10000)) {
   VAR_8 = VAR_7;
   break;
  }
 }
 FUNC_7(VAR_5);
 return VAR_8;
}
