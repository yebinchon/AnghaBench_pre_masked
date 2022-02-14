
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned int tail; unsigned int len; unsigned int data_len; unsigned int truesize; } ;
struct TYPE_4__ {unsigned int size; } ;
typedef TYPE_1__ skb_frag_t ;
struct TYPE_5__ {int nr_frags; TYPE_1__* frags; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct sk_buff*,int,int ,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned int VAR_7;


 VAR_7 = FUNC_0(VAR_3, VAR_2);
 VAR_1->tail += VAR_7;
 VAR_1->len += VAR_7;
 VAR_3 -= VAR_7;

 VAR_6 = FUNC_3(VAR_1)->nr_frags;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  skb_frag_t *VAR_8 = &FUNC_3(VAR_1)->frags[VAR_5];

  if (VAR_3 == 0) {

   FUNC_1(VAR_4, VAR_5, FUNC_2(VAR_8),
        0, VAR_0);
   --FUNC_3(VAR_1)->nr_frags;
  } else {
   VAR_7 = FUNC_0(VAR_3, (unsigned) VAR_0);

   VAR_8->size = VAR_7;
   VAR_1->data_len += VAR_7;
   VAR_1->truesize += VAR_7;
   VAR_1->len += VAR_7;
   VAR_3 -= VAR_7;
  }
 }
}
