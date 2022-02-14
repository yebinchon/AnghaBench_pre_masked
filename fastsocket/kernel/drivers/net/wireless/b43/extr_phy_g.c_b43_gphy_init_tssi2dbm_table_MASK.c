
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_phy {int radio_ver; struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_2__* dev; struct b43_phy phy; } ;
struct b43_phy_g {int dyn_tssi_tbl; int tgt_idle_tssi; scalar_t__ tssi2dbm; } ;
typedef scalar_t__ s8 ;
typedef int s16 ;
struct TYPE_4__ {int chip_id; TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {scalar_t__ itssi_bg; scalar_t__ pa0b2; scalar_t__ pa0b1; scalar_t__ pa0b0; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct b43_wldev*,int,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct b43_wldev *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_2->phy;
 struct b43_phy_g *VAR_4 = VAR_3->g;
 s16 VAR_5, VAR_6, VAR_7;

 VAR_5 = (s16) (VAR_2->dev->bus_sprom->pa0b0);
 VAR_6 = (s16) (VAR_2->dev->bus_sprom->pa0b1);
 VAR_7 = (s16) (VAR_2->dev->bus_sprom->pa0b2);

 FUNC_0((VAR_2->dev->chip_id == 0x4301) &&
      (VAR_3->radio_ver != 0x2050));

 VAR_4->dyn_tssi_tbl = 0;

 if (VAR_5 != 0 && VAR_6 != 0 && VAR_7 != 0 &&
     VAR_5 != -1 && VAR_6 != -1 && VAR_7 != -1) {

  if ((s8) VAR_2->dev->bus_sprom->itssi_bg != 0 &&
      (s8) VAR_2->dev->bus_sprom->itssi_bg != -1) {
   VAR_4->tgt_idle_tssi =
    (s8) (VAR_2->dev->bus_sprom->itssi_bg);
  } else
   VAR_4->tgt_idle_tssi = 62;
  VAR_4->tssi2dbm = FUNC_1(VAR_2, VAR_5,
              VAR_6, VAR_7);
  if (!VAR_4->tssi2dbm)
   return -VAR_0;
  VAR_4->dyn_tssi_tbl = 1;
 } else {

  VAR_4->tgt_idle_tssi = 52;
  VAR_4->tssi2dbm = VAR_1;
 }

 return 0;
}
