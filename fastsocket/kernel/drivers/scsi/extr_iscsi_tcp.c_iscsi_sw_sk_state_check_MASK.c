
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_rmem_alloc; struct iscsi_conn* sk_user_data; } ;
struct iscsi_conn {TYPE_1__* session; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iscsi_conn*,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iscsi_conn*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct sock *VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_5->sk_user_data;

 if ((VAR_5->sk_state == VAR_4 || VAR_5->sk_state == VAR_3) &&
     (VAR_6->session->state != VAR_2) &&
     !FUNC_1(&VAR_5->sk_rmem_alloc)) {
  FUNC_0(VAR_6, "TCP_CLOSE|TCP_CLOSE_WAIT\n");
  FUNC_2(VAR_6, VAR_1);
  return -VAR_0;
 }
 return 0;
}
