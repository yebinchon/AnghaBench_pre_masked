
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct TYPE_5__ {int sin_addr; int sin_port; int sin_family; } ;
struct TYPE_6__ {TYPE_2__ sin; } ;
struct sockaddr_rxrpc {int transport_len; TYPE_3__ transport; int transport_type; int srx_service; int srx_family; } ;
struct sockaddr {int dummy; } ;
typedef int srx ;
struct TYPE_4__ {int sk_allocation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct socket* VAR_11 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct socket*,struct sockaddr*,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (struct socket*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ,struct socket**) ;
 int FUNC_10 (struct socket*) ;

int FUNC_11(void)
{
 struct sockaddr_rxrpc VAR_12;
 struct socket *VAR_13;
 int VAR_14;

 FUNC_0("");

 FUNC_8(&VAR_9);

 VAR_8 = FUNC_2("kafsd");
 if (!VAR_8) {
  FUNC_1(" = -ENOMEM [wq]");
  return -VAR_4;
 }

 VAR_14 = FUNC_9(VAR_2, VAR_7, VAR_6, &VAR_13);
 if (VAR_14 < 0) {
  FUNC_3(VAR_8);
  FUNC_1(" = %d [socket]", VAR_14);
  return VAR_14;
 }

 VAR_13->sk->sk_allocation = VAR_5;


 VAR_12.srx_family = VAR_2;
 VAR_12.srx_service = VAR_3;
 VAR_12.transport_type = VAR_7;
 VAR_12.transport_len = sizeof(VAR_12.transport.sin);
 VAR_12.transport.sin.sin_family = VAR_1;
 VAR_12.transport.sin.sin_port = FUNC_4(VAR_0);
 FUNC_6(&VAR_12.transport.sin.sin_addr, 0,
        sizeof(VAR_12.transport.sin.sin_addr));

 VAR_14 = FUNC_5(VAR_13, (struct sockaddr *) &VAR_12, sizeof(VAR_12));
 if (VAR_14 < 0) {
  FUNC_10(VAR_13);
  FUNC_1(" = %d [bind]", VAR_14);
  return VAR_14;
 }

 FUNC_7(VAR_13, VAR_10);

 VAR_11 = VAR_13;
 FUNC_1(" = 0");
 return 0;
}
