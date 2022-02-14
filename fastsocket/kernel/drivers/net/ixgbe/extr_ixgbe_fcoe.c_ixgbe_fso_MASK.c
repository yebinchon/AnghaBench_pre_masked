
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; scalar_t__ mac_len; } ;
struct ixgbe_tx_buffer {int bytecount; int tx_flags; int gso_segs; struct sk_buff* skb; } ;
struct ixgbe_ring {int dev; } ;
struct fcoe_hdr {int fcoe_sof; } ;
struct fcoe_crc_eof {int dummy; } ;
struct fc_frame_header {int* fh_f_ctl; } ;
struct TYPE_2__ {scalar_t__ gso_type; int gso_size; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;




 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct ixgbe_ring*,int,int,int ,int) ;
 int FUNC_4 (struct sk_buff*,int,int*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;

int FUNC_12(struct ixgbe_ring *VAR_18,
       struct ixgbe_tx_buffer *VAR_19,
       u8 *VAR_20)
{
 struct sk_buff *VAR_21 = VAR_19->skb;
 struct fc_frame_header *VAR_22;
 u32 VAR_23;
 u32 VAR_24 = 0;
 u32 VAR_25;
 u8 VAR_26, VAR_27;

 if (FUNC_5(VAR_21) && (FUNC_9(VAR_21)->gso_type != VAR_17)) {
  FUNC_1(VAR_18->dev, "Wrong gso type %d:expecting SKB_GSO_FCOE\n",
   FUNC_9(VAR_21)->gso_type);
  return -VAR_0;
 }


 FUNC_7(VAR_21, VAR_21->mac_len);
 FUNC_8(VAR_21, VAR_21->mac_len +
     sizeof(struct fcoe_hdr));


 VAR_26 = ((struct fcoe_hdr *)FUNC_6(VAR_21))->fcoe_sof;
 switch (VAR_26) {
 case 131:
  VAR_24 = VAR_7;
  break;
 case 130:
  VAR_24 = VAR_9 |
          VAR_7;
  break;
 case 129:
  break;
 case 128:
  VAR_24 = VAR_9;
  break;
 default:
  FUNC_2(VAR_18->dev, "unknown sof = 0x%x\n", VAR_26);
  return -VAR_0;
 }


 FUNC_4(VAR_21, VAR_21->len - 4, &VAR_27, 1);

 switch (VAR_27) {
 case 134:
  VAR_24 |= VAR_3;
  break;
 case 132:

  if (FUNC_5(VAR_21))
   VAR_24 |= VAR_3 |
     VAR_6;
  else
   VAR_24 |= VAR_5;
  break;
 case 133:
  VAR_24 |= VAR_4;
  break;
 case 135:
  VAR_24 |= VAR_2;
  break;
 default:
  FUNC_2(VAR_18->dev, "unknown eof = 0x%x\n", VAR_27);
  return -VAR_0;
 }


 VAR_22 = (struct fc_frame_header *)FUNC_10(VAR_21);
 if (VAR_22->fh_f_ctl[2] & VAR_1)
  VAR_24 |= VAR_8;


 *VAR_20 = sizeof(struct fcoe_crc_eof);


 if (FUNC_5(VAR_21)) {
  *VAR_20 += FUNC_11(VAR_21) +
       sizeof(struct fc_frame_header);

  VAR_19->gso_segs = FUNC_0(VAR_21->len - *VAR_20,
            FUNC_9(VAR_21)->gso_size);
  VAR_19->bytecount += (VAR_19->gso_segs - 1) * *VAR_20;
  VAR_19->tx_flags |= VAR_15;
 }


 VAR_19->tx_flags |= VAR_14 | VAR_13;


 VAR_25 = FUNC_9(VAR_21)->gso_size << VAR_11;


 VAR_23 = FUNC_11(VAR_21) +
     sizeof(struct fc_frame_header);
 VAR_23 |= (FUNC_11(VAR_21) - 4)
      << VAR_10;
 VAR_23 |= VAR_19->tx_flags & VAR_16;


 FUNC_3(VAR_18, VAR_23, VAR_24,
     VAR_12, VAR_25);

 return 0;
}
