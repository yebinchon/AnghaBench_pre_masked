
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nphy_rf_control_override_rev7 {int val_addr_core0; int val_addr_core1; int val_mask; int val_shift; } ;
struct b43_wldev {int wl; } ;


 int FUNC_0 (int**) ;
 struct nphy_rf_control_override_rev7* FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_0, u16 VAR_1,
       u16 VAR_2, u8 VAR_3, bool VAR_4,
       u8 VAR_5)
{
 const struct nphy_rf_control_override_rev7 *VAR_6;
 u16 VAR_7[3][2] = {
  { 0x0E7, 0x0EC }, { 0x342, 0x343 }, { 0x346, 0x347 }
 };
 u16 VAR_8;
 u16 VAR_9 = VAR_1;
 u16 VAR_10;
 u8 VAR_11;


 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_5);

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  if (VAR_5 >= FUNC_0(VAR_7)) {
   FUNC_5(VAR_0->wl, "Invalid override value %d\n", VAR_5);
   return;
  }
  VAR_8 = VAR_7[VAR_5][VAR_11];

  VAR_10 = (VAR_11 == 0) ? VAR_6->val_addr_core0 : VAR_6->val_addr_core1;

  if (VAR_4) {
   FUNC_2(VAR_0, VAR_8, ~VAR_9);
   if (VAR_6)
    FUNC_2(VAR_0, VAR_10, ~VAR_6->val_mask);
  } else {
   if (!VAR_3 || (VAR_3 & (1 << VAR_11))) {
    FUNC_4(VAR_0, VAR_8, VAR_9);
    if (VAR_6)
     FUNC_3(VAR_0, VAR_10, ~VAR_6->val_mask, (VAR_2 << VAR_6->val_shift));
   }
  }
 }
}
