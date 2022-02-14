
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_2__* sk; TYPE_1__* ops; int type; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct connection {int nodeid; int sock_mutex; int rwork; int flags; void* rx_action; struct socket* sock; struct connection* othercon; int swork; } ;
typedef int peeraddr ;
struct TYPE_6__ {int ss_family; } ;
struct TYPE_5__ {struct connection* sk_user_data; } ;
struct TYPE_4__ {int (* accept ) (struct socket*,struct socket*,int ) ;scalar_t__ (* getname ) (struct socket*,struct sockaddr*,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct socket*,struct connection*) ;
 scalar_t__ FUNC_2 (struct sockaddr_storage*,int*) ;
 int VAR_10 ;
 TYPE_3__** VAR_11 ;
 struct connection* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct sockaddr_storage*,int ,int*) ;
 int FUNC_6 (struct sockaddr_storage*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 struct connection* FUNC_10 (int,int ) ;
 int FUNC_11 (char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int ,int *) ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ,int ,struct socket**) ;
 int FUNC_15 (struct socket*) ;
 int FUNC_16 (struct socket*,struct socket*,int ) ;
 scalar_t__ FUNC_17 (struct socket*,struct sockaddr*,int*,int) ;
 int FUNC_18 (int ,int *) ;

__attribute__((used)) static int FUNC_19(struct connection *VAR_16)
{
 int VAR_17;
 struct sockaddr_storage VAR_18;
 struct socket *VAR_19;
 int VAR_20;
 int VAR_21;
 struct connection *VAR_22;
 struct connection *VAR_23;

 FUNC_6(&VAR_18, 0, sizeof(VAR_18));
 VAR_17 = FUNC_14(VAR_11[0]->ss_family, VAR_9,
      VAR_7, &VAR_19);
 if (VAR_17 < 0)
  return -VAR_4;

 FUNC_8(&VAR_16->sock_mutex, 0);

 VAR_17 = -VAR_5;
 if (VAR_16->sock == ((void*)0))
  goto accept_err;

 VAR_19->type = VAR_16->sock->type;
 VAR_19->ops = VAR_16->sock->ops;

 VAR_17 = VAR_16->sock->ops->accept(VAR_16->sock, VAR_19, VAR_8);
 if (VAR_17 < 0)
  goto accept_err;


 FUNC_6(&VAR_18, 0, sizeof(VAR_18));
 if (VAR_19->ops->getname(VAR_19, (struct sockaddr *)&VAR_18,
      &VAR_20, 2)) {
  VAR_17 = -VAR_3;
  goto accept_err;
 }


 FUNC_5(&VAR_18, 0, &VAR_20);
 if (FUNC_2(&VAR_18, &VAR_21)) {
  FUNC_4("connect from non cluster node");
  FUNC_15(VAR_19);
  FUNC_9(&VAR_16->sock_mutex);
  return -1;
 }

 FUNC_4("got connection from %d", VAR_21);






 VAR_22 = FUNC_10(VAR_21, VAR_6);
 if (!VAR_22) {
  VAR_17 = -VAR_4;
  goto accept_err;
 }
 FUNC_8(&VAR_22->sock_mutex, 1);
 if (VAR_22->sock) {
  struct connection *VAR_24 = VAR_22->othercon;

  if (!VAR_24) {
   VAR_24 = FUNC_3(VAR_10, VAR_6);
   if (!VAR_24) {
    FUNC_4("failed to allocate incoming socket");
    FUNC_9(&VAR_22->sock_mutex);
    VAR_17 = -VAR_4;
    goto accept_err;
   }
   VAR_24->nodeid = VAR_21;
   VAR_24->rx_action = VAR_14;
   FUNC_7(&VAR_24->sock_mutex);
   FUNC_0(&VAR_24->swork, VAR_13);
   FUNC_0(&VAR_24->rwork, VAR_12);
   FUNC_13(VAR_0, &VAR_24->flags);
  }
  if (!VAR_24->sock) {
   VAR_22->othercon = VAR_24;
   VAR_24->sock = VAR_19;
   VAR_19->sk->sk_user_data = VAR_24;
   FUNC_1(VAR_19, VAR_24);
   VAR_23 = VAR_24;
  }
  else {
   FUNC_11("Extra connection from node %d attempted\n", VAR_21);
   VAR_17 = -VAR_2;
   FUNC_9(&VAR_22->sock_mutex);
   goto accept_err;
  }
 }
 else {
  VAR_19->sk->sk_user_data = VAR_22;
  VAR_22->rx_action = VAR_14;
  FUNC_1(VAR_19, VAR_22);
  VAR_23 = VAR_22;
 }

 FUNC_9(&VAR_22->sock_mutex);






 if (!FUNC_18(VAR_1, &VAR_23->flags))
  FUNC_12(VAR_15, &VAR_23->rwork);
 FUNC_9(&VAR_16->sock_mutex);

 return 0;

accept_err:
 FUNC_9(&VAR_16->sock_mutex);
 FUNC_15(VAR_19);

 if (VAR_17 != -VAR_2)
  FUNC_4("error accepting connection from node: %d", VAR_17);
 return VAR_17;
}
