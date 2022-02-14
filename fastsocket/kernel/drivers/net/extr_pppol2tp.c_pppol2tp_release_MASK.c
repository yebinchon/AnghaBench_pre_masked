
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_write_queue; int sk_receive_queue; int sk_state; } ;
struct sk_buff {int dummy; } ;
struct pppol2tp_session {int reorder_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*) ;
 struct pppol2tp_session* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_3)
{
 struct sock *VAR_4 = VAR_3->sk;
 struct pppol2tp_session *VAR_5;
 int VAR_6;

 if (!VAR_4)
  return 0;

 VAR_6 = -VAR_0;
 FUNC_1(VAR_4);
 if (FUNC_7(VAR_4, VAR_2) != 0)
  goto error;

 FUNC_3(VAR_4);


 VAR_4->sk_state = VAR_1;
 FUNC_8(VAR_4);
 VAR_3->sk = ((void*)0);

 VAR_5 = FUNC_2(VAR_4);


 FUNC_6(&VAR_4->sk_receive_queue);
 FUNC_6(&VAR_4->sk_write_queue);
 if (VAR_5 != ((void*)0)) {
  struct sk_buff *VAR_7;
  while ((VAR_7 = FUNC_5(&VAR_5->reorder_q))) {
   FUNC_0(VAR_7);
   FUNC_9(VAR_4);
  }
  FUNC_9(VAR_4);
 }

 FUNC_4(VAR_4);





 FUNC_9(VAR_4);

 return 0;

error:
 FUNC_4(VAR_4);
 return VAR_6;
}
