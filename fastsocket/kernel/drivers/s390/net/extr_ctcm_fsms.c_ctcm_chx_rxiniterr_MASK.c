
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {int fsm; } ;
struct channel {int id; int retry; int timer; struct net_device* netdev; } ;
typedef int fsm_instance ;


 int FUNC_0 (int ,int ,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 int * VAR_6 ;
 int FUNC_2 (int *,int,void*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(fsm_instance *VAR_7, int VAR_8, void *VAR_9)
{
 struct channel *VAR_10 = VAR_9;
 struct net_device *VAR_11 = VAR_10->netdev;
 struct ctcm_priv *VAR_12 = VAR_11->ml_priv;

 if (VAR_8 == VAR_2) {
  if (!FUNC_1(VAR_11))

   FUNC_4(&VAR_10->timer);
  if (VAR_10->retry++ < 3)
   FUNC_2(VAR_7, VAR_8, VAR_9);
  else {
   FUNC_7(VAR_7, VAR_3);
   FUNC_5(VAR_12->fsm, VAR_4, VAR_11);
  }
 } else {
  FUNC_0(VAR_5, VAR_1,
   "%s(%s): %s in %s", VAR_0, VAR_10->id,
   VAR_6[VAR_8], FUNC_6(VAR_7));

  FUNC_3(&VAR_11->dev,
   "Initialization failed with RX/TX init handshake "
   "error %s\n", VAR_6[VAR_8]);
 }
}
