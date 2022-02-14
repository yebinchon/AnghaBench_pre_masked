
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_3__ {int phy_corenum; } ;
struct brcms_phy {TYPE_2__* sh; TYPE_1__ pubpi; } ;
typedef scalar_t__ s8 ;
typedef int s32 ;
struct TYPE_4__ {int physhim; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int*,scalar_t__*,int ) ;
 int FUNC_5 (struct brcms_phy*,int,scalar_t__) ;
 scalar_t__ FUNC_6 (struct brcms_phy*) ;

void FUNC_7(struct brcms_phy_pub *VAR_9)
{
 struct brcms_phy *VAR_10 = (struct brcms_phy *) VAR_9;
 u16 VAR_11;
 u8 VAR_12 = 0;
 s8 VAR_13 = VAR_8;

 if (FUNC_0(VAR_10)) {
  u32 VAR_14, VAR_15, VAR_16;
  u16 VAR_17, VAR_18;
  s32 VAR_19, VAR_20;
  u16 VAR_21, VAR_22;

  VAR_11 = FUNC_3(VAR_10->sh->physhim, VAR_2);
  VAR_12 = VAR_11 & VAR_0;

  VAR_17 = FUNC_3(VAR_10->sh->physhim, VAR_3);
  VAR_18 = FUNC_3(VAR_10->sh->physhim, VAR_4);
  VAR_15 = (VAR_18 << 16) + VAR_17;

  VAR_17 = FUNC_3(VAR_10->sh->physhim, VAR_5);
  VAR_18 = FUNC_3(VAR_10->sh->physhim, VAR_6);
  VAR_16 = (VAR_18 << 16) + VAR_17;
  VAR_14 = (VAR_15 + VAR_16) >> 6;

  VAR_21 = 0x44;
  VAR_22 = FUNC_3(VAR_10->sh->physhim, VAR_1);
  if ((VAR_14 > 0 && VAR_14 < 500)
      && ((VAR_22 & 0xc000) == 0x4000)) {

   FUNC_4(&VAR_14, &VAR_13,
        VAR_10->pubpi.phy_corenum);
   VAR_19 = (FUNC_2(VAR_10, 0x434) & 0xFF);
   if (VAR_19 > 127)
    VAR_19 -= 256;

   VAR_13 += (s8) (VAR_19 - 30);

   VAR_20 = (VAR_21 & 0x1ff);
   VAR_13 -= (s8) (VAR_20);
  } else {
   VAR_13 = VAR_7;
  }
 } else if (FUNC_1(VAR_10)) {

  VAR_11 = FUNC_3(VAR_10->sh->physhim, VAR_2);
  VAR_12 = VAR_11 & VAR_0;

  VAR_13 = FUNC_6(VAR_10);
 }

 FUNC_5(VAR_10, VAR_12, VAR_13);

}
