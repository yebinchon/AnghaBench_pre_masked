
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct b43_phy {int radio_manuf; int radio_ver; int radio_rev; int analog; int type; int rev; } ;
struct b43_wldev {int wl; TYPE_1__* dev; struct b43_phy phy; } ;
struct TYPE_2__ {int core_rev; int chip_id; int chip_rev; } ;


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
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (int ,char*,int,int,int) ;
 int FUNC_5 (int ,char*,int,int,int,...) ;
 int FUNC_6 (int ,char*,int,int,int ,int) ;

__attribute__((used)) static int FUNC_7(struct b43_wldev *VAR_13)
{
 struct b43_phy *VAR_14 = &VAR_13->phy;
 u32 VAR_15;
 u8 VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 u16 VAR_19;
 u16 VAR_20;
 u16 VAR_21;
 int VAR_22 = 0;


 VAR_15 = FUNC_2(VAR_13, VAR_0);
 VAR_16 = (VAR_15 & VAR_6) >> VAR_7;
 VAR_17 = (VAR_15 & VAR_8) >> VAR_9;
 VAR_18 = (VAR_15 & VAR_10);
 switch (VAR_17) {
 case 134:
  if (VAR_18 >= 4)
   VAR_22 = 1;
  break;
 case 133:
  if (VAR_18 != 2 && VAR_18 != 4 && VAR_18 != 6
      && VAR_18 != 7)
   VAR_22 = 1;
  break;
 case 132:
  if (VAR_18 > 9)
   VAR_22 = 1;
  break;
 default:
  VAR_22 = 1;
 }
 if (VAR_22) {
  FUNC_5(VAR_13->wl, "FOUND UNSUPPORTED PHY (Analog %u, Type %d (%s), Revision %u)\n",
         VAR_16, VAR_17, FUNC_1(VAR_13, VAR_17),
         VAR_18);
  return -VAR_12;
 }
 FUNC_6(VAR_13->wl, "Found PHY: Analog %u, Type %d (%s), Revision %u\n",
  VAR_16, VAR_17, FUNC_1(VAR_13, VAR_17), VAR_18);


 if (VAR_13->dev->core_rev >= 24) {
  u16 VAR_23[3];

  for (VAR_15 = 0; VAR_15 < 3; VAR_15++) {
   FUNC_3(VAR_13, VAR_1, VAR_15);
   VAR_23[VAR_15] = FUNC_2(VAR_13, VAR_2);
  }




  VAR_19 = 0x17F;
  VAR_20 = (VAR_23[2] << 8) | VAR_23[1];
  VAR_21 = (VAR_23[0] & 0xF);
 } else {
  if (VAR_13->dev->chip_id == 0x4317) {
   if (VAR_13->dev->chip_rev == 0)
    VAR_15 = 0x3205017F;
   else if (VAR_13->dev->chip_rev == 1)
    VAR_15 = 0x4205017F;
   else
    VAR_15 = 0x5205017F;
  } else {
   FUNC_3(VAR_13, VAR_3,
        VAR_11);
   VAR_15 = FUNC_2(VAR_13, VAR_5);
   FUNC_3(VAR_13, VAR_3,
        VAR_11);
   VAR_15 |= (u32)FUNC_2(VAR_13, VAR_4)
    << 16;
  }
  VAR_19 = (VAR_15 & 0x00000FFF);
  VAR_20 = (VAR_15 & 0x0FFFF000) >> 12;
  VAR_21 = (VAR_15 & 0xF0000000) >> 28;
 }

 if (VAR_19 != 0x17F )
  VAR_22 = 1;
 switch (VAR_17) {
 case 134:
  if (VAR_20 != 0x2060)
   VAR_22 = 1;
  if (VAR_21 != 1)
   VAR_22 = 1;
  if (VAR_19 != 0x17F)
   VAR_22 = 1;
  break;
 case 133:
  if ((VAR_20 & 0xFFF0) != 0x2050)
   VAR_22 = 1;
  break;
 case 132:
  if (VAR_20 != 0x2050)
   VAR_22 = 1;
  break;
 case 128:
  if (VAR_20 != 0x2055 && VAR_20 != 0x2056)
   VAR_22 = 1;
  break;
 case 129:
  if (VAR_20 != 0x2062 && VAR_20 != 0x2063)
   VAR_22 = 1;
  break;
 case 131:
  if (VAR_20 != 0x2059)
   VAR_22 = 1;
  break;
 case 130:
  if (VAR_20 != 0x2064)
   VAR_22 = 1;
  break;
 default:
  FUNC_0(1);
 }
 if (VAR_22) {
  FUNC_5(VAR_13->wl, "FOUND UNSUPPORTED RADIO "
         "(Manuf 0x%X, Version 0x%X, Revision %u)\n",
         VAR_19, VAR_20, VAR_21);
  return -VAR_12;
 }
 FUNC_4(VAR_13->wl, "Found Radio: Manuf 0x%X, Version 0x%X, Revision %u\n",
        VAR_19, VAR_20, VAR_21);

 VAR_14->radio_manuf = VAR_19;
 VAR_14->radio_ver = VAR_20;
 VAR_14->radio_rev = VAR_21;

 VAR_14->analog = VAR_16;
 VAR_14->type = VAR_17;
 VAR_14->rev = VAR_18;

 return 0;
}
