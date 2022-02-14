
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_network {int bssid; } ;
struct ieee80211_device {int associate_seq; scalar_t__ open_wep; TYPE_1__* dev; } ;
struct TYPE_4__ {int duration_id; int addr3; int addr2; int addr1; int frame_ctl; } ;
struct ieee80211_authentication {void* status; void* transaction; int algorithm; TYPE_2__ header; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;

inline struct sk_buff *FUNC_4(struct ieee80211_network *VAR_6,
 struct ieee80211_device *VAR_7, int VAR_8)
{
 struct sk_buff *VAR_9;
 struct ieee80211_authentication *VAR_10;

 VAR_9 = FUNC_1(sizeof(struct ieee80211_authentication) + VAR_8);

 if (!VAR_9) return ((void*)0);

 VAR_10 = (struct ieee80211_authentication *)
  FUNC_3(VAR_9, sizeof(struct ieee80211_authentication));

 VAR_10->header.frame_ctl = VAR_2;
 if (VAR_8) VAR_10->header.frame_ctl |= VAR_1;

 VAR_10->header.duration_id = 0x013a;

 FUNC_2(VAR_10->header.addr1, VAR_6->bssid, VAR_0);
 FUNC_2(VAR_10->header.addr2, VAR_7->dev->dev_addr, VAR_0);
 FUNC_2(VAR_10->header.addr3, VAR_6->bssid, VAR_0);

 VAR_10->algorithm = VAR_7->open_wep ? VAR_3 : VAR_4;

 VAR_10->transaction = FUNC_0(VAR_7->associate_seq);
 VAR_7->associate_seq++;

 VAR_10->status = FUNC_0(VAR_5);

 return VAR_9;

}
