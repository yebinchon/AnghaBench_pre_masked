
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int subscribe ;
struct socket {TYPE_2__* ops; TYPE_1__* sk; } ;
struct sockaddr_storage {int dummy; } ;
struct sctp_event_subscribe {int sctp_data_io_event; int sctp_association_event; int sctp_send_failure_event; int sctp_shutdown_event; int sctp_partial_delivery_event; } ;
struct connection {struct socket* sock; int connect_action; int rx_action; } ;
typedef int localaddr ;
typedef int bufsize ;
struct TYPE_9__ {int ci_tcp_port; } ;
struct TYPE_8__ {int ss_family; } ;
struct TYPE_7__ {int (* listen ) (struct socket*,int) ;} ;
struct TYPE_6__ {int sk_data_ready; struct connection* sk_user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct connection*,struct sockaddr_storage*,int,int) ;
 TYPE_5__ VAR_10 ;
 TYPE_3__** VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct socket*,int ,int ,char*,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_13 ;
 int FUNC_3 (struct sockaddr_storage*,int ,int*) ;
 int FUNC_4 (struct sockaddr_storage*,TYPE_3__*,int) ;
 int FUNC_5 (struct sctp_event_subscribe*,int ,int) ;
 struct connection* FUNC_6 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ,int ,int ,struct socket**) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*,int) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct socket *VAR_16 = ((void*)0);
 struct sockaddr_storage VAR_17;
 struct sctp_event_subscribe VAR_18;
 int VAR_19 = -VAR_0, VAR_20 = 1, VAR_21, VAR_22;
 struct connection *VAR_23 = FUNC_6(0, VAR_2);
 int VAR_24 = VAR_4;

 if (!VAR_23)
  return -VAR_1;

 FUNC_2("Using SCTP for communications");

 VAR_19 = FUNC_7(VAR_11[0]->ss_family, VAR_6,
      VAR_3, &VAR_16);
 if (VAR_19 < 0) {
  FUNC_2("Can't create comms socket, check SCTP is loaded");
  goto out;
 }


 FUNC_5(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.sctp_data_io_event = 1;
 VAR_18.sctp_association_event = 1;
 VAR_18.sctp_send_failure_event = 1;
 VAR_18.sctp_shutdown_event = 1;
 VAR_18.sctp_partial_delivery_event = 1;

 VAR_19 = FUNC_1(VAR_16, VAR_8, VAR_9,
     (char *)&VAR_24, sizeof(VAR_24));
 if (VAR_19)
  FUNC_2("Error increasing buffer space on socket %d", VAR_19);

 VAR_19 = FUNC_1(VAR_16, VAR_7, VAR_5,
       (char *)&VAR_18, sizeof(VAR_18));
 if (VAR_19 < 0) {
  FUNC_2("Failed to set SCTP_EVENTS on socket: result=%d",
     VAR_19);
  goto create_delsock;
 }


 VAR_16->sk->sk_user_data = VAR_23;
 VAR_23->sock = VAR_16;
 VAR_23->sock->sk->sk_data_ready = VAR_13;
 VAR_23->rx_action = VAR_14;
 VAR_23->connect_action = VAR_15;


 for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++) {
  FUNC_4(&VAR_17, VAR_11[VAR_21], sizeof(VAR_17));
  FUNC_3(&VAR_17, VAR_10.ci_tcp_port, &VAR_22);

  VAR_19 = FUNC_0(VAR_23, &VAR_17, VAR_22, VAR_20);
  if (VAR_19)
   goto create_delsock;
  ++VAR_20;
 }

 VAR_19 = VAR_16->ops->listen(VAR_16, 5);
 if (VAR_19 < 0) {
  FUNC_2("Can't set socket listening");
  goto create_delsock;
 }

 return 0;

create_delsock:
 FUNC_8(VAR_16);
 VAR_23->sock = ((void*)0);
out:
 return VAR_19;
}
