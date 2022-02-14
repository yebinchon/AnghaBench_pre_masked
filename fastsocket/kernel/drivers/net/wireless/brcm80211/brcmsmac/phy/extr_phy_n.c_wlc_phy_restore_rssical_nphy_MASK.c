
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * rssical_phyregs_5G; int * rssical_radio_regs_5G; int * rssical_phyregs_2G; int * rssical_radio_regs_2G; } ;
struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {scalar_t__ nphy_rssical_chanspec_2G; scalar_t__ nphy_rssical_chanspec_5G; TYPE_2__ rssical_cache; TYPE_1__ pubpi; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct brcms_phy*,int,int ,int ) ;
 int FUNC_3 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct brcms_phy *VAR_7)
{
 if (FUNC_0(VAR_7->radio_chanspec)) {
  if (VAR_7->nphy_rssical_chanspec_2G == 0)
   return;

  if (FUNC_1(VAR_7->pubpi.phy_rev, 7)) {
   FUNC_2(VAR_7, VAR_4,
          VAR_6,
          VAR_7->rssical_cache.
          rssical_radio_regs_2G[0]);
   FUNC_2(VAR_7, VAR_5,
          VAR_6,
          VAR_7->rssical_cache.
          rssical_radio_regs_2G[1]);
  } else {
   FUNC_2(VAR_7,
          VAR_2 | VAR_0,
          VAR_3,
          VAR_7->rssical_cache.
          rssical_radio_regs_2G[0]);
   FUNC_2(VAR_7,
          VAR_2 | VAR_1,
          VAR_3,
          VAR_7->rssical_cache.
          rssical_radio_regs_2G[1]);
  }

  FUNC_3(VAR_7, 0x1a6,
         VAR_7->rssical_cache.rssical_phyregs_2G[0]);
  FUNC_3(VAR_7, 0x1ac,
         VAR_7->rssical_cache.rssical_phyregs_2G[1]);
  FUNC_3(VAR_7, 0x1b2,
         VAR_7->rssical_cache.rssical_phyregs_2G[2]);
  FUNC_3(VAR_7, 0x1b8,
         VAR_7->rssical_cache.rssical_phyregs_2G[3]);
  FUNC_3(VAR_7, 0x1a4,
         VAR_7->rssical_cache.rssical_phyregs_2G[4]);
  FUNC_3(VAR_7, 0x1aa,
         VAR_7->rssical_cache.rssical_phyregs_2G[5]);
  FUNC_3(VAR_7, 0x1b0,
         VAR_7->rssical_cache.rssical_phyregs_2G[6]);
  FUNC_3(VAR_7, 0x1b6,
         VAR_7->rssical_cache.rssical_phyregs_2G[7]);
  FUNC_3(VAR_7, 0x1a5,
         VAR_7->rssical_cache.rssical_phyregs_2G[8]);
  FUNC_3(VAR_7, 0x1ab,
         VAR_7->rssical_cache.rssical_phyregs_2G[9]);
  FUNC_3(VAR_7, 0x1b1,
         VAR_7->rssical_cache.rssical_phyregs_2G[10]);
  FUNC_3(VAR_7, 0x1b7,
         VAR_7->rssical_cache.rssical_phyregs_2G[11]);

 } else {
  if (VAR_7->nphy_rssical_chanspec_5G == 0)
   return;

  if (FUNC_1(VAR_7->pubpi.phy_rev, 7)) {
   FUNC_2(VAR_7, VAR_4,
          VAR_6,
          VAR_7->rssical_cache.
          rssical_radio_regs_5G[0]);
   FUNC_2(VAR_7, VAR_5,
          VAR_6,
          VAR_7->rssical_cache.
          rssical_radio_regs_5G[1]);
  } else {
   FUNC_2(VAR_7,
          VAR_2 | VAR_0,
          VAR_3,
          VAR_7->rssical_cache.
          rssical_radio_regs_5G[0]);
   FUNC_2(VAR_7,
          VAR_2 | VAR_1,
          VAR_3,
          VAR_7->rssical_cache.
          rssical_radio_regs_5G[1]);
  }

  FUNC_3(VAR_7, 0x1a6,
         VAR_7->rssical_cache.rssical_phyregs_5G[0]);
  FUNC_3(VAR_7, 0x1ac,
         VAR_7->rssical_cache.rssical_phyregs_5G[1]);
  FUNC_3(VAR_7, 0x1b2,
         VAR_7->rssical_cache.rssical_phyregs_5G[2]);
  FUNC_3(VAR_7, 0x1b8,
         VAR_7->rssical_cache.rssical_phyregs_5G[3]);
  FUNC_3(VAR_7, 0x1a4,
         VAR_7->rssical_cache.rssical_phyregs_5G[4]);
  FUNC_3(VAR_7, 0x1aa,
         VAR_7->rssical_cache.rssical_phyregs_5G[5]);
  FUNC_3(VAR_7, 0x1b0,
         VAR_7->rssical_cache.rssical_phyregs_5G[6]);
  FUNC_3(VAR_7, 0x1b6,
         VAR_7->rssical_cache.rssical_phyregs_5G[7]);
  FUNC_3(VAR_7, 0x1a5,
         VAR_7->rssical_cache.rssical_phyregs_5G[8]);
  FUNC_3(VAR_7, 0x1ab,
         VAR_7->rssical_cache.rssical_phyregs_5G[9]);
  FUNC_3(VAR_7, 0x1b1,
         VAR_7->rssical_cache.rssical_phyregs_5G[10]);
  FUNC_3(VAR_7, 0x1b7,
         VAR_7->rssical_cache.rssical_phyregs_5G[11]);
 }
}
