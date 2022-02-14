
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txentry_desc {scalar_t__ iv_len; scalar_t__ length; scalar_t__ iv_offset; } ;
struct skb_frame_desc {int flags; int iv; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 struct skb_frame_desc* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct sk_buff *VAR_1, struct txentry_desc *VAR_2)
{
 struct skb_frame_desc *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_4(!VAR_2->iv_len))
  return;


 FUNC_1(VAR_3->iv, VAR_1->data + VAR_2->iv_offset, VAR_2->iv_len);


 FUNC_2(VAR_1->data + VAR_2->iv_len, VAR_1->data, VAR_2->iv_offset);


 FUNC_3(VAR_1, VAR_2->iv_len);
 VAR_2->length -= VAR_2->iv_len;


 VAR_3->flags |= VAR_0;
}
