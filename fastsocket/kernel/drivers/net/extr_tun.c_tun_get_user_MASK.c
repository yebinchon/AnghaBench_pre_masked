
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtio_net_hdr {int flags; size_t csum_start; size_t csum_offset; size_t hdr_len; int gso_type; scalar_t__ gso_size; int member_0; } ;
struct tun_struct {int flags; size_t vnet_hdr_sz; TYPE_3__* dev; } ;
struct tun_pi {void* proto; int member_1; int member_0; } ;
struct sk_buff {int* data; void* protocol; TYPE_3__* dev; int ip_summed; } ;
struct iovec {int dummy; } ;
typedef size_t ssize_t ;
typedef int pi ;
typedef int gso ;
struct TYPE_4__ {size_t rx_bytes; int rx_packets; int rx_frame_errors; int rx_dropped; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;
struct TYPE_5__ {scalar_t__ gso_size; scalar_t__ gso_segs; int gso_type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 size_t VAR_7 ;
 size_t FUNC_1 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;


 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;



 int FUNC_2 (int ) ;
 void* FUNC_3 (struct sk_buff*,TYPE_3__*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (void*,struct iovec const*,int,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,struct iovec const*,int,size_t) ;
 int FUNC_10 (struct sk_buff*,size_t,size_t) ;
 int FUNC_11 (struct sk_buff*) ;
 TYPE_2__* FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (struct tun_struct*,size_t,size_t,size_t,int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static __inline__ ssize_t FUNC_15(struct tun_struct *VAR_20,
           const struct iovec *VAR_21, size_t VAR_22,
           int VAR_23)
{
 struct tun_pi VAR_24 = { 0, FUNC_2(VAR_5) };
 struct sk_buff *VAR_25;
 size_t VAR_26 = VAR_22, VAR_27 = 0;
 struct virtio_net_hdr VAR_28 = { 0 };
 int VAR_29 = 0;

 if (!(VAR_20->flags & VAR_14)) {
  if ((VAR_26 -= sizeof(VAR_24)) > VAR_22)
   return -VAR_3;

  if (FUNC_6((void *)&VAR_24, VAR_21, 0, sizeof(VAR_24)))
   return -VAR_2;
  VAR_29 += sizeof(VAR_24);
 }

 if (VAR_20->flags & VAR_16) {
  if ((VAR_26 -= VAR_20->vnet_hdr_sz) > VAR_22)
   return -VAR_3;

  if (FUNC_6((void *)&VAR_28, VAR_21, VAR_29, sizeof(VAR_28)))
   return -VAR_2;

  if ((VAR_28.flags & VAR_17) &&
      VAR_28.csum_start + VAR_28.csum_offset + 2 > VAR_28.hdr_len)
   VAR_28.hdr_len = VAR_28.csum_start + VAR_28.csum_offset + 2;

  if (VAR_28.hdr_len > VAR_26)
   return -VAR_3;
  VAR_29 += VAR_20->vnet_hdr_sz;
 }

 if ((VAR_20->flags & VAR_15) == 132) {
  VAR_27 = VAR_7;
  if (FUNC_14(VAR_26 < VAR_4 ||
        (VAR_28.hdr_len && VAR_28.hdr_len < VAR_4)))
   return -VAR_3;
 }

 VAR_25 = FUNC_13(VAR_20, VAR_27, VAR_26, VAR_28.hdr_len, VAR_23);
 if (FUNC_0(VAR_25)) {
  if (FUNC_1(VAR_25) != -VAR_1)
   VAR_20->dev->stats.rx_dropped++;
  return FUNC_1(VAR_25);
 }

 if (FUNC_9(VAR_25, 0, VAR_21, VAR_29, VAR_26)) {
  VAR_20->dev->stats.rx_dropped++;
  FUNC_5(VAR_25);
  return -VAR_2;
 }

 if (VAR_28.flags & VAR_17) {
  if (!FUNC_10(VAR_25, VAR_28.csum_start,
       VAR_28.csum_offset)) {
   VAR_20->dev->stats.rx_frame_errors++;
   FUNC_5(VAR_25);
   return -VAR_3;
  }
 } else if (VAR_20->flags & VAR_13)
  VAR_25->ip_summed = VAR_0;

 switch (VAR_20->flags & VAR_15) {
 case 131:
  if (VAR_20->flags & VAR_14) {
   switch (VAR_25->data[0] & 0xf0) {
   case 0x40:
    VAR_24.proto = FUNC_4(VAR_5);
    break;
   case 0x60:
    VAR_24.proto = FUNC_4(VAR_6);
    break;
   default:
    VAR_20->dev->stats.rx_dropped++;
    FUNC_5(VAR_25);
    return -VAR_3;
   }
  }

  FUNC_11(VAR_25);
  VAR_25->protocol = VAR_24.proto;
  VAR_25->dev = VAR_20->dev;
  break;
 case 132:
  VAR_25->protocol = FUNC_3(VAR_25, VAR_20->dev);
  break;
 };

 if (VAR_28.gso_type != VAR_19) {
  FUNC_8("GSO!\n");
  switch (VAR_28.gso_type & ~VAR_18) {
  case 130:
   FUNC_12(VAR_25)->gso_type = VAR_9;
   break;
  case 129:
   FUNC_12(VAR_25)->gso_type = VAR_10;
   break;
  case 128:
   FUNC_12(VAR_25)->gso_type = VAR_12;
   break;
  default:
   VAR_20->dev->stats.rx_frame_errors++;
   FUNC_5(VAR_25);
   return -VAR_3;
  }

  if (VAR_28.gso_type & VAR_18)
   FUNC_12(VAR_25)->gso_type |= VAR_11;

  FUNC_12(VAR_25)->gso_size = VAR_28.gso_size;
  if (FUNC_12(VAR_25)->gso_size == 0) {
   VAR_20->dev->stats.rx_frame_errors++;
   FUNC_5(VAR_25);
   return -VAR_3;
  }


  FUNC_12(VAR_25)->gso_type |= VAR_8;
  FUNC_12(VAR_25)->gso_segs = 0;
 }

 FUNC_7(VAR_25);

 VAR_20->dev->stats.rx_packets++;
 VAR_20->dev->stats.rx_bytes += VAR_26;

 return VAR_22;
}
