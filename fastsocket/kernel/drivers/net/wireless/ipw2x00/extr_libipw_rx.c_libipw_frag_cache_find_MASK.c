
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct libipw_frag_entry {unsigned int seq; int last_frag; int dst_addr; int src_addr; int * skb; scalar_t__ first_frag_time; } ;
struct libipw_device {struct libipw_frag_entry* frag_cache; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static struct libipw_frag_entry *FUNC_4(struct
             libipw_device
             *VAR_3,
             unsigned int VAR_4,
             unsigned int VAR_5,
             u8 * VAR_6,
             u8 * VAR_7)
{
 struct libipw_frag_entry *VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_8 = &VAR_3->frag_cache[VAR_9];
  if (VAR_8->skb != ((void*)0) &&
      FUNC_3(VAR_2, VAR_8->first_frag_time + 2 * VAR_0)) {
   FUNC_0("expiring fragment cache entry "
          "seq=%u last_frag=%u\n",
          VAR_8->seq, VAR_8->last_frag);
   FUNC_1(VAR_8->skb);
   VAR_8->skb = ((void*)0);
  }

  if (VAR_8->skb != ((void*)0) && VAR_8->seq == VAR_4 &&
      (VAR_8->last_frag + 1 == VAR_5 || VAR_5 == -1) &&
      FUNC_2(VAR_8->src_addr, VAR_6) &&
      FUNC_2(VAR_8->dst_addr, VAR_7))
   return VAR_8;
 }

 return ((void*)0);
}
