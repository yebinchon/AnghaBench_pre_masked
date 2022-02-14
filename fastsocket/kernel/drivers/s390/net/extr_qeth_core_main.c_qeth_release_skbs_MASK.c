
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; int users; scalar_t__ sk; } ;
struct qeth_qdio_out_buffer {int skb_list; int state; } ;
struct iucv_sock {int (* sk_txnotify ) (struct sk_buff*,int ) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,long) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*) ;
 struct iucv_sock* FUNC_6 (scalar_t__) ;
 struct sk_buff* FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_9(struct qeth_qdio_out_buffer *VAR_5)
{
 struct sk_buff *VAR_6;
 struct iucv_sock *VAR_7;
 int VAR_8 = 0;

 if (FUNC_4(&VAR_5->state) == VAR_2)
  VAR_8 = 1;


 FUNC_0(FUNC_4(&VAR_5->state) == VAR_1);

 VAR_6 = FUNC_7(&VAR_5->skb_list);
 while (VAR_6) {
  FUNC_1(VAR_3, 5, "skbr");
  FUNC_2(VAR_3, 5, "%lx", (long) VAR_6);
  if (VAR_8 && VAR_6->protocol == VAR_0) {
   if (VAR_6->sk) {
    VAR_7 = FUNC_6(VAR_6->sk);
    VAR_7->sk_txnotify(VAR_6, VAR_4);
   }
  }
  FUNC_3(&VAR_6->users);
  FUNC_5(VAR_6);
  VAR_6 = FUNC_7(&VAR_5->skb_list);
 }
}
