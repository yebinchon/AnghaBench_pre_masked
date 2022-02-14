
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct brcms_phy_lcnphy {int lcnphy_tempsense_option; scalar_t__ lcnphy_papd_rxGnCtrl_init; } ;
struct TYPE_8__ {int phy_rev; } ;
struct TYPE_6__ {int detach; int radioloftget; int txloccget; int txiqccset; int txiqccget; int txpwrrecalc; int chanset; int calinit; int init; } ;
struct TYPE_5__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {int hwpwrctrl; int hwpwrctrl_capable; int temppwrctrl_capable; TYPE_4__ pubpi; TYPE_3__* sh; TYPE_2__ pi_fptr; int xtalfreq; TYPE_1__ u; } ;
struct TYPE_7__ {int boardflags; int sih; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 struct brcms_phy_lcnphy* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct brcms_phy*) ;

bool FUNC_4(struct brcms_phy *VAR_12)
{
 struct brcms_phy_lcnphy *VAR_13;

 VAR_12->u.pi_lcnphy = FUNC_1(sizeof(struct brcms_phy_lcnphy), VAR_2);
 if (VAR_12->u.pi_lcnphy == ((void*)0))
  return 0;

 VAR_13 = VAR_12->u.pi_lcnphy;

 if (0 == (VAR_12->sh->boardflags & VAR_1)) {
  VAR_12->hwpwrctrl = 1;
  VAR_12->hwpwrctrl_capable = 1;
 }

 VAR_12->xtalfreq = FUNC_2(VAR_12->sh->sih);
 VAR_13->lcnphy_papd_rxGnCtrl_init = 0;

 VAR_12->pi_fptr.init = VAR_10;
 VAR_12->pi_fptr.calinit = VAR_7;
 VAR_12->pi_fptr.chanset = VAR_8;
 VAR_12->pi_fptr.txpwrrecalc = VAR_11;
 VAR_12->pi_fptr.txiqccget = VAR_4;
 VAR_12->pi_fptr.txiqccset = VAR_6;
 VAR_12->pi_fptr.txloccget = VAR_5;
 VAR_12->pi_fptr.radioloftget = VAR_3;
 VAR_12->pi_fptr.detach = VAR_9;

 if (!FUNC_3(VAR_12))
  return 0;

 if ((VAR_12->sh->boardflags & VAR_0) &&
     (FUNC_0(VAR_12->pubpi.phy_rev, 1))) {
  if (VAR_13->lcnphy_tempsense_option == 3) {
   VAR_12->hwpwrctrl = 1;
   VAR_12->hwpwrctrl_capable = 1;
   VAR_12->temppwrctrl_capable = 0;
  } else {
   VAR_12->hwpwrctrl = 0;
   VAR_12->hwpwrctrl_capable = 0;
   VAR_12->temppwrctrl_capable = 1;
  }
 }

 return 1;
}
