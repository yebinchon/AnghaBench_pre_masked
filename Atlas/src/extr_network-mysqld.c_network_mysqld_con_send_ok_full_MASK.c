
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int send_queue; } ;
typedef TYPE_1__ network_socket ;
struct TYPE_10__ {void* warnings; void* server_status; void* insert_id; void* affected_rows; } ;
typedef TYPE_2__ network_mysqld_ok_packet_t ;
typedef void* guint64 ;
typedef void* guint16 ;
typedef int GString ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(network_socket *VAR_1, guint64 VAR_2, guint64 VAR_3, guint16 VAR_4, guint16 VAR_5 ) {
 GString *VAR_6 = FUNC_2(((void*)0));
 network_mysqld_ok_packet_t *VAR_7;

 VAR_7 = FUNC_4();
 VAR_7->affected_rows = VAR_2;
 VAR_7->insert_id = VAR_3;
 VAR_7->server_status = VAR_4;
 VAR_7->warnings = VAR_5;

 FUNC_5(VAR_6, VAR_7);

 FUNC_6(VAR_1, VAR_1->send_queue, FUNC_0(VAR_6));
 FUNC_7(VAR_1);

 FUNC_1(VAR_6, VAR_0);
 FUNC_3(VAR_7);

 return 0;
}
