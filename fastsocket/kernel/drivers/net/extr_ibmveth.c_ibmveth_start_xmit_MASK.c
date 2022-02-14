
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {unsigned int flags_len; unsigned long address; } ;
union ibmveth_buf_desc {TYPE_3__ fields; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ protocol; int csum_offset; unsigned int len; int data; } ;
struct TYPE_8__ {unsigned int tx_bytes; int tx_packets; int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct ibmveth_adapter {unsigned long bounce_buffer_dma; int tx_map_failed; TYPE_2__* vdev; int tx_send_failed; int bounce_buffer; } ;
struct TYPE_11__ {unsigned int size; int page_offset; int page; } ;
typedef TYPE_4__ skb_frag_t ;
typedef int netdev_tx_t ;
typedef int descs ;
struct TYPE_14__ {scalar_t__ protocol; } ;
struct TYPE_13__ {scalar_t__ nexthdr; } ;
struct TYPE_12__ {int nr_frags; TYPE_4__* frags; } ;
struct TYPE_9__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned long FUNC_2 (int *,int ,int ,unsigned int,int ) ;
 unsigned long FUNC_3 (int *,int ,unsigned int,int ) ;
 scalar_t__ FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long,int,int ) ;
 int FUNC_6 (int *,unsigned long,int,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct ibmveth_adapter*,union ibmveth_buf_desc*) ;
 TYPE_7__* FUNC_10 (struct sk_buff*) ;
 TYPE_6__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (union ibmveth_buf_desc*,int ,int) ;
 int FUNC_13 (struct net_device*,char*) ;
 struct ibmveth_adapter* FUNC_14 (struct net_device*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int ,unsigned int) ;
 unsigned int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 TYPE_5__* FUNC_20 (struct sk_buff*) ;
 unsigned char* FUNC_21 (struct sk_buff*) ;
 unsigned int VAR_11 ;

__attribute__((used)) static netdev_tx_t FUNC_22(struct sk_buff *VAR_12,
          struct net_device *VAR_13)
{
 struct ibmveth_adapter *VAR_14 = FUNC_14(VAR_13);
 unsigned int VAR_15;
 union ibmveth_buf_desc VAR_16[6];
 int VAR_17, VAR_18;
 int VAR_19 = 0;





 if (FUNC_20(VAR_12)->nr_frags > 5 && FUNC_0(VAR_12)) {
  VAR_13->stats.tx_dropped++;
  goto out;
 }


 if (VAR_12->ip_summed == VAR_0 &&
     ((VAR_12->protocol == FUNC_8(VAR_2) &&
       FUNC_10(VAR_12)->protocol != VAR_9) ||
      (VAR_12->protocol == FUNC_8(VAR_3) &&
       FUNC_11(VAR_12)->nexthdr != VAR_9)) &&
     FUNC_15(VAR_12)) {

  FUNC_13(VAR_13, "tx: failed to checksum packet\n");
  VAR_13->stats.tx_dropped++;
  goto out;
 }

 VAR_15 = VAR_8;

 if (VAR_12->ip_summed == VAR_0) {
  unsigned char *VAR_20 = FUNC_21(VAR_12) +
      VAR_12->csum_offset;

  VAR_15 |= (VAR_7 | VAR_5);


  VAR_20[0] = 0;
  VAR_20[1] = 0;
 }

retry_bounce:
 FUNC_12(VAR_16, 0, sizeof(VAR_16));






 if (VAR_19 || (!FUNC_18(VAR_12) &&
    (VAR_12->len < VAR_11))) {
  FUNC_16(VAR_12, VAR_14->bounce_buffer,
       VAR_12->len);

  VAR_16[0].fields.flags_len = VAR_15 | VAR_12->len;
  VAR_16[0].fields.address = VAR_14->bounce_buffer_dma;

  if (FUNC_9(VAR_14, VAR_16)) {
   VAR_14->tx_send_failed++;
   VAR_13->stats.tx_dropped++;
  } else {
   VAR_13->stats.tx_packets++;
   VAR_13->stats.tx_bytes += VAR_12->len;
  }

  goto out;
 }


 VAR_16[0].fields.address = FUNC_3(&VAR_14->vdev->dev, VAR_12->data,
       FUNC_17(VAR_12),
       VAR_1);
 if (FUNC_4(&VAR_14->vdev->dev, VAR_16[0].fields.address))
  goto map_failed;

 VAR_16[0].fields.flags_len = VAR_15 | FUNC_17(VAR_12);


 for (VAR_18 = 0; VAR_18 < FUNC_20(VAR_12)->nr_frags; VAR_18++) {
  unsigned long VAR_21;
  skb_frag_t *VAR_22 = &FUNC_20(VAR_12)->frags[VAR_18];

  VAR_21 = FUNC_2(&VAR_14->vdev->dev, VAR_22->page,
     VAR_22->page_offset, VAR_22->size,
     VAR_1);

  if (FUNC_4(&VAR_14->vdev->dev, VAR_21))
   goto map_failed_frags;

  VAR_16[VAR_18+1].fields.flags_len = VAR_15 | VAR_22->size;
  VAR_16[VAR_18+1].fields.address = VAR_21;
 }

 if (FUNC_9(VAR_14, VAR_16)) {
  VAR_14->tx_send_failed++;
  VAR_13->stats.tx_dropped++;
 } else {
  VAR_13->stats.tx_packets++;
  VAR_13->stats.tx_bytes += VAR_12->len;
 }

 FUNC_6(&VAR_14->vdev->dev,
    VAR_16[0].fields.address,
    VAR_16[0].fields.flags_len & VAR_6,
    VAR_1);

 for (VAR_18 = 1; VAR_18 < FUNC_20(VAR_12)->nr_frags + 1; VAR_18++)
  FUNC_5(&VAR_14->vdev->dev, VAR_16[VAR_18].fields.address,
          VAR_16[VAR_18].fields.flags_len & VAR_6,
          VAR_1);

out:
 FUNC_1(VAR_12);
 return VAR_10;

map_failed_frags:
 VAR_17 = VAR_18+1;
 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
  FUNC_5(&VAR_14->vdev->dev, VAR_16[VAR_18].fields.address,
          VAR_16[VAR_18].fields.flags_len & VAR_6,
          VAR_1);

map_failed:
 if (!FUNC_7(VAR_4))
  FUNC_13(VAR_13, "tx: unable to map xmit buffer\n");
 VAR_14->tx_map_failed++;
 FUNC_19(VAR_12);
 VAR_19 = 1;
 goto retry_bounce;
}
