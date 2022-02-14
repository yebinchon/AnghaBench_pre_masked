
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct hpsb_iso_packet_info {int len; int channel; scalar_t__ offset; } ;
struct TYPE_4__ {scalar_t__ kvirt; } ;
struct hpsb_iso {int first_packet; int buf_packets; TYPE_3__* host; TYPE_1__ data_buf; struct hpsb_iso_packet_info* infos; } ;
struct eth1394_priv {int dummy; } ;
struct eth1394_host_info {struct net_device* dev; } ;
typedef int __be32 ;
struct TYPE_5__ {int broadcast_channel; } ;
struct TYPE_6__ {TYPE_2__ csr; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*,int,int,char*,unsigned int) ;
 struct eth1394_host_info* FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (struct hpsb_iso*) ;
 int FUNC_5 (struct hpsb_iso*,int) ;
 struct eth1394_priv* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct hpsb_iso *VAR_5)
{
 __be32 *VAR_6;
 char *VAR_7;
 struct eth1394_host_info *VAR_8;
 struct net_device *VAR_9;
 struct eth1394_priv *VAR_10;
 unsigned int VAR_11;
 u32 VAR_12;
 u16 VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_8 = FUNC_3(&VAR_4, VAR_5->host);
 if (FUNC_7(!VAR_8)) {
  FUNC_0(VAR_2, "No net device at fw-host%d\n",
    VAR_5->host->id);
  return;
 }

 VAR_9 = VAR_8->dev;

 VAR_15 = FUNC_4(VAR_5);
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  struct hpsb_iso_packet_info *VAR_16 =
   &VAR_5->infos[(VAR_5->first_packet + VAR_14) % VAR_5->buf_packets];
  VAR_6 = (__be32 *)(VAR_5->data_buf.kvirt + VAR_16->offset);


  VAR_7 = (char *)VAR_6 + 8;
  VAR_11 = VAR_16->len - 8;

  VAR_12 = (FUNC_1(VAR_6[0]) & 0xffff) << 8 |
          (FUNC_1(VAR_6[1]) & 0xff000000) >> 24;
  VAR_13 = FUNC_1(VAR_6[0]) >> 16;

  VAR_10 = FUNC_6(VAR_9);

  if (VAR_16->channel != (VAR_5->host->csr.broadcast_channel & 0x3f)
      || VAR_12 != VAR_1) {

   continue;
  }
  FUNC_2(VAR_9, VAR_13, VAR_3 | VAR_0,
           VAR_7, VAR_11);
 }

 FUNC_5(VAR_5, VAR_14);

}
