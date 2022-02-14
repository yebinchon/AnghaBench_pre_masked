
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct libipw_rx_stats {int dummy; } ;
struct libipw_hdr_4addr {int addr3; int addr1; int addr2; int frame_ctl; } ;
struct libipw_hdr_3addr {int dummy; } ;
struct libipw_device {int iw_mode; TYPE_2__* dev; int bssid; } ;
struct ieee80211_hdr {int dummy; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct TYPE_4__ {int flags; TYPE_1__ stats; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;


 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct libipw_device*,struct sk_buff*,struct libipw_rx_stats*) ;
 int FUNC_4 (struct libipw_device*,struct libipw_hdr_4addr*,struct libipw_rx_stats*) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(struct libipw_device *VAR_7,
       struct sk_buff *VAR_8, struct libipw_rx_stats *VAR_9)
{
 struct libipw_hdr_4addr *VAR_10;
 int VAR_11;
 u16 VAR_12;

 if (VAR_7->iw_mode == VAR_6) {
  if (!FUNC_3(VAR_7, VAR_8, VAR_9))
   FUNC_0(VAR_8);
  return;
 }

 if (VAR_8->len < sizeof(struct ieee80211_hdr))
  goto drop_free;

 VAR_10 = (struct libipw_hdr_4addr *)VAR_8->data;
 VAR_12 = FUNC_2(VAR_10->frame_ctl);

 if ((VAR_12 & VAR_4) != 0)
  goto drop_free;

 switch (VAR_12 & VAR_2) {
 case 130:
  if (VAR_8->len < sizeof(struct libipw_hdr_3addr))
   goto drop_free;
  FUNC_4(VAR_7, VAR_10, VAR_9);
  FUNC_0(VAR_8);
  return;
 case 131:
  break;
 case 132:
  return;
 default:
  return;
 }

 VAR_11 = 0;
 switch (VAR_7->iw_mode) {
 case 129:

  if (FUNC_5(VAR_10->addr3, VAR_7->bssid, VAR_0) == 0)
  if ((VAR_12 & (VAR_3+VAR_1)) == 0) {

   if (VAR_7->dev->flags & VAR_5)
    VAR_11 = 1;

   else if (FUNC_5(VAR_10->addr1, VAR_7->dev->dev_addr, VAR_0) == 0)
    VAR_11 = 1;

   else if (FUNC_1(VAR_10->addr1))
    VAR_11 = 1;
  }
  break;
 case 128:

  if (FUNC_5(VAR_10->addr2, VAR_7->bssid, VAR_0) == 0)
  if ((VAR_12 & (VAR_3+VAR_1)) == VAR_1) {

   if (VAR_7->dev->flags & VAR_5)
    VAR_11 = 1;

   else if (FUNC_5(VAR_10->addr1, VAR_7->dev->dev_addr, VAR_0) == 0)
    VAR_11 = 1;

   else if (FUNC_1(VAR_10->addr1)) {

    if (FUNC_5(VAR_10->addr3, VAR_7->dev->dev_addr, VAR_0))
     VAR_11 = 1;
   }
  }
  break;
 default:

  break;
 }

 if (VAR_11)
  if (!FUNC_3(VAR_7, VAR_8, VAR_9))
   FUNC_0(VAR_8);
 return;

drop_free:
 FUNC_0(VAR_8);
 VAR_7->dev->stats.rx_dropped++;
}
