
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {TYPE_1__* sh; scalar_t__ nphy_perical_last; int measure_hold; } ;
struct TYPE_2__ {scalar_t__ glacial_timer; scalar_t__ now; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct brcms_phy_pub *VAR_2, bool VAR_3, u32 VAR_4)
{
 struct brcms_phy *VAR_5 = (struct brcms_phy *) VAR_2;

 if (VAR_3)
  FUNC_1(VAR_5->measure_hold, VAR_0);
 else
  FUNC_0(VAR_5->measure_hold, VAR_0);

 if (!VAR_3 && (VAR_4 & VAR_1))
  VAR_5->nphy_perical_last = VAR_5->sh->now - VAR_5->sh->glacial_timer;
 return;
}
