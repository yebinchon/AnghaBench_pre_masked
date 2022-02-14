
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int mtu; int * netdev_ops; int tx_queue_len; int * header_ops; int type; int watchdog_timeo; int * wireless_handlers; TYPE_1__* wireless_data; } ;
struct TYPE_5__ {int * spy_data; } ;
struct hostap_interface {TYPE_1__ wireless_data; int spy_data; } ;
struct TYPE_6__ {int mtu; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_7__ {int ext_priv_flags; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_2 (struct net_device*) ;
 struct hostap_interface* FUNC_3 (struct net_device*) ;
 int VAR_8 ;

void FUNC_4(struct net_device *VAR_9, local_info_t *VAR_10,
        int VAR_11)
{
 struct hostap_interface *VAR_12;

 VAR_12 = FUNC_3(VAR_9);
 FUNC_1(VAR_9);
 FUNC_2(VAR_9)->ext_priv_flags &= ~VAR_1;


 if (VAR_12) {


  VAR_12->wireless_data.spy_data = &VAR_12->spy_data;
  VAR_9->wireless_data = &VAR_12->wireless_data;
 }
 VAR_9->wireless_handlers = &VAR_4;
 VAR_9->watchdog_timeo = VAR_2;

 switch(VAR_11) {
 case 129:
  VAR_9->tx_queue_len = 0;
  VAR_9->netdev_ops = &VAR_6;
  VAR_9->type = VAR_0;
  VAR_9->header_ops = &VAR_3;
  break;
 case 128:
  VAR_9->netdev_ops = &VAR_5;
  break;
 default:
  VAR_9->tx_queue_len = 0;
  VAR_9->netdev_ops = &VAR_7;
 }

 VAR_9->mtu = VAR_10->mtu;


 FUNC_0(VAR_9, &VAR_8);

}
