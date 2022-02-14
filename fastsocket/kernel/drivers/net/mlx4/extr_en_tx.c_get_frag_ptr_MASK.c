
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_frag_struct {int page_offset; struct page* page; } ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {struct skb_frag_struct* frags; } ;


 void* FUNC_0 (struct page*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void *FUNC_3(struct sk_buff *VAR_0)
{
 struct skb_frag_struct *VAR_1 = &FUNC_1(VAR_0)->frags[0];
 struct page *VAR_2 = VAR_1->page;
 void *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (FUNC_2(!VAR_3))
  return ((void*)0);

 return VAR_3 + VAR_1->page_offset;
}
