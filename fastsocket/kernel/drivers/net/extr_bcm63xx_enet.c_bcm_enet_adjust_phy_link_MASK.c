
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ link; scalar_t__ duplex; int pause; int speed; } ;
struct net_device {int name; } ;
struct bcm_enet_priv {scalar_t__ old_link; scalar_t__ old_duplex; int old_pause; int pause_rx; int pause_tx; int pause_auto; struct phy_device* phydev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bcm_enet_priv*,int) ;
 int FUNC_1 (struct bcm_enet_priv*,int,int) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct bcm_enet_priv *VAR_2;
 struct phy_device *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = VAR_2->phydev;
 VAR_4 = 0;

 if (VAR_2->old_link != VAR_3->link) {
  VAR_4 = 1;
  VAR_2->old_link = VAR_3->link;
 }


 if (VAR_3->link && VAR_3->duplex != VAR_2->old_duplex) {
  FUNC_0(VAR_2,
        (VAR_3->duplex == VAR_0) ? 1 : 0);
  VAR_4 = 1;
  VAR_2->old_duplex = VAR_3->duplex;
 }



 if (VAR_3->link && VAR_3->pause != VAR_2->old_pause) {
  int VAR_5, VAR_6;

  if (VAR_3->pause) {

   VAR_5 = 1;
   VAR_6 = 1;
  } else if (!VAR_2->pause_auto) {

   VAR_5 = VAR_2->pause_rx;
   VAR_6 = VAR_2->pause_tx;
  } else {
   VAR_5 = 0;
   VAR_6 = 0;
  }

  FUNC_1(VAR_2, VAR_5, VAR_6);
  VAR_4 = 1;
  VAR_2->old_pause = VAR_3->pause;
 }

 if (VAR_4) {
  FUNC_4("%s: link %s", VAR_1->name, VAR_3->link ?
   "UP" : "DOWN");
  if (VAR_3->link)
   FUNC_3(" - %d/%s - flow control %s", VAR_3->speed,
          VAR_0 == VAR_3->duplex ? "full" : "half",
          VAR_3->pause == 1 ? "rx&tx" : "off");

  FUNC_3("\n");
 }
}
