
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skb_shared_info {int nr_frags; TYPE_1__* frags; } ;
struct pkt_gl {int nfrags; TYPE_2__* frags; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int page; scalar_t__ size; scalar_t__ page_offset; } ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ page_offset; int page; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct skb_shared_info *VAR_0,
         const struct pkt_gl *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;


 VAR_0->frags[0].page = VAR_1->frags[0].page;
 VAR_0->frags[0].page_offset = VAR_1->frags[0].page_offset + VAR_2;
 VAR_0->frags[0].size = VAR_1->frags[0].size - VAR_2;
 VAR_0->nr_frags = VAR_1->nfrags;
 VAR_3 = VAR_1->nfrags - 1;
 if (VAR_3)
  FUNC_1(&VAR_0->frags[1], &VAR_1->frags[1], VAR_3 * sizeof(skb_frag_t));


 FUNC_0(VAR_1->frags[VAR_3].page);
}
