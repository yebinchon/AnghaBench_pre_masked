
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct prism2_frag_entry {unsigned int seq; unsigned int last_frag; struct sk_buff* skb; int dst_addr; int src_addr; int first_frag_time; } ;
struct ieee80211_hdr {int addr1; int addr2; int seq_ctrl; } ;
struct TYPE_6__ {size_t frag_next_idx; struct prism2_frag_entry* frag_cache; TYPE_1__* dev; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_5__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 struct prism2_frag_entry* FUNC_4 (TYPE_2__*,unsigned int,unsigned int,int ,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(local_info_t *VAR_5, struct ieee80211_hdr *VAR_6)
{
 struct sk_buff *VAR_7 = ((void*)0);
 u16 VAR_8;
 unsigned int VAR_9, VAR_10;
 struct prism2_frag_entry *VAR_11;

 VAR_8 = FUNC_2(VAR_6->seq_ctrl);
 VAR_9 = VAR_8 & VAR_1;
 VAR_10 = (VAR_8 & VAR_2) >> 4;

 if (VAR_9 == 0) {

  VAR_7 = FUNC_0(VAR_5->dev->mtu +
        sizeof(struct ieee80211_hdr) +
        8 +
        2 +
        8 + VAR_0 );
  if (VAR_7 == ((void*)0))
   return ((void*)0);

  VAR_11 = &VAR_5->frag_cache[VAR_5->frag_next_idx];
  VAR_5->frag_next_idx++;
  if (VAR_5->frag_next_idx >= VAR_3)
   VAR_5->frag_next_idx = 0;

  if (VAR_11->skb != ((void*)0))
   FUNC_1(VAR_11->skb);

  VAR_11->first_frag_time = VAR_4;
  VAR_11->seq = VAR_10;
  VAR_11->last_frag = VAR_9;
  VAR_11->skb = VAR_7;
  FUNC_3(VAR_11->src_addr, VAR_6->addr2, VAR_0);
  FUNC_3(VAR_11->dst_addr, VAR_6->addr1, VAR_0);
 } else {


  VAR_11 = FUNC_4(VAR_5, VAR_10, VAR_9, VAR_6->addr2,
            VAR_6->addr1);
  if (VAR_11 != ((void*)0)) {
   VAR_11->last_frag = VAR_9;
   VAR_7 = VAR_11->skb;
  }
 }

 return VAR_7;
}
