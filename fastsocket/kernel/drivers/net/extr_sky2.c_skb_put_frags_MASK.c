
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned int tail; unsigned int len; unsigned int data_len; unsigned int truesize; } ;
struct TYPE_3__ {unsigned int size; int page; } ;
typedef TYPE_1__ skb_frag_t ;
struct TYPE_4__ {int nr_frags; TYPE_1__* frags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6;


 VAR_6 = FUNC_1(VAR_3, VAR_2);
 VAR_1->tail += VAR_6;
 VAR_1->len += VAR_6;
 VAR_3 -= VAR_6;

 VAR_5 = FUNC_2(VAR_1)->nr_frags;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  skb_frag_t *VAR_7 = &FUNC_2(VAR_1)->frags[VAR_4];

  if (VAR_3 == 0) {

   FUNC_0(VAR_7->page);
   --FUNC_2(VAR_1)->nr_frags;
  } else {
   VAR_6 = FUNC_1(VAR_3, (unsigned) VAR_0);

   VAR_7->size = VAR_6;
   VAR_1->data_len += VAR_6;
   VAR_1->truesize += VAR_6;
   VAR_1->len += VAR_6;
   VAR_3 -= VAR_6;
  }
 }
}
