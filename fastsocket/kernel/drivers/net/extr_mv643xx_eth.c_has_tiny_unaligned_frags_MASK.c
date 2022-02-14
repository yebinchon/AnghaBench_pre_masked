
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int size; int page_offset; } ;
typedef TYPE_1__ skb_frag_t ;
struct TYPE_4__ {int nr_frags; TYPE_1__* frags; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct sk_buff *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0)->nr_frags; VAR_1++) {
  skb_frag_t *VAR_2 = &FUNC_0(VAR_0)->frags[VAR_1];
  if (VAR_2->size <= 8 && VAR_2->page_offset & 7)
   return 1;
 }

 return 0;
}
