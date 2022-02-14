
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; scalar_t__ sk; } ;
struct qeth_qdio_out_q {int dummy; } ;
struct qeth_qdio_out_buffer {int skb_list; } ;
struct iucv_sock {int (* sk_txnotify ) (struct sk_buff*,int) ;} ;
typedef enum iucv_tx_notify { ____Placeholder_iucv_tx_notify } iucv_tx_notify ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,char*,long) ;
 int VAR_1 ;
 struct iucv_sock* FUNC_1 (scalar_t__) ;
 struct sk_buff* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct qeth_qdio_out_q *VAR_2,
  struct qeth_qdio_out_buffer *VAR_3,
  enum iucv_tx_notify VAR_4)
{
 struct sk_buff *VAR_5;

 if (FUNC_3(&VAR_3->skb_list))
  goto out;
 VAR_5 = FUNC_2(&VAR_3->skb_list);
 while (VAR_5) {
  FUNC_0(VAR_1, 5, "skbn%d", VAR_4);
  FUNC_0(VAR_1, 5, "%lx", (long) VAR_5);
  if (VAR_5->protocol == VAR_0) {
   if (VAR_5->sk) {
    struct iucv_sock *VAR_6 = FUNC_1(VAR_5->sk);
    VAR_6->sk_txnotify(VAR_5, VAR_4);
   }
  }
  if (FUNC_4(&VAR_3->skb_list, VAR_5))
   VAR_5 = ((void*)0);
else
   VAR_5 = FUNC_5(&VAR_3->skb_list, VAR_5);
 }
out:
 return;
}
