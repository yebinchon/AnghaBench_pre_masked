
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int protocol; scalar_t__ data; } ;
struct TYPE_6__ {int rx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct ieee80211_hdr {int frame_control; } ;
struct hostap_interface {TYPE_3__* local; } ;
struct hostap_80211_rx_status {int dummy; } ;
struct TYPE_7__ {TYPE_1__* ap; } ;
typedef TYPE_3__ local_info_t ;
struct TYPE_5__ {scalar_t__ ap_policy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_3__*,struct sk_buff*,struct hostap_80211_rx_status*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct hostap_interface* FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_2, struct sk_buff *VAR_3,
        struct hostap_80211_rx_status *VAR_4)
{
 struct hostap_interface *VAR_5;
 local_info_t *VAR_6;
 struct ieee80211_hdr *VAR_7;

 VAR_5 = FUNC_4(VAR_2);
 VAR_6 = VAR_5->local;

 if (VAR_3->len < 16)
  goto drop;

 VAR_2->stats.rx_packets++;

 VAR_7 = (struct ieee80211_hdr *) VAR_3->data;

 if (VAR_6->ap->ap_policy == VAR_0 &&
     FUNC_3(VAR_7->frame_control))
  goto drop;

 VAR_3->protocol = FUNC_0(VAR_1);
 FUNC_2(VAR_6, VAR_3, VAR_4);
 return;

 drop:
 FUNC_1(VAR_3);
}
