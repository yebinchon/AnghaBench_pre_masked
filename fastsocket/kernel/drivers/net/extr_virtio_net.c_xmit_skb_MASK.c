
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtnet_info {int svq; scalar_t__ mergeable_rx_bufs; TYPE_1__* dev; } ;
struct TYPE_6__ {scalar_t__ num_buffers; scalar_t__ hdr_len; scalar_t__ gso_size; int gso_type; scalar_t__ csum_start; scalar_t__ csum_offset; scalar_t__ flags; } ;
struct skb_vnet_hdr {scalar_t__ num_sg; TYPE_3__ hdr; TYPE_3__ mhdr; } ;
struct sk_buff {scalar_t__ ip_summed; int len; scalar_t__ csum_offset; scalar_t__ csum_start; scalar_t__ data; } ;
struct scatterlist {int dummy; } ;
struct ethhdr {unsigned char* h_dest; } ;
struct TYPE_5__ {int gso_type; scalar_t__ gso_size; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,int ,struct sk_buff*,unsigned char const*) ;
 int FUNC_2 (struct scatterlist*,int) ;
 int FUNC_3 (struct scatterlist*,TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,struct scatterlist*,int ,int ) ;
 struct skb_vnet_hdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ,struct scatterlist*,scalar_t__,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct virtnet_info *VAR_12, struct sk_buff *VAR_13)
{
 struct scatterlist VAR_14[2+VAR_1];
 struct skb_vnet_hdr *VAR_15 = FUNC_9(VAR_13);
 const unsigned char *VAR_16 = ((struct ethhdr *)VAR_13->data)->h_dest;

 FUNC_2(VAR_14, 2+VAR_1);

 FUNC_1("%s: xmit %p %pM\n", VAR_12->dev->name, VAR_13, VAR_16);

 if (VAR_13->ip_summed == VAR_0) {
  VAR_15->hdr.flags = VAR_6;
  VAR_15->hdr.csum_start = VAR_13->csum_start - FUNC_5(VAR_13);
  VAR_15->hdr.csum_offset = VAR_13->csum_offset;
 } else {
  VAR_15->hdr.flags = 0;
  VAR_15->hdr.csum_offset = VAR_15->hdr.csum_start = 0;
 }

 if (FUNC_6(VAR_13)) {
  VAR_15->hdr.hdr_len = FUNC_4(VAR_13);
  VAR_15->hdr.gso_size = FUNC_7(VAR_13)->gso_size;
  if (FUNC_7(VAR_13)->gso_type & VAR_2)
   VAR_15->hdr.gso_type = VAR_9;
  else if (FUNC_7(VAR_13)->gso_type & VAR_3)
   VAR_15->hdr.gso_type = VAR_10;
  else if (FUNC_7(VAR_13)->gso_type & VAR_5)
   VAR_15->hdr.gso_type = VAR_11;
  else
   FUNC_0();
  if (FUNC_7(VAR_13)->gso_type & VAR_4)
   VAR_15->hdr.gso_type |= VAR_7;
 } else {
  VAR_15->hdr.gso_type = VAR_8;
  VAR_15->hdr.gso_size = VAR_15->hdr.hdr_len = 0;
 }

 VAR_15->mhdr.num_buffers = 0;


 if (VAR_12->mergeable_rx_bufs)
  FUNC_3(VAR_14, &VAR_15->mhdr, sizeof VAR_15->mhdr);
 else
  FUNC_3(VAR_14, &VAR_15->hdr, sizeof VAR_15->hdr);

 VAR_15->num_sg = FUNC_8(VAR_13, VAR_14+1, 0, VAR_13->len) + 1;
 return FUNC_10(VAR_12->svq, VAR_14, VAR_15->num_sg, 0, VAR_13);
}
