
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int hwpwrctrl; int nphy_txpwrctrl; int txpwrctrl; TYPE_1__* sh; int saved_txpwr_idx; int d11core; int hwpwrctrl_capable; } ;
struct TYPE_2__ {int physhim; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct brcms_phy*,int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy*,int) ;

void FUNC_8(struct brcms_phy_pub *VAR_3, bool VAR_4)
{
 struct brcms_phy *VAR_5 = (struct brcms_phy *) VAR_3;
 bool VAR_6;

 if (!VAR_5->hwpwrctrl_capable)
  return;

 VAR_5->hwpwrctrl = VAR_4;
 VAR_5->nphy_txpwrctrl = VAR_4;
 VAR_5->txpwrctrl = VAR_4;

 if (FUNC_1(VAR_5)) {
  VAR_6 = (0 == (FUNC_2(VAR_5->d11core,
          FUNC_0(VAR_2)) &
     VAR_0));
  if (!VAR_6)
   FUNC_5(VAR_5->sh->physhim);

  FUNC_7(VAR_5, VAR_5->nphy_txpwrctrl);
  if (VAR_5->nphy_txpwrctrl == VAR_1)
   FUNC_6(VAR_5);
  else
   FUNC_3(VAR_5, 0x1e7, (0x7f << 0),
        VAR_5->saved_txpwr_idx);

  if (!VAR_6)
   FUNC_4(VAR_5->sh->physhim);
 }
}
