
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int channel; int rev; scalar_t__ is_40mhz; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_n {scalar_t__ hang_avoid; scalar_t__ aband_spurwar_en; scalar_t__ gband_spurwar_en; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0)
{
 struct b43_phy_n *VAR_1 = VAR_0->phy.n;

 u8 VAR_2 = VAR_0->phy.channel;
 int VAR_3[2] = { 57, 58 };
 u32 VAR_4[2] = { 0x3FF, 0x3FF };

 FUNC_0(VAR_0->phy.rev < 3);

 if (VAR_1->hang_avoid)
  FUNC_1(VAR_0, 1);

 if (VAR_1->gband_spurwar_en) {

  if (VAR_2 == 11 && VAR_0->phy.is_40mhz)
   ;
  else
   ;

 }

 if (VAR_1->aband_spurwar_en) {
  if (VAR_2 == 54) {
   VAR_3[0] = 0x20;
   VAR_4[0] = 0x25F;
  } else if (VAR_2 == 38 || VAR_2 == 102 || VAR_2 == 118) {
   if (0 ) {
    VAR_3[0] = 0x20;
    VAR_4[0] = 0x21F;
   } else {
    VAR_3[0] = 0;
    VAR_4[0] = 0;
   }
  } else if (VAR_2 == 134) {
   VAR_3[0] = 0x20;
   VAR_4[0] = 0x21F;
  } else if (VAR_2 == 151) {
   VAR_3[0] = 0x10;
   VAR_4[0] = 0x23F;
  } else if (VAR_2 == 153 || VAR_2 == 161) {
   VAR_3[0] = 0x30;
   VAR_4[0] = 0x23F;
  } else {
   VAR_3[0] = 0;
   VAR_4[0] = 0;
  }

  if (!VAR_3[0] && !VAR_4[0])
   ;
  else
   ;
 }

 if (VAR_1->hang_avoid)
  FUNC_1(VAR_0, 0);
}
