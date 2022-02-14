
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned int tail; unsigned int len; unsigned int data_len; int truesize; } ;
struct ipoib_dev_priv {int max_ib_mtu; } ;
struct TYPE_3__ {unsigned int size; } ;
typedef TYPE_1__ skb_frag_t ;
struct TYPE_4__ {TYPE_1__* frags; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct ipoib_dev_priv *VAR_2,
       struct sk_buff *VAR_3,
       unsigned int VAR_4)
{
 if (FUNC_0(VAR_2->max_ib_mtu)) {
  skb_frag_t *VAR_5 = &FUNC_2(VAR_3)->frags[0];
  unsigned int VAR_6;




  VAR_3->tail += VAR_0;
  VAR_3->len += VAR_4;

  VAR_6 = VAR_4 - VAR_0;

  VAR_5->size = VAR_6;
  VAR_3->data_len += VAR_6;
  VAR_3->truesize += VAR_1;
 } else
  FUNC_1(VAR_3, VAR_4);

}
