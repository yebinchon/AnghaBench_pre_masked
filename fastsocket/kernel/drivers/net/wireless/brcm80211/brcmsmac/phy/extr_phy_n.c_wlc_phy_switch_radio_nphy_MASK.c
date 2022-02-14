
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_pub {int dummy; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int radio_is_on; TYPE_1__ pubpi; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
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
 int FUNC_2 (struct brcms_phy*,int,int ) ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int FUNC_4 (struct brcms_phy_pub*,int ) ;
 int FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy*) ;
 int FUNC_8 (struct brcms_phy*) ;
 int FUNC_9 (struct brcms_phy*) ;
 int FUNC_10 (struct brcms_phy*) ;
 int FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*) ;
 int FUNC_13 (struct brcms_phy*,int,int ) ;

void FUNC_14(struct brcms_phy *VAR_10, bool VAR_11)
{
 if (VAR_11) {
  if (FUNC_0(VAR_10->pubpi.phy_rev, 7)) {
   if (!VAR_10->radio_is_on) {
    FUNC_12(VAR_10);
    FUNC_7(VAR_10);
    FUNC_10(VAR_10);
   }

   FUNC_4((struct brcms_phy_pub *) VAR_10,
          VAR_10->radio_chanspec);
  } else if (FUNC_0(VAR_10->pubpi.phy_rev, 3)) {
   FUNC_12(VAR_10);
   FUNC_6(VAR_10);
   FUNC_9(VAR_10);

   FUNC_4((struct brcms_phy_pub *) VAR_10,
          VAR_10->radio_chanspec);
  } else {
   FUNC_11(VAR_10);
   FUNC_5(VAR_10);
   FUNC_8(VAR_10);
  }

  VAR_10->radio_is_on = 1;

 } else {

  if (FUNC_0(VAR_10->pubpi.phy_rev, 3)
      && FUNC_1(VAR_10->pubpi.phy_rev, 7)) {
   FUNC_2(VAR_10, 0x78, ~VAR_9);
   FUNC_3(VAR_10, VAR_0, 0x2, 0x0);

   FUNC_13(VAR_10,
     VAR_5 |
     VAR_1, 0);
   FUNC_13(VAR_10,
     VAR_6 |
     VAR_1, 0);
   FUNC_13(VAR_10,
     VAR_7 |
     VAR_1, 0);
   FUNC_13(VAR_10,
     VAR_8 |
     VAR_1, 0);
   FUNC_3(VAR_10,
          VAR_3 |
          VAR_1, 0xf0, 0);
   FUNC_13(VAR_10,
     VAR_4 |
     VAR_1, 0);

   FUNC_13(VAR_10,
     VAR_5 |
     VAR_2, 0);
   FUNC_13(VAR_10,
     VAR_6 |
     VAR_2, 0);
   FUNC_13(VAR_10,
     VAR_7 |
     VAR_2, 0);
   FUNC_13(VAR_10,
     VAR_8 |
     VAR_2, 0);
   FUNC_3(VAR_10,
          VAR_3 |
          VAR_2, 0xf0, 0);
   FUNC_13(VAR_10,
     VAR_4 |
     VAR_2, 0);

   VAR_10->radio_is_on = 0;
  }

  if (FUNC_0(VAR_10->pubpi.phy_rev, 8)) {
   FUNC_2(VAR_10, 0x78, ~VAR_9);
   VAR_10->radio_is_on = 0;
  }

 }
}
