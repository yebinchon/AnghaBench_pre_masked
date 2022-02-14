
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmac_softc {scalar_t__ sbm_link; scalar_t__ sbm_speed; scalar_t__ sbm_duplex; int sbm_pause; int sbm_fc; scalar_t__ sbm_state; int sbm_lock; struct phy_device* phy_dev; } ;
struct phy_device {scalar_t__ link; scalar_t__ speed; scalar_t__ duplex; int pause; } ;
struct net_device {int name; } ;
typedef enum sbmac_fc { ____Placeholder_sbmac_fc } sbmac_fc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sbmac_softc* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (struct sbmac_softc*) ;
 int FUNC_4 (struct sbmac_softc*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_8)
{
 struct sbmac_softc *VAR_9 = FUNC_0(VAR_8);
 struct phy_device *VAR_10 = VAR_9->phy_dev;
 unsigned long VAR_11;
 enum sbmac_fc VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_13 = (VAR_9->sbm_link != VAR_10->link);
 VAR_14 = (VAR_9->sbm_speed != VAR_10->speed);
 VAR_15 = (VAR_9->sbm_duplex != VAR_10->duplex);
 VAR_16 = (VAR_9->sbm_pause != VAR_10->pause);

 if (!VAR_13 && !VAR_14 && !VAR_15 && !VAR_16)
  return;

 if (!VAR_10->link) {
  if (VAR_13) {
   VAR_9->sbm_link = VAR_10->link;
   VAR_9->sbm_speed = VAR_6;
   VAR_9->sbm_duplex = VAR_2;
   VAR_9->sbm_fc = VAR_4;
   VAR_9->sbm_pause = -1;
   FUNC_2("%s: link unavailable\n", VAR_8->name);
  }
  return;
 }

 if (VAR_10->duplex == VAR_0) {
  if (VAR_10->pause)
   VAR_12 = VAR_5;
  else
   VAR_12 = VAR_4;
 } else
  VAR_12 = VAR_3;
 VAR_17 = (VAR_9->sbm_fc != VAR_12);

 FUNC_2("%s: link available: %dbase-%cD\n", VAR_8->name, VAR_10->speed,
  VAR_10->duplex == VAR_0 ? 'F' : 'H');

 FUNC_5(&VAR_9->sbm_lock, VAR_11);

 VAR_9->sbm_speed = VAR_10->speed;
 VAR_9->sbm_duplex = VAR_10->duplex;
 VAR_9->sbm_fc = VAR_12;
 VAR_9->sbm_pause = VAR_10->pause;
 VAR_9->sbm_link = VAR_10->link;

 if ((VAR_14 || VAR_15 || VAR_17) &&
     VAR_9->sbm_state != VAR_7) {



  if (VAR_1 > 1)
   FUNC_1("%s: restarting channel "
     "because PHY state changed\n", VAR_8->name);
  FUNC_4(VAR_9);
  FUNC_3(VAR_9);
 }

 FUNC_6(&VAR_9->sbm_lock, VAR_11);
}
