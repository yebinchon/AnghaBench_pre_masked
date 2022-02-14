
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct skb_frag_struct {int size; int page_offset; } ;
struct sk_buff {int len; int data_len; int truesize; int tail; } ;
struct TYPE_2__ {struct skb_frag_struct* frags; int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct skb_frag_struct*,struct skb_frag_struct*,int) ;
 int FUNC_1 (struct sk_buff*,int *,int) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_4(struct sk_buff *VAR_1, u8 * VAR_2,
        struct skb_frag_struct *VAR_3, int VAR_4, int VAR_5)
{
 struct skb_frag_struct *VAR_6;

 VAR_1->len = VAR_1->data_len = VAR_4;
 VAR_1->truesize = VAR_4 + sizeof(struct sk_buff);


 VAR_6 = FUNC_3(VAR_1)->frags;
 while (VAR_4 > 0) {
  FUNC_0(VAR_6, VAR_3, sizeof(*VAR_6));
  VAR_4 -= VAR_3->size;
  VAR_6++;
  VAR_3++;
  FUNC_3(VAR_1)->nr_frags++;
 }





 FUNC_1(VAR_1, VAR_2, VAR_5);
 FUNC_3(VAR_1)->frags[0].page_offset += VAR_5;
 FUNC_3(VAR_1)->frags[0].size -= VAR_5;
 VAR_1->data_len -= VAR_5;
 VAR_1->tail += VAR_5;
 FUNC_2(VAR_1, VAR_0);
}
