
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union e1000_adv_rx_desc {int dummy; } e1000_adv_rx_desc ;
struct skb_frag_struct {unsigned int page_offset; } ;
struct sk_buff {unsigned int data_len; unsigned int tail; int len; } ;
struct igb_ring {int q_vector; } ;
struct TYPE_2__ {struct skb_frag_struct* frags; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (int ,unsigned char*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (union e1000_adv_rx_desc*,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char*,int ) ;
 unsigned char* FUNC_5 (struct skb_frag_struct*) ;
 int FUNC_6 (struct skb_frag_struct*,unsigned int) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct igb_ring *VAR_3,
     union e1000_adv_rx_desc *VAR_4,
     struct sk_buff *VAR_5)
{
 struct skb_frag_struct *VAR_6 = &FUNC_7(VAR_5)->frags[0];
 unsigned char *VAR_7;
 unsigned int VAR_8;





 VAR_7 = FUNC_5(VAR_6);

 if (FUNC_3(VAR_4, VAR_0)) {

  FUNC_2(VAR_3->q_vector, VAR_7, VAR_5);


  FUNC_6(VAR_6, VAR_2);
  VAR_6->page_offset += VAR_2;
  VAR_5->data_len -= VAR_2;
  VAR_5->len -= VAR_2;


  VAR_7 += VAR_2;
 }




 VAR_8 = FUNC_1(VAR_7, VAR_1);


 FUNC_4(VAR_5, VAR_7, FUNC_0(VAR_8, sizeof(long)));


 FUNC_6(VAR_6, VAR_8);
 VAR_6->page_offset += VAR_8;
 VAR_5->data_len -= VAR_8;
 VAR_5->tail += VAR_8;
}
