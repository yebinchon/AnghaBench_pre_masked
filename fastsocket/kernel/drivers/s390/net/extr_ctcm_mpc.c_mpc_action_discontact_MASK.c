
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct mpcg_info {struct channel* ch; } ;
struct mpc_group {int send_qllc_disc; int fsm; } ;
struct ctcm_priv {struct mpc_group* mpcg; } ;
struct channel {int id; struct net_device* netdev; } ;
typedef int fsm_instance ;


 int FUNC_0 (int ,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct net_device*) ;

void FUNC_2(fsm_instance *VAR_4, int VAR_5, void *VAR_6)
{
 struct mpcg_info *VAR_7 = VAR_6;
 struct channel *VAR_8 = VAR_7->ch;
 struct net_device *VAR_9;
 struct ctcm_priv *VAR_10;
 struct mpc_group *VAR_11;

 if (VAR_8) {
  VAR_9 = VAR_8->netdev;
  if (VAR_9) {
   VAR_10 = VAR_9->ml_priv;
   if (VAR_10) {
    FUNC_0(VAR_3, VAR_1,
     "%s: %s: %s\n",
     VAR_0, VAR_9->name, VAR_8->id);
    VAR_11 = VAR_10->mpcg;
    VAR_11->send_qllc_disc = 1;
    FUNC_1(VAR_11->fsm, VAR_2, VAR_9);
   }
  }
 }

 return;
}
