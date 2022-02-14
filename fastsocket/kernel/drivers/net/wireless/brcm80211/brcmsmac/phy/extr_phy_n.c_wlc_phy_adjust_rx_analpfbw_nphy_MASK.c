
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int nphy_anarxlpf_adjusted; int nphy_rccal_value; int radio_chanspec; TYPE_1__ pubpi; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct brcms_phy *VAR_2, u16 VAR_3)
{
 if (FUNC_2(VAR_2->pubpi.phy_rev, 3) && FUNC_3(VAR_2->pubpi.phy_rev, 7)) {
  if ((FUNC_0(VAR_2->radio_chanspec) == 11) &&
      FUNC_1(VAR_2->radio_chanspec)) {
   if (!VAR_2->nphy_anarxlpf_adjusted) {
    FUNC_4(VAR_2,
      (VAR_1 |
       VAR_0),
      ((VAR_2->nphy_rccal_value +
        VAR_3) | 0x80));

    VAR_2->nphy_anarxlpf_adjusted = 1;
   }
  } else {
   if (VAR_2->nphy_anarxlpf_adjusted) {
    FUNC_4(VAR_2,
      (VAR_1 |
       VAR_0),
      (VAR_2->nphy_rccal_value | 0x80));

    VAR_2->nphy_anarxlpf_adjusted = 0;
   }
  }
 }
}
