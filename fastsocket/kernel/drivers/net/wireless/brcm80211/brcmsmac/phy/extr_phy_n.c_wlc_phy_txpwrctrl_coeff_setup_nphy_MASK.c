
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {scalar_t__ phyhang_avoid; TYPE_2__* sh; TYPE_1__ pubpi; } ;
typedef int s8 ;
typedef scalar_t__ locomp ;
struct TYPE_4__ {int physhim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int* VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (struct brcms_phy*,int,int,int,int,int*) ;
 int FUNC_5 (struct brcms_phy*,int,int,int,int,int*) ;

__attribute__((used)) static void FUNC_6(struct brcms_phy *VAR_5)
{
 u32 VAR_6;
 u16 VAR_7[7];
 u32 VAR_8, VAR_9, VAR_10;
 s8 VAR_11, VAR_12;
 s8 VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 u32 VAR_18[128];

 if (VAR_5->phyhang_avoid)
  FUNC_3(VAR_5, 1);

 FUNC_4(VAR_5, 15, 7, 80, 16, VAR_7);

 VAR_16 = 128;
 VAR_17 = 320;
 for (VAR_15 = VAR_2;
      VAR_15 <= VAR_3; VAR_15++) {
  VAR_8 =
   (VAR_15 ==
    26) ? (((u32) (VAR_7[0] & 0x3ff)) << 10) |
   (VAR_7[1] & 0x3ff)
   : (((u32) (VAR_7[2] & 0x3ff)) << 10) |
   (VAR_7[3] & 0x3ff);

  for (VAR_6 = 0; VAR_6 < VAR_16; VAR_6++)
   VAR_18[VAR_6] = VAR_8;
  FUNC_5(VAR_5, VAR_15, VAR_16, VAR_17, 32,
      VAR_18);
 }

 VAR_17 = 448;
 for (VAR_15 = VAR_2;
      VAR_15 <= VAR_3; VAR_15++) {

  VAR_9 =
   (u32) ((VAR_15 == 26) ? VAR_7[5] : VAR_7[6]);
  VAR_11 = (s8) ((VAR_9 >> 8) & 0xff);
  VAR_12 = (s8) ((VAR_9) & 0xff);
  for (VAR_6 = 0; VAR_6 < VAR_16; VAR_6++) {
   if (FUNC_0(VAR_5->pubpi.phy_rev, 3)) {
    VAR_13 = VAR_11;
    VAR_14 = VAR_12;
   } else {
    VAR_13 = (s8) ((VAR_11 *
             VAR_4[VAR_6] +
             128) >> 8);
    VAR_14 =
     (s8) ((VAR_12 *
            VAR_4[VAR_6] +
            128) >> 8);
   }
   VAR_10 = (u32) ((VAR_13 & 0xff) << 8);
   VAR_10 |= (u32) (VAR_14 & 0xff);
   VAR_18[VAR_6] = VAR_10;
  }
  FUNC_5(VAR_5, VAR_15, VAR_16, VAR_17, 32,
      VAR_18);
 }

 if (FUNC_1(VAR_5->pubpi.phy_rev, 2)) {

  FUNC_2(VAR_5->sh->physhim, VAR_0, 0xFFFF);
  FUNC_2(VAR_5->sh->physhim, VAR_1, 0xFFFF);
 }

 if (VAR_5->phyhang_avoid)
  FUNC_3(VAR_5, 0);
}
