
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; int len; } ;
struct ieee80211_rx_stats {int len; } ;
struct ieee80211_hdr_4addr {int dummy; } ;
struct ieee80211_hdr_3addr {int addr1; } ;
struct ieee80211_device {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ieee80211_device*,struct sk_buff*,struct ieee80211_rx_stats*,int ,int ) ;
 int FUNC_2 (struct ieee80211_device*,struct ieee80211_hdr_4addr*,struct ieee80211_rx_stats*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_4(struct ieee80211_device *VAR_1, struct sk_buff *VAR_2,
   struct ieee80211_rx_stats *VAR_3, u16 VAR_4,
   u16 VAR_5)
{




        struct ieee80211_hdr_3addr * VAR_6 = (struct ieee80211_hdr_3addr *)VAR_2->data;

 VAR_3->len = VAR_2->len;
 FUNC_2(VAR_1,(struct ieee80211_hdr_4addr *)VAR_2->data,VAR_3);

        if ((FUNC_3(VAR_6->addr1, VAR_1->dev->dev_addr, VAR_0)))
        {
                FUNC_0(VAR_2);
                return 0;
        }

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_0(VAR_2);

 return 0;

}
