
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_4__ phy; int wl; } ;
struct TYPE_7__ {int * rssical_phy_regs_5G; int * rssical_radio_regs_5G; int * rssical_phy_regs_2G; int * rssical_radio_regs_2G; } ;
struct TYPE_6__ {int center_freq; } ;
struct TYPE_5__ {int center_freq; } ;
struct b43_phy_n {TYPE_3__ rssical_cache; TYPE_2__ rssical_chanspec_5G; TYPE_1__ rssical_chanspec_2G; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int ) ;
 int FUNC_2 (struct b43_wldev*,int,int,int ) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_16)
{
 struct b43_phy_n *VAR_17 = VAR_16->phy.n;

 u16 *VAR_18 = ((void*)0);
 u16 *VAR_19 = ((void*)0);

 if (FUNC_0(VAR_16->wl) == VAR_15) {
  if (!VAR_17->rssical_chanspec_2G.center_freq)
   return;
  VAR_18 = VAR_17->rssical_cache.rssical_radio_regs_2G;
  VAR_19 = VAR_17->rssical_cache.rssical_phy_regs_2G;
 } else {
  if (!VAR_17->rssical_chanspec_5G.center_freq)
   return;
  VAR_18 = VAR_17->rssical_cache.rssical_radio_regs_5G;
  VAR_19 = VAR_17->rssical_cache.rssical_phy_regs_5G;
 }

 if (VAR_16->phy.rev >= 7) {
 } else {
  FUNC_2(VAR_16, VAR_0 | VAR_2, 0xE3,
      VAR_18[0]);
  FUNC_2(VAR_16, VAR_1 | VAR_2, 0xE3,
      VAR_18[1]);
 }

 FUNC_1(VAR_16, VAR_5, VAR_19[0]);
 FUNC_1(VAR_16, VAR_8, VAR_19[1]);
 FUNC_1(VAR_16, VAR_11, VAR_19[2]);
 FUNC_1(VAR_16, VAR_14, VAR_19[3]);

 FUNC_1(VAR_16, VAR_3, VAR_19[4]);
 FUNC_1(VAR_16, VAR_6, VAR_19[5]);
 FUNC_1(VAR_16, VAR_9, VAR_19[6]);
 FUNC_1(VAR_16, VAR_12, VAR_19[7]);

 FUNC_1(VAR_16, VAR_4, VAR_19[8]);
 FUNC_1(VAR_16, VAR_7, VAR_19[9]);
 FUNC_1(VAR_16, VAR_10, VAR_19[10]);
 FUNC_1(VAR_16, VAR_13, VAR_19[11]);
}
