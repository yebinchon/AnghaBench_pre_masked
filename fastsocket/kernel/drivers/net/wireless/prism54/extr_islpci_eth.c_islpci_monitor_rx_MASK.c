
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int pkt_type; int protocol; scalar_t__ data; } ;
struct rfmon_header {int flags; int rate; int rssi; int freq; int clock; } ;
struct avs_80211_1_header {void* encoding; void* preamble; void* ssi_noise; void* ssi_signal; void* ssi_type; void* priority; void* antenna; void* datarate; void* channel; void* phytype; void* hosttime; void* mactime; void* length; void* version; } ;
struct TYPE_7__ {int noise; } ;
struct TYPE_8__ {TYPE_2__ qual; } ;
struct TYPE_9__ {TYPE_3__ local_iwstatistics; TYPE_1__* ndev; } ;
typedef TYPE_4__ islpci_private ;
struct TYPE_6__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static inline int
FUNC_12(islpci_private *VAR_6, struct sk_buff **VAR_7)
{



 struct rfmon_header *VAR_8 = (struct rfmon_header *) (*VAR_7)->data;

 if (VAR_8->flags & 0x01)

  return -1;
 if (VAR_6->ndev->type == VAR_0) {
  struct avs_80211_1_header *VAR_9;

  u32 VAR_10 = FUNC_6(VAR_8->clock);
  u8 VAR_11 = VAR_8->rate;
  u16 VAR_12 = FUNC_5(VAR_8->freq);
  u8 VAR_13 = VAR_8->rssi;

  FUNC_9(*VAR_7, sizeof (struct rfmon_header));

  if (FUNC_8(*VAR_7) < sizeof (struct avs_80211_1_header)) {
   struct sk_buff *VAR_14 = FUNC_7(*VAR_7,
         sizeof (struct
          avs_80211_1_header),
         0, VAR_2);
   if (VAR_14) {
    FUNC_3(*VAR_7);
    *VAR_7 = VAR_14;
   } else
    return -1;

  }


  VAR_9 =
      (struct avs_80211_1_header *) FUNC_10(*VAR_7,
          sizeof (struct
           avs_80211_1_header));

  VAR_9->version = FUNC_1(VAR_3);
  VAR_9->length = FUNC_1(sizeof (struct avs_80211_1_header));
  VAR_9->mactime = FUNC_2(VAR_10);
  VAR_9->hosttime = FUNC_2(VAR_5);
  VAR_9->phytype = FUNC_1(6);
  VAR_9->channel = FUNC_1(FUNC_0(VAR_12));
  VAR_9->datarate = FUNC_1(VAR_11 * 5);
  VAR_9->antenna = FUNC_1(0);
  VAR_9->priority = FUNC_1(0);
  VAR_9->ssi_type = FUNC_1(3);
  VAR_9->ssi_signal = FUNC_1(VAR_13 & 0x7f);
  VAR_9->ssi_noise = FUNC_1(VAR_6->local_iwstatistics.qual.noise);
  VAR_9->preamble = FUNC_1(0);
  VAR_9->encoding = FUNC_1(0);
 } else
  FUNC_9(*VAR_7, sizeof (struct rfmon_header));

 (*VAR_7)->protocol = FUNC_4(VAR_1);
 FUNC_11(*VAR_7);
 (*VAR_7)->pkt_type = VAR_4;

 return 0;
}
