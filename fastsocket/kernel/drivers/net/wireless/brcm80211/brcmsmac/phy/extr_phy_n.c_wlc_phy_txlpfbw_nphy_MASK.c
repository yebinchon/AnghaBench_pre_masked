
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int radio_chanspec; TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_5(struct brcms_phy *VAR_0)
{
 u8 VAR_1 = 0;

 if (FUNC_1(VAR_0->pubpi.phy_rev, 3) && FUNC_2(VAR_0->pubpi.phy_rev, 7)) {
  if (FUNC_0(VAR_0->radio_chanspec))
   VAR_1 = 3;
  else
   VAR_1 = 1;

  if (FUNC_3(VAR_0)) {
   if (FUNC_0(VAR_0->radio_chanspec))
    VAR_1 = 5;
   else
    VAR_1 = 4;
  }

  FUNC_4(VAR_0, 0xe8,
         (VAR_1 << 0) |
         (VAR_1 << 3) |
         (VAR_1 << 6) | (VAR_1 << 9));

  if (FUNC_3(VAR_0)) {

   if (FUNC_0(VAR_0->radio_chanspec))
    VAR_1 = 4;
   else
    VAR_1 = 1;

   FUNC_4(VAR_0, 0xe9,
          (VAR_1 << 0) |
          (VAR_1 << 3) |
          (VAR_1 << 6) | (VAR_1 << 9));
  }
 }
}
