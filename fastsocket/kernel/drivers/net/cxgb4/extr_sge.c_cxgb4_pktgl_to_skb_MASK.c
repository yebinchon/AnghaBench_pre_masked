
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; unsigned int data_len; int truesize; } ;
struct pkt_gl {unsigned int tot_len; int va; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (int ,struct pkt_gl const*,unsigned int) ;
 struct sk_buff* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct sk_buff*,int ,unsigned int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

struct sk_buff *FUNC_6(const struct pkt_gl *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 struct sk_buff *VAR_4;






 if (VAR_1->tot_len <= VAR_0) {
  VAR_4 = FUNC_2(VAR_1->tot_len);
  if (FUNC_5(!VAR_4))
   goto out;
  FUNC_0(VAR_4, VAR_1->tot_len);
  FUNC_3(VAR_4, VAR_1->va, VAR_1->tot_len);
 } else {
  VAR_4 = FUNC_2(VAR_2);
  if (FUNC_5(!VAR_4))
   goto out;
  FUNC_0(VAR_4, VAR_3);
  FUNC_3(VAR_4, VAR_1->va, VAR_3);

  FUNC_1(FUNC_4(VAR_4), VAR_1, VAR_3);
  VAR_4->len = VAR_1->tot_len;
  VAR_4->data_len = VAR_4->len - VAR_3;
  VAR_4->truesize += VAR_4->data_len;
 }
out: return VAR_4;
}
