
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; struct lbs_private* ml_priv; } ;
struct lbs_private {TYPE_2__* mesh_dev; int current_addr; struct net_device* dev; } ;
struct TYPE_3__ {void* size; } ;
struct cmd_ds_802_11_mac_address {int macadd; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_mac_address*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 struct lbs_private *VAR_7 = VAR_4->ml_priv;
 struct sockaddr *VAR_8 = VAR_5;
 struct cmd_ds_802_11_mac_address VAR_9;

 FUNC_2(VAR_3);


 VAR_4 = VAR_7->dev;

 VAR_9.hdr.size = FUNC_0(sizeof(VAR_9));
 VAR_9.action = FUNC_0(VAR_1);
 FUNC_5(VAR_9.macadd, VAR_8->sa_data, VAR_2);

 VAR_6 = FUNC_1(VAR_7, VAR_0, &VAR_9);
 if (VAR_6) {
  FUNC_4("set MAC address failed\n");
  goto done;
 }

 FUNC_5(VAR_7->current_addr, VAR_8->sa_data, VAR_2);
 FUNC_5(VAR_4->dev_addr, VAR_8->sa_data, VAR_2);
 if (VAR_7->mesh_dev)
  FUNC_5(VAR_7->mesh_dev->dev_addr, VAR_8->sa_data, VAR_2);

done:
 FUNC_3(VAR_3, "ret %d", VAR_6);
 return VAR_6;
}
