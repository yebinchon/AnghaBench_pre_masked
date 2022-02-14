
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int database; int response; int username; int charset; int max_packet_size; int capabilities; } ;
typedef TYPE_1__ network_mysqld_auth_response ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 () ;

network_mysqld_auth_response *FUNC_3(network_mysqld_auth_response *VAR_0) {
 network_mysqld_auth_response *VAR_1;

 if (!VAR_0) return ((void*)0);

 VAR_1 = FUNC_2();
 VAR_1->capabilities = VAR_0->capabilities;
 VAR_1->max_packet_size = VAR_0->max_packet_size;
 VAR_1->charset = VAR_0->charset;
 FUNC_1(VAR_1->username, FUNC_0(VAR_0->username));
 FUNC_1(VAR_1->response, FUNC_0(VAR_0->response));
 FUNC_1(VAR_1->database, FUNC_0(VAR_0->database));

 return VAR_1;
}
