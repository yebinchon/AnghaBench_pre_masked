
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct libipw_hdr_4addr {int addr1; int addr2; int seq_ctl; } ;
struct libipw_frag_entry {unsigned int seq; unsigned int last_frag; struct sk_buff* skb; int dst_addr; int src_addr; int first_frag_time; } ;
struct libipw_device {size_t frag_next_idx; struct libipw_frag_entry* frag_cache; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 struct libipw_frag_entry* FUNC_5 (struct libipw_device*,unsigned int,unsigned int,int ,int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct libipw_device *VAR_3,
      struct libipw_hdr_4addr *VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 u16 VAR_6;
 unsigned int VAR_7, VAR_8;
 struct libipw_frag_entry *VAR_9;

 VAR_6 = FUNC_4(VAR_4->seq_ctl);
 VAR_7 = FUNC_0(VAR_6);
 VAR_8 = FUNC_1(VAR_6);

 if (VAR_7 == 0) {

  VAR_5 = FUNC_2(VAR_3->dev->mtu +
        sizeof(struct libipw_hdr_4addr) +
        8 +
        2 +
        8 + VAR_0 );
  if (VAR_5 == ((void*)0))
   return ((void*)0);

  VAR_9 = &VAR_3->frag_cache[VAR_3->frag_next_idx];
  VAR_3->frag_next_idx++;
  if (VAR_3->frag_next_idx >= VAR_1)
   VAR_3->frag_next_idx = 0;

  if (VAR_9->skb != ((void*)0))
   FUNC_3(VAR_9->skb);

  VAR_9->first_frag_time = VAR_2;
  VAR_9->seq = VAR_8;
  VAR_9->last_frag = VAR_7;
  VAR_9->skb = VAR_5;
  FUNC_6(VAR_9->src_addr, VAR_4->addr2, VAR_0);
  FUNC_6(VAR_9->dst_addr, VAR_4->addr1, VAR_0);
 } else {


  VAR_9 = FUNC_5(VAR_3, VAR_8, VAR_7, VAR_4->addr2,
        VAR_4->addr1);
  if (VAR_9 != ((void*)0)) {
   VAR_9->last_frag = VAR_7;
   VAR_5 = VAR_9->skb;
  }
 }

 return VAR_5;
}
