
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_frame_desc {int flags; int * iv; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 struct skb_frame_desc* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__,int *,unsigned int const) ;
 int FUNC_2 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int const) ;

void FUNC_4(struct sk_buff *VAR_1, unsigned int VAR_2)
{
 struct skb_frame_desc *VAR_3 = FUNC_0(VAR_1);
 const unsigned int VAR_4 =
     ((!!(VAR_3->iv[0])) * 4) + ((!!(VAR_3->iv[1])) * 4);

 if (!(VAR_3->flags & VAR_0))
  return;

 FUNC_3(VAR_1, VAR_4);


 FUNC_2(VAR_1->data, VAR_1->data + VAR_4, VAR_2);


 FUNC_1(VAR_1->data + VAR_2, VAR_3->iv, VAR_4);


 VAR_3->flags &= ~VAR_0;
}
