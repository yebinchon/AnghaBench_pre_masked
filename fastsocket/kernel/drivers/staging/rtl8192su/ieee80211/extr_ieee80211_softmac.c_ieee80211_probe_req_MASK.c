
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int addr3; int * addr2; int addr1; scalar_t__ duration_id; int frame_ctl; } ;
struct ieee80211_probe_request {TYPE_2__ header; } ;
struct TYPE_6__ {unsigned int ssid_len; int ssid; } ;
struct ieee80211_device {TYPE_3__ current_network; TYPE_1__* dev; scalar_t__ tx_headroom; } ;
struct TYPE_4__ {int dev_addr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ieee80211_device*,int **) ;
 int FUNC_3 (struct ieee80211_device*,int **) ;
 unsigned int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (int *,int ,unsigned int) ;
 int FUNC_6 (int ,int,unsigned int) ;
 scalar_t__ FUNC_7 (struct sk_buff*,unsigned int) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;

inline struct sk_buff *FUNC_9(struct ieee80211_device *VAR_3)
{
 unsigned int VAR_4,VAR_5;
 u8 *VAR_6;
 struct sk_buff *VAR_7;
 struct ieee80211_probe_request *VAR_8;

 VAR_4 = VAR_3->current_network.ssid_len;

 VAR_5 = FUNC_4(VAR_3);

 VAR_7 = FUNC_1(sizeof(struct ieee80211_probe_request) +
       2 + VAR_4 + VAR_5 + VAR_3->tx_headroom);
 if (!VAR_7)
  return ((void*)0);

 FUNC_8(VAR_7, VAR_3->tx_headroom);

 VAR_8 = (struct ieee80211_probe_request *) FUNC_7(VAR_7,sizeof(struct ieee80211_probe_request));
 VAR_8->header.frame_ctl = FUNC_0(VAR_1);
 VAR_8->header.duration_id = 0;

 FUNC_6(VAR_8->header.addr1, 0xff, VAR_0);
 FUNC_5(VAR_8->header.addr2, VAR_3->dev->dev_addr, VAR_0);
 FUNC_6(VAR_8->header.addr3, 0xff, VAR_0);

 VAR_6 = (u8 *) FUNC_7(VAR_7,VAR_4+2+VAR_5);

 *VAR_6++ = VAR_2;
 *VAR_6++ = VAR_4;
 FUNC_5(VAR_6, VAR_3->current_network.ssid, VAR_4);
 VAR_6 += VAR_4;

 FUNC_2(VAR_3,&VAR_6);
 FUNC_3(VAR_3,&VAR_6);
 return VAR_7;
}
