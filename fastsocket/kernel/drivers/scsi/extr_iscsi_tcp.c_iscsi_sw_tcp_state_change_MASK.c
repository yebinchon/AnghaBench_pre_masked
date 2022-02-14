
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; struct iscsi_conn* sk_user_data; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {void (* old_state_change ) (struct sock*) ;} ;
struct iscsi_session {int dummy; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; struct iscsi_session* session; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct iscsi_tcp_conn *VAR_1;
 struct iscsi_sw_tcp_conn *VAR_2;
 struct iscsi_conn *VAR_3;
 struct iscsi_session *VAR_4;
 void (*VAR_5)(struct sock *);

 FUNC_1(&VAR_0->sk_callback_lock);
 VAR_3 = VAR_0->sk_user_data;
 if (!VAR_3) {
  FUNC_2(&VAR_0->sk_callback_lock);
  return;
 }
 VAR_4 = VAR_3->session;

 FUNC_0(VAR_0);

 VAR_1 = VAR_3->dd_data;
 VAR_2 = VAR_1->dd_data;
 VAR_5 = VAR_2->old_state_change;

 FUNC_2(&VAR_0->sk_callback_lock);

 VAR_5(VAR_0);
}
