
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int truesize; int len; int data_len; } ;
struct page {int dummy; } ;
struct TYPE_4__ {unsigned int page_offset; scalar_t__ size; struct page* page; } ;
typedef TYPE_1__ skb_frag_t ;
struct TYPE_6__ {int nr_frags; TYPE_1__* frags; } ;
struct TYPE_5__ {int shared_frag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1, struct page *VAR_2,
    unsigned int VAR_3, unsigned int *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1)->nr_frags;
 skb_frag_t *VAR_6;

 VAR_6 = &FUNC_1(VAR_1)->frags[VAR_5];
 VAR_6->size = FUNC_0((unsigned)VAR_0 - VAR_3, *VAR_4);
 VAR_6->page_offset = VAR_3;
 VAR_6->page = VAR_2;

 VAR_1->data_len += VAR_6->size;
 VAR_1->len += VAR_6->size;
 VAR_1->truesize += VAR_0;
 FUNC_1(VAR_1)->nr_frags++;
 FUNC_2(VAR_1)->shared_frag = 1;
 *VAR_4 -= VAR_6->size;
}
