
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct mpc_group {int fsm; } ;
struct ctcm_priv {struct channel** channel; struct mpc_group* mpcg; } ;
struct channel {int fsm; } ;
typedef int fsm_instance ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (int ,int ,struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(fsm_instance *VAR_7, int VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = VAR_9;
 struct ctcm_priv *VAR_11;
 struct mpc_group *VAR_12;
 struct channel *VAR_13;
 struct channel *VAR_14;

 FUNC_0(VAR_10 == ((void*)0));

 VAR_11 = VAR_10->ml_priv;
 VAR_12 = VAR_11->mpcg;
 VAR_13 = VAR_11->channel[VAR_6];
 VAR_14 = VAR_11->channel[VAR_5];

 switch (FUNC_3(VAR_12->fsm)) {
 case 128:



  if ((FUNC_3(VAR_14->fsm) == VAR_0) &&
     (FUNC_3(VAR_13->fsm) == VAR_0))
   break;
 default:
  FUNC_2(VAR_12->fsm, VAR_3, VAR_10);
 }

 FUNC_1(VAR_4, VAR_2,
   "%s: dev=%s exit",
   VAR_1, VAR_10->name);
 return;
}
