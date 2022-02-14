
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct brcms_phy {int radio_chanspec; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct brcms_phy*,int) ;
 int FUNC_2 (struct brcms_phy*,scalar_t__,int*,scalar_t__) ;
 int FUNC_3 (struct brcms_phy*,int ,int,int ,int,int*) ;

void
FUNC_4(struct brcms_phy *VAR_4, s32 *VAR_5, u8 VAR_6)
{
 u16 VAR_7;
 s32 VAR_8, VAR_9[2];
 s32 VAR_10[2];
 s32 VAR_11[4];
 s32 VAR_12[2];
 u8 VAR_13;

 VAR_7 = FUNC_1(VAR_4, 0x1e9);

 VAR_8 = (s32) (VAR_7 & 0x3f);
 VAR_10[0] = (VAR_8 <= 31) ? VAR_8 : (VAR_8 - 64);

 VAR_8 = (s32) ((VAR_7 >> 8) & 0x3f);
 VAR_10[1] = (VAR_8 <= 31) ? VAR_8 : (VAR_8 - 64);

 VAR_13 =
  FUNC_0(VAR_4->radio_chanspec) ?
  (u8)VAR_1 : (u8)VAR_0;

 FUNC_2(VAR_4, VAR_13, VAR_11, VAR_6);

 VAR_12[0] = VAR_11[0] / ((s32) VAR_6);
 VAR_12[1] = VAR_11[2] / ((s32) VAR_6);

 VAR_9[0] = VAR_10[0] - VAR_12[0] + 64;
 VAR_9[1] = VAR_10[1] - VAR_12[1] + 64;

 if (VAR_9[0] < 0)
  VAR_9[0] = 0;
 else if (VAR_9[0] > 63)
  VAR_9[0] = 63;

 if (VAR_9[1] < 0)
  VAR_9[1] = 0;
 else if (VAR_9[1] > 63)
  VAR_9[1] = 63;

 FUNC_3(VAR_4, VAR_2, 1,
    (u32) VAR_9[0], 32, &VAR_5[0]);
 FUNC_3(VAR_4, VAR_3, 1,
    (u32) VAR_9[1], 32, &VAR_5[1]);
}
