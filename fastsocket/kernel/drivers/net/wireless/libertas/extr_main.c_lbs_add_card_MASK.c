
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timeo; int flags; int name; int * wireless_handlers; int * ethtool_ops; int * netdev_ops; struct lbs_private* ml_priv; } ;
struct lbs_private {int mesh_ssid_len; int wol_criteria; int wol_gpio; int mesh_ssid; int sync_channel; int mcast_work; int scan_work; int assoc_work; int work_thread; int main_thread; int waitq; int * rtap_net_dev; scalar_t__ infra_open; scalar_t__ mesh_open; void* card; struct net_device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct net_device*,struct device*) ;
 struct net_device* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct net_device*,char*) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,struct lbs_private*) ;
 int FUNC_11 (char*) ;
 int VAR_5 ;
 int FUNC_12 (struct lbs_private*) ;
 int VAR_6 ;
 scalar_t__ FUNC_13 (struct lbs_private*) ;
 int VAR_7 ;
 int FUNC_14 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct lbs_private* FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,char*) ;

struct lbs_private *FUNC_18(void *VAR_12, struct device *VAR_13)
{
 struct net_device *VAR_14 = ((void*)0);
 struct lbs_private *VAR_15 = ((void*)0);

 FUNC_9(VAR_3);


 VAR_14 = FUNC_4(sizeof(struct lbs_private));
 if (!VAR_14) {
  FUNC_14("init wlanX device failed\n");
  goto done;
 }
 VAR_15 = FUNC_15(VAR_14);
 VAR_14->ml_priv = VAR_15;

 if (FUNC_13(VAR_15)) {
  FUNC_14("failed to initialize adapter structure.\n");
  goto err_init_adapter;
 }

 VAR_15->dev = VAR_14;
 VAR_15->card = VAR_12;
 VAR_15->mesh_open = 0;
 VAR_15->infra_open = 0;


  VAR_14->netdev_ops = &VAR_7;
 VAR_14->watchdog_timeo = 5 * VAR_0;
 VAR_14->ethtool_ops = &VAR_5;



 VAR_14->flags |= VAR_1 | VAR_2;

 FUNC_3(VAR_14, VAR_13);

 VAR_15->rtap_net_dev = ((void*)0);
 FUNC_17(VAR_14->name, "wlan%d");

 FUNC_11("Starting main thread...\n");
 FUNC_7(&VAR_15->waitq);
 VAR_15->main_thread = FUNC_8(VAR_11, VAR_14, "lbs_main");
 if (FUNC_2(VAR_15->main_thread)) {
  FUNC_11("Error creating main thread.\n");
  goto err_init_adapter;
 }

 VAR_15->work_thread = FUNC_5("lbs_worker");
 FUNC_0(&VAR_15->assoc_work, VAR_4);
 FUNC_0(&VAR_15->scan_work, VAR_8);
 FUNC_1(&VAR_15->mcast_work, VAR_9);
 FUNC_1(&VAR_15->sync_channel, VAR_10);

 FUNC_16(VAR_15->mesh_ssid, "mesh");
 VAR_15->mesh_ssid_len = 4;

 VAR_15->wol_criteria = 0xffffffff;
 VAR_15->wol_gpio = 0xff;

 goto done;

err_init_adapter:
 FUNC_12(VAR_15);
 FUNC_6(VAR_14);
 VAR_15 = ((void*)0);

done:
 FUNC_10(VAR_3, "priv %p", VAR_15);
 return VAR_15;
}
