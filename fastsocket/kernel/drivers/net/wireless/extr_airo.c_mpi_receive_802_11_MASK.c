
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int ip_summed; int protocol; int * dev; int pkt_type; } ;
struct rx_hdr {size_t* rssi; scalar_t__ len; scalar_t__ status; } ;
struct iw_quality {size_t qual; int level; int updated; int noise; } ;
struct TYPE_14__ {int noise; } ;
struct TYPE_15__ {TYPE_4__ qual; } ;
struct TYPE_12__ {scalar_t__ spy_number; } ;
struct airo_info {TYPE_6__* rxfids; int * wifidev; TYPE_8__* dev; TYPE_5__ wstats; TYPE_3__* rssi; TYPE_2__ spy_data; } ;
typedef int rxd ;
typedef int hdr ;
typedef int __le16 ;
struct TYPE_11__ {int rx_dropped; } ;
struct TYPE_18__ {int name; TYPE_1__ stats; } ;
struct TYPE_17__ {int valid; int len; scalar_t__ rdy; } ;
struct TYPE_16__ {char* virtual_host_addr; int card_ram_off; } ;
struct TYPE_13__ {int rssidBm; } ;
typedef TYPE_7__ RxFid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (TYPE_7__*,int ,int) ;
 int FUNC_9 (int ,TYPE_7__*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (TYPE_8__*,char*,struct iw_quality*) ;

__attribute__((used)) static void FUNC_14(struct airo_info *VAR_8)
{
 RxFid VAR_9;
 struct sk_buff *VAR_10 = ((void*)0);
 u16 VAR_11, VAR_12 = 0;
 __le16 VAR_13;
 struct rx_hdr VAR_14;
 u16 VAR_15;
 u16 *VAR_16;
 char *VAR_17 = VAR_8->rxfids[0].virtual_host_addr + 4;

 FUNC_8(&VAR_9, VAR_8->rxfids[0].card_ram_off, sizeof(VAR_9));
 FUNC_7 ((char *)&VAR_14, VAR_17, sizeof(VAR_14));
 VAR_17 += sizeof(VAR_14);

 if (FUNC_6(VAR_14.status) & 2)
  VAR_14.len = 0;
 if (VAR_8->wifidev == ((void*)0))
  VAR_14.len = 0;
 VAR_11 = FUNC_6(VAR_14.len);
 if (VAR_11 > VAR_0) {
  FUNC_0(VAR_8->dev->name, "Bad size %d", VAR_11);
  goto badrx;
 }
 if (VAR_11 == 0)
  goto badrx;

 VAR_13 = FUNC_2((__le16 *)VAR_17);
 VAR_12 = FUNC_4(VAR_13);

 VAR_10 = FUNC_1( VAR_11 + VAR_12 + 2 );
 if ( !VAR_10 ) {
  VAR_8->dev->stats.rx_dropped++;
  goto badrx;
 }
 VAR_16 = (u16*)FUNC_11 (VAR_10, VAR_11 + VAR_12);
 FUNC_7 ((char *)VAR_16, VAR_17, VAR_12);
 VAR_17 += VAR_12;
 if (VAR_12 == 24)
  VAR_17 += 6;
 VAR_15 = FUNC_3(VAR_17);
 VAR_17 += sizeof(__le16);
 if (VAR_15) {
  if (VAR_15 <= 8)
   VAR_17 += VAR_15;
  else
   FUNC_0(VAR_8->dev->name,
       "gaplen too big. Problems will follow...");
 }
 FUNC_7 ((char *)VAR_16 + VAR_12, VAR_17, VAR_11);
 VAR_17 += VAR_11;
 FUNC_12(VAR_10);
 VAR_10->pkt_type = VAR_6;
 VAR_10->dev = VAR_8->wifidev;
 VAR_10->protocol = FUNC_5(VAR_2);
 VAR_10->ip_summed = VAR_1;
 FUNC_10( VAR_10 );

badrx:
 if (VAR_9.valid == 0) {
  VAR_9.valid = 1;
  VAR_9.rdy = 0;
  VAR_9.len = VAR_7;
  FUNC_9(VAR_8->rxfids[0].card_ram_off, &VAR_9, sizeof(VAR_9));
 }
}
