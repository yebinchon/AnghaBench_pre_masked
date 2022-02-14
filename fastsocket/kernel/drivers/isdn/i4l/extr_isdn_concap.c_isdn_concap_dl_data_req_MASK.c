
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int name; } ;
struct concap_proto {struct net_device* net_dev; } ;
struct TYPE_4__ {int xmit_lock; scalar_t__ huptimer; int * netdev; } ;
typedef TYPE_1__ isdn_net_local ;
typedef int isdn_net_dev ;


 int FUNC_0 (char*,int ,...) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct concap_proto *VAR_0, struct sk_buff *VAR_1)
{
 struct net_device *VAR_2 = VAR_0 -> net_dev;
 isdn_net_dev *VAR_3 = ((isdn_net_local *) FUNC_3(VAR_2))->netdev;
 isdn_net_local *VAR_4 = FUNC_1(VAR_3);

 FUNC_0( "isdn_concap_dl_data_req: %s \n", VAR_0->net_dev->name);
 if (!VAR_4) {
  FUNC_0( "isdn_concap_dl_data_req: %s : isdn_net_send_skb returned %d\n", VAR_0 -> net_dev -> name, 1);
  return 1;
 }
 VAR_4->huptimer = 0;
 FUNC_2(VAR_4, VAR_1);
 FUNC_4(&VAR_4->xmit_lock);
 FUNC_0( "isdn_concap_dl_data_req: %s : isdn_net_send_skb returned %d\n", VAR_0 -> net_dev -> name, 0);
 return 0;
}
