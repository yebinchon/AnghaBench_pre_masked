
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u16 ;
struct net_device {int addr_len; int name; void* base_addr; int dev_addr; } ;
struct dvb_net_priv {int need_pusi; int mutex; int restart_net_feed_wq; int set_multicast_list_wq; scalar_t__ feedtype; scalar_t__ tscc; int rx_mode; void* pid; int demux; struct net_device* net; } ;
struct dvb_net {struct net_device** device; int demux; TYPE_2__* dvbdev; } ;
struct TYPE_4__ {int id; TYPE_1__* adapter; } ;
struct TYPE_3__ {int num; int proposed_mac; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 struct net_device* FUNC_1 (int,char*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct dvb_net*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 struct dvb_net_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct dvb_net_priv*) ;
 int FUNC_10 (int ,int ,char*,int,int,...) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(struct dvb_net *VAR_9, u16 VAR_10, u8 VAR_11)
{
 struct net_device *VAR_12;
 struct dvb_net_priv *VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_11 != VAR_0 && VAR_11 != VAR_1)
  return -VAR_2;
 if ((VAR_15 = FUNC_3(VAR_9)) < 0)
  return -VAR_2;

 VAR_12 = FUNC_1(sizeof(struct dvb_net_priv), "dvb", VAR_6);
 if (!VAR_12)
  return -VAR_3;

 if (VAR_9->dvbdev->id)
  FUNC_10(VAR_12->name, VAR_4, "dvb%d%u%d",
    VAR_9->dvbdev->adapter->num, VAR_9->dvbdev->id, VAR_15);
 else

  FUNC_10(VAR_12->name, VAR_4, "dvb%d_%d",
    VAR_9->dvbdev->adapter->num, VAR_15);

 VAR_12->addr_len = 6;
 FUNC_4(VAR_12->dev_addr, VAR_9->dvbdev->adapter->proposed_mac, 6);

 VAR_9->device[VAR_15] = VAR_12;

 VAR_13 = FUNC_6(VAR_12);
 VAR_13->net = VAR_12;
 VAR_13->demux = VAR_9->demux;
 VAR_13->pid = VAR_10;
 VAR_13->rx_mode = VAR_5;
 VAR_13->need_pusi = 1;
 VAR_13->tscc = 0;
 VAR_13->feedtype = VAR_11;
 FUNC_9(VAR_13);

 FUNC_0(&VAR_13->set_multicast_list_wq, VAR_8);
 FUNC_0(&VAR_13->restart_net_feed_wq, VAR_7);
 FUNC_5(&VAR_13->mutex);

 VAR_12->base_addr = VAR_10;

 if ((VAR_14 = FUNC_8(VAR_12)) < 0) {
  VAR_9->device[VAR_15] = ((void*)0);
  FUNC_2(VAR_12);
  return VAR_14;
 }
 FUNC_7("dvb_net: created network interface %s\n", VAR_12->name);

 return VAR_15;
}
