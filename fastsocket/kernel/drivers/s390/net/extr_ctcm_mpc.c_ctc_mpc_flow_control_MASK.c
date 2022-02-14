
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct mpc_group {int flow_off_called; int fsm; } ;
struct ctcm_priv {struct channel** channel; struct mpc_group* mpcg; } ;
struct channel {int ch_tasklet; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(int VAR_6, int VAR_7)
{
 struct ctcm_priv *VAR_8;
 struct mpc_group *VAR_9;
 struct net_device *VAR_10;
 struct channel *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(VAR_6);
 if (VAR_10 == ((void*)0))
  return;
 VAR_8 = VAR_10->ml_priv;
 VAR_9 = VAR_8->mpcg;

 FUNC_0(VAR_4, VAR_1,
   "%s: %s: flowc = %d",
    VAR_0, VAR_10->name, VAR_7);

 VAR_11 = VAR_8->channel[VAR_5];

 VAR_12 = FUNC_2(VAR_9->fsm);
 switch (VAR_7) {
 case 1:
  if (VAR_12 == VAR_2)
   break;
  if (VAR_12 == VAR_3) {
   if (VAR_9->flow_off_called == 1)
    VAR_9->flow_off_called = 0;
   else
    FUNC_3(VAR_9->fsm, VAR_2);
   break;
  }
  break;
 case 0:
  if (VAR_12 == VAR_2) {
   FUNC_3(VAR_9->fsm, VAR_3);


   FUNC_4(&VAR_11->ch_tasklet);
  }

  if (VAR_12 == VAR_3) {
   VAR_9->flow_off_called = 1;
   break;
  }
  break;
 }

}
