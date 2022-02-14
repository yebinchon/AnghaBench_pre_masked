
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_phy {struct b43_phy_a* a; } ;
struct b43_wldev {int wl; TYPE_2__* dev; struct b43_phy phy; } ;
struct b43_phy_a {int tgt_idle_tssi; int * tssi2dbm; } ;
typedef scalar_t__ s8 ;
typedef int s16 ;
struct TYPE_4__ {TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {scalar_t__ itssi_a; scalar_t__ pa1b2; scalar_t__ pa1b1; scalar_t__ pa1b0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct b43_wldev*,int,int,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct b43_wldev *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_2->phy;
 struct b43_phy_a *VAR_4 = VAR_3->a;
 s16 VAR_5, VAR_6, VAR_7;

 VAR_5 = (s16) (VAR_2->dev->bus_sprom->pa1b0);
 VAR_6 = (s16) (VAR_2->dev->bus_sprom->pa1b1);
 VAR_7 = (s16) (VAR_2->dev->bus_sprom->pa1b2);

 if (VAR_5 != 0 && VAR_6 != 0 && VAR_7 != 0 &&
     VAR_5 != -1 && VAR_6 != -1 && VAR_7 != -1) {

  if ((s8) VAR_2->dev->bus_sprom->itssi_a != 0 &&
      (s8) VAR_2->dev->bus_sprom->itssi_a != -1)
   VAR_4->tgt_idle_tssi =
       (s8) (VAR_2->dev->bus_sprom->itssi_a);
  else
   VAR_4->tgt_idle_tssi = 62;
  VAR_4->tssi2dbm = FUNC_0(VAR_2, VAR_5,
              VAR_6, VAR_7);
  if (!VAR_4->tssi2dbm)
   return -VAR_1;
 } else {


  VAR_4->tssi2dbm = ((void*)0);
  FUNC_1(VAR_2->wl, "Could not generate tssi2dBm "
         "table (wrong SPROM info)!\n");
  return -VAR_0;
 }

 return 0;
}
