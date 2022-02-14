
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int name; int dev; } ;
struct ctcm_priv {int protocol; TYPE_2__** channel; TYPE_1__* fsm; int buffer_size; } ;
struct ccwgroup_device {struct ccw_device** cdev; int dev; } ;
struct ccw_device {int dev; int id; } ;
typedef enum ctcm_channel_types { ____Placeholder_ctcm_channel_types } ctcm_channel_types ;
struct TYPE_5__ {int id; int max_bufsize; int protocol; struct net_device* netdev; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int ,int ,char*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ccw_device*,int,struct ctcm_priv*) ;
 int FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct ccw_device*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int,char*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;
 struct net_device* FUNC_9 (struct ctcm_priv*) ;
 struct ctcm_priv* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int ,int ,int ) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct net_device*) ;
 int FUNC_15 (char*,int,char*,char*) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (struct net_device*) ;

__attribute__((used)) static int FUNC_18(struct ccwgroup_device *VAR_9)
{
 char VAR_10[VAR_1];
 char VAR_11[VAR_1];
 int VAR_12;
 enum ctcm_channel_types VAR_13;
 struct ctcm_priv *VAR_14;
 struct net_device *VAR_15;
 struct ccw_device *VAR_16;
 struct ccw_device *VAR_17;
 int VAR_18;

 VAR_14 = FUNC_10(&VAR_9->dev);
 if (!VAR_14)
  return -VAR_4;

 VAR_16 = VAR_9->cdev[0];
 VAR_17 = VAR_9->cdev[1];

 VAR_13 = FUNC_13(&VAR_16->id);

 FUNC_15(VAR_10, VAR_1, "ch-%s", FUNC_12(&VAR_16->dev));
 FUNC_15(VAR_11, VAR_1, "ch-%s", FUNC_12(&VAR_17->dev));

 VAR_18 = FUNC_2(VAR_16, VAR_13, VAR_14);
 if (VAR_18)
  return VAR_18;
 VAR_18 = FUNC_2(VAR_17, VAR_13, VAR_14);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_4(VAR_16);
 if (VAR_18 != 0) {

  FUNC_0(VAR_7, VAR_3,
   "%s(%s) set_online rc=%d",
    VAR_0, VAR_10, VAR_18);
 }

 VAR_18 = FUNC_4(VAR_17);
 if (VAR_18 != 0) {

  FUNC_0(VAR_7, VAR_3,
   "%s(%s) set_online rc=%d",
    VAR_0, VAR_11, VAR_18);
 }

 VAR_15 = FUNC_9(VAR_14);
 if (VAR_15 == ((void*)0))
   goto out;

 for (VAR_12 = VAR_5; VAR_12 <= VAR_8; VAR_12++) {
  VAR_14->channel[VAR_12] =
      FUNC_6(VAR_13, VAR_12 == VAR_5 ? VAR_10 : VAR_11,
    VAR_12);
  if (VAR_14->channel[VAR_12] == ((void*)0)) {
   if (VAR_12 == VAR_8)
    FUNC_5(VAR_14->channel[VAR_5]);
   goto out_dev;
  }
  VAR_14->channel[VAR_12]->netdev = VAR_15;
  VAR_14->channel[VAR_12]->protocol = VAR_14->protocol;
  VAR_14->channel[VAR_12]->max_bufsize = VAR_14->buffer_size;
 }

 FUNC_1(VAR_15, &VAR_9->dev);

 if (FUNC_14(VAR_15))
   goto out_dev;

 if (FUNC_7(&VAR_9->dev)) {
  FUNC_17(VAR_15);
   goto out_dev;
 }

 FUNC_16(VAR_14->fsm->name, VAR_15->name, sizeof(VAR_14->fsm->name));

 FUNC_11(&VAR_15->dev,
  "setup OK : r/w = %s/%s, protocol : %d\n",
   VAR_14->channel[VAR_5]->id,
   VAR_14->channel[VAR_8]->id, VAR_14->protocol);

 FUNC_0(VAR_6, VAR_2,
  "setup(%s) OK : r/w = %s/%s, protocol : %d", VAR_15->name,
   VAR_14->channel[VAR_5]->id,
   VAR_14->channel[VAR_8]->id, VAR_14->protocol);

 return 0;
out_dev:
 FUNC_8(VAR_15);
out:
 FUNC_3(VAR_9->cdev[1]);
 FUNC_3(VAR_9->cdev[0]);

 return -VAR_4;
}
