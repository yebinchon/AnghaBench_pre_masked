
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;
typedef int s8 ;
typedef int s32 ;
typedef int s16 ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (struct brcms_phy*,int ,int) ;
 int FUNC_4 (struct brcms_phy*,int,int) ;

int
FUNC_5(struct brcms_phy *VAR_1, u8 VAR_2, s32 *VAR_3,
         u8 VAR_4)
{
 s16 VAR_5, VAR_6;
 u16 VAR_7 = 0;
 u16 VAR_8 = 0;
 u16 VAR_9 = 0;
 u16 VAR_10 = 0;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;
 u16 VAR_16 = 0;
 u16 VAR_17 = 0;
 u16 VAR_18 = 0;
 s8 VAR_19[4];
 u8 VAR_20 = 0, VAR_21 = 0;
 s32 VAR_22;
 u16 VAR_23;

 VAR_7 = FUNC_2(VAR_1, 0xa6);
 VAR_8 = FUNC_2(VAR_1, 0xa7);
 if (FUNC_0(VAR_1->pubpi.phy_rev, 3)) {
  VAR_13 = FUNC_2(VAR_1, 0xf9);
  VAR_14 = FUNC_2(VAR_1, 0xfb);
  VAR_9 = FUNC_2(VAR_1, 0x8f);
  VAR_10 = FUNC_2(VAR_1, 0xa5);
  VAR_11 = FUNC_2(VAR_1, 0xe5);
  VAR_12 = FUNC_2(VAR_1, 0xe6);
 } else {
  VAR_9 = FUNC_2(VAR_1, 0xa5);
  VAR_15 = FUNC_2(VAR_1, 0x78);
  VAR_16 = FUNC_2(VAR_1, 0xec);
  VAR_17 = FUNC_2(VAR_1, 0x7a);
  VAR_18 = FUNC_2(VAR_1, 0x7d);
 }

 FUNC_3(VAR_1, VAR_0, VAR_2);

 VAR_23 = FUNC_2(VAR_1, 0xca);
 if (FUNC_1(VAR_1->pubpi.phy_rev, 2))
  FUNC_4(VAR_1, 0xca, 5);

 for (VAR_20 = 0; VAR_20 < 4; VAR_20++)
  VAR_3[VAR_20] = 0;

 for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {
  if (FUNC_1(VAR_1->pubpi.phy_rev, 2)) {
   VAR_5 = FUNC_2(VAR_1, 0x1c9);
   VAR_6 = FUNC_2(VAR_1, 0x1ca);
  } else {
   VAR_5 = FUNC_2(VAR_1, 0x219);
   VAR_6 = FUNC_2(VAR_1, 0x21a);
  }

  VAR_20 = 0;
  VAR_19[VAR_20++] = ((s8) ((VAR_5 & 0x3f) << 2)) >> 2;
  VAR_19[VAR_20++] = ((s8) (((VAR_5 >> 8) & 0x3f) << 2)) >> 2;
  VAR_19[VAR_20++] = ((s8) ((VAR_6 & 0x3f) << 2)) >> 2;
  VAR_19[VAR_20++] = ((s8) (((VAR_6 >> 8) & 0x3f) << 2)) >> 2;

  for (VAR_20 = 0; VAR_20 < 4; VAR_20++)
   VAR_3[VAR_20] += VAR_19[VAR_20];

 }

 VAR_22 = VAR_3[3] & 0xff;
 VAR_22 |= (VAR_3[2] & 0xff) << 8;
 VAR_22 |= (VAR_3[1] & 0xff) << 16;
 VAR_22 |= (VAR_3[0] & 0xff) << 24;

 if (FUNC_1(VAR_1->pubpi.phy_rev, 2))
  FUNC_4(VAR_1, 0xca, VAR_23);

 FUNC_4(VAR_1, 0xa6, VAR_7);
 FUNC_4(VAR_1, 0xa7, VAR_8);
 if (FUNC_0(VAR_1->pubpi.phy_rev, 3)) {
  FUNC_4(VAR_1, 0xf9, VAR_13);
  FUNC_4(VAR_1, 0xfb, VAR_14);
  FUNC_4(VAR_1, 0x8f, VAR_9);
  FUNC_4(VAR_1, 0xa5, VAR_10);
  FUNC_4(VAR_1, 0xe5, VAR_11);
  FUNC_4(VAR_1, 0xe6, VAR_12);
 } else {
  FUNC_4(VAR_1, 0xa5, VAR_9);
  FUNC_4(VAR_1, 0x78, VAR_15);
  FUNC_4(VAR_1, 0xec, VAR_16);
  FUNC_4(VAR_1, 0x7a, VAR_17);
  FUNC_4(VAR_1, 0x7d, VAR_18);
 }

 return VAR_22;
}
