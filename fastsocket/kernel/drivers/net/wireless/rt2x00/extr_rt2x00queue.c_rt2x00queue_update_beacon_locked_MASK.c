
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct txentry_desc {int dummy; } ;
struct skb_frame_desc {TYPE_3__* entry; } ;
struct rt2x00_intf {TYPE_3__* beacon; } ;
struct rt2x00_dev {TYPE_2__* ops; int hw; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_7__ {int skb; } ;
struct TYPE_6__ {TYPE_1__* lib; } ;
struct TYPE_5__ {int (* write_beacon ) (TYPE_3__*,struct txentry_desc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct skb_frame_desc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ieee80211_vif*) ;
 int FUNC_2 (struct skb_frame_desc*,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,struct txentry_desc*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,struct txentry_desc*) ;
 scalar_t__ FUNC_6 (int) ;
 struct rt2x00_intf* FUNC_7 (struct ieee80211_vif*) ;

int FUNC_8(struct rt2x00_dev *VAR_2,
         struct ieee80211_vif *VAR_3)
{
 struct rt2x00_intf *VAR_4 = FUNC_7(VAR_3);
 struct skb_frame_desc *VAR_5;
 struct txentry_desc VAR_6;

 if (FUNC_6(!VAR_4->beacon))
  return -VAR_0;




 FUNC_4(VAR_4->beacon);

 VAR_4->beacon->skb = FUNC_1(VAR_2->hw, VAR_3);
 if (!VAR_4->beacon->skb)
  return -VAR_1;






 FUNC_3(VAR_2, VAR_4->beacon->skb, &VAR_6, ((void*)0));




 VAR_5 = FUNC_0(VAR_4->beacon->skb);
 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->entry = VAR_4->beacon;




 VAR_2->ops->lib->write_beacon(VAR_4->beacon, &VAR_6);

 return 0;

}
