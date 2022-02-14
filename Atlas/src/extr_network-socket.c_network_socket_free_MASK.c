
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; int charset_results; int charset_connection; int charset_client; int default_db; int event; int src; int dst; scalar_t__ challenge; scalar_t__ response; int recv_queue_raw; int recv_queue; int send_queue; } ;
typedef TYPE_1__ network_socket ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

void FUNC_8(network_socket *VAR_1) {
 if (!VAR_1) return;

 FUNC_7(VAR_1->send_queue);
 FUNC_7(VAR_1->recv_queue);
 FUNC_7(VAR_1->recv_queue_raw);

 if (VAR_1->response) FUNC_6(VAR_1->response);
 if (VAR_1->challenge) FUNC_5(VAR_1->challenge);

 FUNC_4(VAR_1->dst);
 FUNC_4(VAR_1->src);

 FUNC_1(&(VAR_1->event));

 if (VAR_1->fd != -1) {
  FUNC_0(VAR_1->fd);
 }

 FUNC_3(VAR_1->default_db, VAR_0);
 FUNC_3(VAR_1->charset_client, VAR_0);
 FUNC_3(VAR_1->charset_connection, VAR_0);
 FUNC_3(VAR_1->charset_results, VAR_0);

 FUNC_2(VAR_1);
}
