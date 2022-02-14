
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data_len; int len; int truesize; } ;
struct qeth_qdio_buffer {struct sk_buff* rx_skb; } ;
struct qdio_buffer_element {scalar_t__ addr; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (struct sk_buff*,int,struct page*,int,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 struct page* FUNC_6 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_7(struct qeth_qdio_buffer *VAR_3,
  struct qdio_buffer_element *VAR_4,
  struct sk_buff **VAR_5, int VAR_6, int *VAR_7, int VAR_8)
{
 struct page *VAR_9 = FUNC_6(VAR_4->addr);
 if (*VAR_5 == ((void*)0)) {
  if (VAR_3->rx_skb) {

   *VAR_5 = VAR_3->rx_skb;
   VAR_3->rx_skb = ((void*)0);
  } else {
   *VAR_5 = FUNC_0(VAR_2 + VAR_1);
   if (!(*VAR_5))
    return -VAR_0;
  }

  FUNC_5(*VAR_5, VAR_1);
  if (VAR_8 <= VAR_2) {
   FUNC_2(FUNC_4(*VAR_5, VAR_8), VAR_4->addr + VAR_6,
    VAR_8);
  } else {
   FUNC_1(VAR_9);
   FUNC_2(FUNC_4(*VAR_5, VAR_2),
          VAR_4->addr + VAR_6, VAR_2);
   FUNC_3(*VAR_5, *VAR_7, VAR_9,
    VAR_6 + VAR_2,
    VAR_8 - VAR_2);
   (*VAR_5)->data_len += VAR_8 - VAR_2;
   (*VAR_5)->len += VAR_8 - VAR_2;
   (*VAR_5)->truesize += VAR_8 - VAR_2;
   (*VAR_7)++;
  }
 } else {
  FUNC_1(VAR_9);
  FUNC_3(*VAR_5, *VAR_7, VAR_9, VAR_6, VAR_8);
  (*VAR_5)->data_len += VAR_8;
  (*VAR_5)->len += VAR_8;
  (*VAR_5)->truesize += VAR_8;
  (*VAR_7)++;
 }


 return 0;
}
