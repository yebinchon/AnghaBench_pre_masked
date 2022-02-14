
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct net_device {int name; } ;
struct TYPE_2__ {int broadcast_channel; } ;
struct hpsb_host {TYPE_1__ csr; int id; int device; } ;
struct eth1394_priv {int broadcast_channel; struct net_device* wake_dev; int wake; scalar_t__ local_fifo; struct hpsb_host* host; int lock; int ip_node_list; } ;
struct eth1394_host_info {struct net_device* dev; struct hpsb_host* host; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct net_device*,int *) ;
 int VAR_4 ;
 struct net_device* FUNC_5 (int,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct eth1394_priv*) ;
 int FUNC_7 (struct net_device*,int) ;
 int VAR_7 ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int *,struct hpsb_host*,int *,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct hpsb_host*) ;
 int FUNC_11 (struct hpsb_host*) ;
 struct eth1394_host_info* FUNC_12 (int *,struct hpsb_host*,int) ;
 int FUNC_13 (int *,struct hpsb_host*) ;
 int FUNC_14 (int *,struct hpsb_host*,scalar_t__) ;
 struct eth1394_priv* FUNC_15 (struct net_device*) ;
 scalar_t__ FUNC_16 (struct net_device*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(struct hpsb_host *VAR_8)
{
 struct eth1394_host_info *VAR_9 = ((void*)0);
 struct net_device *VAR_10 = ((void*)0);
 struct eth1394_priv *VAR_11;
 u64 VAR_12;

 if (FUNC_10(VAR_8) != 0) {
  FUNC_1(VAR_2, "Can't add IP-over-1394 ROM entry\n");
  return;
 }

 VAR_12 = FUNC_9(
   &VAR_5, VAR_8, &VAR_4,
   VAR_1, VAR_1,
   VAR_0, VAR_0);
 if (VAR_12 == VAR_0) {
  FUNC_1(VAR_2, "Cannot register CSR space\n");
  FUNC_11(VAR_8);
  return;
 }

 VAR_10 = FUNC_5(sizeof(*VAR_11), "eth%d", VAR_6);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_2, "Out of memory\n");
  goto out;
 }

 FUNC_4(VAR_10, &VAR_8->device);

 VAR_11 = FUNC_15(VAR_10);
 FUNC_2(&VAR_11->ip_node_list);
 FUNC_17(&VAR_11->lock);
 VAR_11->host = VAR_8;
 VAR_11->local_fifo = VAR_12;
 FUNC_3(&VAR_11->wake, VAR_7);
 VAR_11->wake_dev = VAR_10;

 VAR_9 = FUNC_12(&VAR_5, VAR_8, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_2, "Out of memory\n");
  goto out;
 }

 FUNC_7(VAR_10, 1);

 if (FUNC_16(VAR_10)) {
  FUNC_1(VAR_2, "Cannot register the driver\n");
  goto out;
 }

 FUNC_0(VAR_3, VAR_10->name, "IPv4 over IEEE 1394 (fw-host%d)\n",
        VAR_8->id);

 VAR_9->host = VAR_8;
 VAR_9->dev = VAR_10;



 VAR_11->broadcast_channel = VAR_8->csr.broadcast_channel & 0x3f;

 FUNC_6(VAR_11);
 return;
out:
 if (VAR_10)
  FUNC_8(VAR_10);
 if (VAR_9)
  FUNC_13(&VAR_5, VAR_8);
 FUNC_14(&VAR_5, VAR_8, VAR_12);
 FUNC_11(VAR_8);
}
