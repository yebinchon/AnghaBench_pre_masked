
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfc2734_header {int dummy; } ;
struct net_device {int name; int broadcast; int dev_addr; int mtu; } ;
struct fwnet_device {int dev_link; struct net_device* netdev; struct fw_card* card; int peer_list; int sent_list; int broadcasted_list; int packet_list; int local_fifo; scalar_t__ broadcast_xmt_datagramlabel; scalar_t__ broadcast_xmt_max_payload; int * broadcast_rcv_context; int broadcast_state; int lock; } ;
struct fw_unit {int dummy; } ;
struct fw_device {struct fw_card* card; } ;
struct fw_card {int max_receive; unsigned long long guid; int device; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,int ) ;
 struct net_device* FUNC_2 (int,char*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,unsigned long long) ;
 struct fw_device* FUNC_6 (struct fw_unit*) ;
 struct fw_unit* FUNC_7 (struct device*) ;
 int FUNC_8 (struct fwnet_device*,struct fw_unit*,struct fw_device*) ;
 struct fwnet_device* FUNC_9 (struct fw_card*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned int,unsigned int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct fwnet_device* FUNC_15 (struct net_device*) ;
 int FUNC_16 (unsigned long long,int ) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct net_device*) ;

__attribute__((used)) static int FUNC_20(struct device *VAR_7)
{
 struct fw_unit *VAR_8 = FUNC_7(VAR_7);
 struct fw_device *VAR_9 = FUNC_6(VAR_8);
 struct fw_card *VAR_10 = VAR_9->card;
 struct net_device *VAR_11;
 bool VAR_12 = 0;
 struct fwnet_device *VAR_13;
 unsigned VAR_14;
 int VAR_15;

 FUNC_13(&VAR_5);

 VAR_13 = FUNC_9(VAR_10);
 if (VAR_13) {
  VAR_11 = VAR_13->netdev;
  goto have_dev;
 }

 VAR_11 = FUNC_2(sizeof(*VAR_13), "firewire%d", VAR_6);
 if (VAR_11 == ((void*)0)) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_12 = 1;
 FUNC_1(VAR_11, VAR_10->device);
 VAR_13 = FUNC_15(VAR_11);

 FUNC_18(&VAR_13->lock);
 VAR_13->broadcast_state = VAR_1;
 VAR_13->broadcast_rcv_context = ((void*)0);
 VAR_13->broadcast_xmt_max_payload = 0;
 VAR_13->broadcast_xmt_datagramlabel = 0;

 VAR_13->local_fifo = VAR_2;

 FUNC_0(&VAR_13->packet_list);
 FUNC_0(&VAR_13->broadcasted_list);
 FUNC_0(&VAR_13->sent_list);
 FUNC_0(&VAR_13->peer_list);

 VAR_13->card = VAR_10;
 VAR_13->netdev = VAR_11;





 VAR_14 = (1 << (VAR_10->max_receive + 1))
    - sizeof(struct rfc2734_header) - VAR_3;
 VAR_11->mtu = FUNC_12(1500U, VAR_14);


 FUNC_16(VAR_10->guid, VAR_11->dev_addr);
 FUNC_16(~0ULL, VAR_11->broadcast);
 VAR_15 = FUNC_17(VAR_11);
 if (VAR_15) {
  FUNC_4("Cannot register the driver\n");
  goto out;
 }

 FUNC_10(&VAR_13->dev_link, &VAR_4);
 FUNC_5("%s: IPv4 over FireWire on device %016llx\n",
    VAR_11->name, (unsigned long long)VAR_10->guid);
 have_dev:
 VAR_15 = FUNC_8(VAR_13, VAR_8, VAR_9);
 if (VAR_15 && VAR_12) {
  FUNC_19(VAR_11);
  FUNC_11(&VAR_13->dev_link);
 }
 out:
 if (VAR_15 && VAR_12)
  FUNC_3(VAR_11);

 FUNC_14(&VAR_5);

 return VAR_15;
}
