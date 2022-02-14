
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_net_hdr {int flags; int csum_offset; scalar_t__ csum_start; int gso_type; int gso_size; int hdr_len; } ;
struct skb_shared_info {int gso_type; int gso_size; } ;
struct sk_buff {scalar_t__ ip_summed; int csum_offset; scalar_t__ csum_start; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_1 (struct virtio_net_hdr*,int ,int) ;
 int FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*) ;
 scalar_t__ FUNC_4 (struct sk_buff const*) ;
 struct skb_shared_info* FUNC_5 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_6(const struct sk_buff *VAR_13,
       struct virtio_net_hdr *VAR_14)
{
 FUNC_1(VAR_14, 0, sizeof(*VAR_14));

 if (FUNC_4(VAR_13)) {
  struct skb_shared_info *VAR_15 = FUNC_5(VAR_13);


  VAR_14->hdr_len = FUNC_2(VAR_13);
  VAR_14->gso_size = VAR_15->gso_size;
  if (VAR_15->gso_type & VAR_2)
   VAR_14->gso_type = VAR_10;
  else if (VAR_15->gso_type & VAR_3)
   VAR_14->gso_type = VAR_11;
  else if (VAR_15->gso_type & VAR_5)
   VAR_14->gso_type = VAR_12;
  else
   FUNC_0();
  if (VAR_15->gso_type & VAR_4)
   VAR_14->gso_type |= VAR_8;
 } else
  VAR_14->gso_type = VAR_9;

 if (VAR_13->ip_summed == VAR_0) {
  VAR_14->flags = VAR_7;
  VAR_14->csum_start = VAR_13->csum_start -
     FUNC_3(VAR_13);
  VAR_14->csum_offset = VAR_13->csum_offset;
 } else if (VAR_13->ip_summed == VAR_1) {
  VAR_14->flags = VAR_6;
 }

 return 0;
}
