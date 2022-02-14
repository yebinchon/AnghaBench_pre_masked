
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device_info {int mac_adr; int ring_size; } ;
struct net_device_context {int work; int dwork; struct hv_device* device_ctx; } ;
struct net_device {int features; int dev_addr; int * netdev_ops; } ;
struct hv_vmbus_device_id {int dummy; } ;
struct hv_device {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 (struct net_device*,int *) ;
 struct net_device* FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct hv_device*,struct net_device*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct net_device*,char*,int) ;
 struct net_device_context* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_14 (struct hv_device*,struct netvsc_device_info*) ;
 int FUNC_15 (struct net_device*) ;

__attribute__((used)) static int FUNC_16(struct hv_device *VAR_9,
   const struct hv_vmbus_device_id *VAR_10)
{
 struct net_device *VAR_11 = ((void*)0);
 struct net_device_context *VAR_12;
 struct netvsc_device_info VAR_13;
 int VAR_14;

 VAR_11 = FUNC_4(sizeof(struct net_device_context));
 if (!VAR_11)
  return -VAR_0;


 FUNC_10(VAR_11);

 VAR_12 = FUNC_9(VAR_11);
 VAR_12->device_ctx = VAR_9;
 FUNC_6(VAR_9, VAR_11);
 FUNC_0(&VAR_12->dwork, VAR_7);
 FUNC_1(&VAR_12->work, VAR_5);

 VAR_11->netdev_ops = &VAR_4;



 VAR_11->features = VAR_3 | VAR_2;

 FUNC_2(VAR_11, &VAR_6);
 FUNC_3(VAR_11, &VAR_9->device);

 VAR_14 = FUNC_13(VAR_11);
 if (VAR_14 != 0) {
  FUNC_12("Unable to register netdev.\n");
  FUNC_5(VAR_11);
  goto out;
 }


 VAR_13.ring_size = VAR_8;
 VAR_14 = FUNC_14(VAR_9, &VAR_13);
 if (VAR_14 != 0) {
  FUNC_8(VAR_11, "unable to add netvsc device (ret %d)\n", VAR_14);
  FUNC_15(VAR_11);
  FUNC_5(VAR_11);
  FUNC_6(VAR_9, ((void*)0));
  return VAR_14;
 }
 FUNC_7(VAR_11->dev_addr, VAR_13.mac_adr, VAR_1);

 FUNC_11(VAR_11);

out:
 return VAR_14;
}
