
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct brcms_phy_lcnphy {size_t lcnphy_lastsensed_temperature; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {int radio_chanspec; TYPE_1__ u; } ;
typedef size_t s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_2 (struct brcms_phy*,int) ;
 size_t FUNC_3 (struct brcms_phy*,size_t*) ;
 int FUNC_4 (struct brcms_phy*,int ) ;
 int FUNC_5 (int ) ;

s32 FUNC_6(struct brcms_phy *VAR_2, s32 VAR_3)
{
 s32 VAR_4 = 0;
 s32 VAR_5;
 s32 VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10;
 s32 VAR_11, VAR_12;
 u32 VAR_13;
 u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 uint VAR_20;
 struct brcms_phy_lcnphy *VAR_21 = VAR_2->u.pi_lcnphy;

 VAR_11 = FUNC_3(VAR_2, &VAR_3);

 VAR_4 = VAR_1[VAR_3];

 VAR_5 = FUNC_2(VAR_2, 0x425) >> 8;

 VAR_13 = (VAR_11 * 16);
 VAR_14 = FUNC_1(VAR_13) - 1;
 VAR_15 = VAR_14 + 1;
 VAR_16 = 1 << VAR_14;
 VAR_17 = 1 << VAR_15;
 VAR_18 = (VAR_13 - VAR_16);
 VAR_19 = (VAR_17 - VAR_13);
 if (VAR_18 < VAR_19)
  VAR_6 = VAR_14;
 else
  VAR_6 = VAR_15;

 VAR_6 = VAR_6 * 3;

 VAR_7 = (VAR_5 / 2) - (VAR_6);

 VAR_8 = VAR_4 + VAR_7;

 VAR_9 = FUNC_2(VAR_2, 0x434) & 0xFF;

 if (VAR_9 > 127)
  VAR_9 -= 256;

 VAR_10 = VAR_9 - VAR_8;

 VAR_10 =
  VAR_10 + VAR_0[VAR_3];

 VAR_20 = FUNC_5(FUNC_0(VAR_2->radio_chanspec));
 if ((VAR_20 > 2427) && (VAR_20 <= 2467))
  VAR_10 = VAR_10 - 1;

 VAR_12 = VAR_21->lcnphy_lastsensed_temperature;

 if ((VAR_12 - 15) < -30)
  VAR_10 =
   VAR_10 +
   (((VAR_12 - 10 - 25) * 286) >> 12) -
   7;
 else if ((VAR_12 - 15) < 4)
  VAR_10 =
   VAR_10 +
   (((VAR_12 - 10 - 25) * 286) >> 12) -
   3;
 else
  VAR_10 = VAR_10 +
     (((VAR_12 - 10 - 25) * 286) >> 12);

 FUNC_4(VAR_2, 0);

 return VAR_10;
}
