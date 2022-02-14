
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {struct socket* sock; } ;
struct iscsi_session {int lock; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; struct iscsi_session* session; } ;


 int FUNC_0 (struct iscsi_sw_tcp_conn*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct iscsi_conn *VAR_0)
{
 struct iscsi_session *VAR_1 = VAR_0->session;
 struct iscsi_tcp_conn *VAR_2 = VAR_0->dd_data;
 struct iscsi_sw_tcp_conn *VAR_3 = VAR_2->dd_data;
 struct socket *VAR_4 = VAR_3->sock;

 if (!VAR_4)
  return;

 FUNC_1(VAR_4->sk);
 FUNC_0(VAR_3);
 FUNC_2(VAR_4->sk);

 FUNC_4(&VAR_1->lock);
 VAR_3->sock = ((void*)0);
 FUNC_5(&VAR_1->lock);
 FUNC_3(VAR_4);
}
