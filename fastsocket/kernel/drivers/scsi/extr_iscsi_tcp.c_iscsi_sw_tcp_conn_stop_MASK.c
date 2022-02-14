
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {struct socket* sock; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct TYPE_2__ {scalar_t__ sk_sleep; int sk_err; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cls_conn*,int) ;
 int FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct iscsi_cls_conn *VAR_1, int VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_1->dd_data;
 struct iscsi_tcp_conn *VAR_4 = VAR_3->dd_data;
 struct iscsi_sw_tcp_conn *VAR_5 = VAR_4->dd_data;
 struct socket *VAR_6 = VAR_5->sock;


 if (!VAR_6)
  return;

 if (VAR_6->sk->sk_sleep) {
  VAR_6->sk->sk_err = VAR_0;
  FUNC_3(VAR_6->sk->sk_sleep);
 }


 FUNC_1(VAR_3);


 FUNC_2(VAR_3);

 FUNC_0(VAR_1, VAR_2);
}
