
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct radio_regs {int dummy; } ;
struct TYPE_2__ {int radiorev; int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct radio_regs* VAR_5 ;
 struct radio_regs* VAR_6 ;
 struct radio_regs* VAR_7 ;
 struct radio_regs* VAR_8 ;
 struct radio_regs* VAR_9 ;
 struct radio_regs* VAR_10 ;
 struct radio_regs* VAR_11 ;
 struct radio_regs* VAR_12 ;
 struct radio_regs* VAR_13 ;
 struct radio_regs* VAR_14 ;
 struct radio_regs* VAR_15 ;
 struct radio_regs* VAR_16 ;
 struct radio_regs* VAR_17 ;
 struct radio_regs* VAR_18 ;
 struct radio_regs* VAR_19 ;
 struct radio_regs* VAR_20 ;
 struct radio_regs* VAR_21 ;
 struct radio_regs* VAR_22 ;
 struct radio_regs* VAR_23 ;
 struct radio_regs* VAR_24 ;
 struct radio_regs* VAR_25 ;
 int FUNC_1 (struct brcms_phy*,struct radio_regs const*,int ) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_26)
{
 const struct radio_regs *VAR_27 = ((void*)0);
 const struct radio_regs *VAR_28 = ((void*)0);
 const struct radio_regs *VAR_29 = ((void*)0);

 if (FUNC_0(VAR_26->pubpi.phy_rev, 3)) {
  VAR_27 = VAR_12;
  VAR_28 = VAR_19;
  VAR_29 = VAR_5;
 } else if (FUNC_0(VAR_26->pubpi.phy_rev, 4)) {
  VAR_27 = VAR_13;
  VAR_28 = VAR_20;
  VAR_29 = VAR_6;
 } else {
  switch (VAR_26->pubpi.radiorev) {
  case 5:
   VAR_27 = VAR_15;
   VAR_28 = VAR_22;
   VAR_29 = VAR_8;
   break;

  case 6:
   VAR_27 = VAR_16;
   VAR_28 = VAR_23;
   VAR_29 = VAR_9;
   break;

  case 7:
  case 9:
   VAR_27 = VAR_17;
   VAR_28 = VAR_24;
   VAR_29 = VAR_10;
   break;

  case 8:
   VAR_27 = VAR_18;
   VAR_28 = VAR_25;
   VAR_29 = VAR_11;
   break;

  case 11:
   VAR_27 = VAR_14;
   VAR_28 = VAR_21;
   VAR_29 = VAR_7;
   break;

  default:
   break;
  }
 }

 FUNC_1(VAR_26, VAR_27, (u16) VAR_2);

 FUNC_1(VAR_26, VAR_28, (u16) VAR_3);

 FUNC_1(VAR_26, VAR_28, (u16) VAR_4);

 FUNC_1(VAR_26, VAR_29, (u16) VAR_0);

 FUNC_1(VAR_26, VAR_29, (u16) VAR_1);
}
