
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct socket {TYPE_1__* ops; struct sock* sk; } ;
struct sock {int sk_reuse; int sk_sndtimeo; int sk_allocation; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {struct socket* sock; int sendpage; } ;
struct iscsi_session {int lock; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct TYPE_2__ {int sendpage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int) ;
 int FUNC_1 (int ,struct iscsi_conn*,char*,int) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_tcp_conn*) ;
 struct socket* FUNC_4 (int,int*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct iscsi_cls_session *VAR_4,
         struct iscsi_cls_conn *VAR_5, uint64_t VAR_6,
         int VAR_7)
{
 struct iscsi_session *VAR_8 = VAR_4->dd_data;
 struct iscsi_conn *VAR_9 = VAR_5->dd_data;
 struct iscsi_tcp_conn *VAR_10 = VAR_9->dd_data;
 struct iscsi_sw_tcp_conn *VAR_11 = VAR_10->dd_data;
 struct sock *VAR_12;
 struct socket *VAR_13;
 int VAR_14;


 VAR_13 = FUNC_4((int)VAR_6, &VAR_14);
 if (!VAR_13) {
  FUNC_1(VAR_3, VAR_9,
      "sockfd_lookup failed %d\n", VAR_14);
  return -VAR_0;
 }

 VAR_14 = FUNC_0(VAR_4, VAR_5, VAR_7);
 if (VAR_14)
  goto free_socket;

 FUNC_6(&VAR_8->lock);

 VAR_11->sock = VAR_13;
 FUNC_7(&VAR_8->lock);


 VAR_12 = VAR_13->sk;
 VAR_12->sk_reuse = 1;
 VAR_12->sk_sndtimeo = 15 * VAR_2;
 VAR_12->sk_allocation = VAR_1;

 FUNC_2(VAR_9);
 VAR_11->sendpage = VAR_11->sock->ops->sendpage;



 FUNC_3(VAR_10);
 return 0;

free_socket:
 FUNC_5(VAR_13);
 return VAR_14;
}
