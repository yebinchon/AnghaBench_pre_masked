
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int con_cleanup; int con_send_local_infile_result; int con_read_local_infile_result; int con_read_local_infile_data; int con_send_query_result; int con_read_query_result; int con_read_query; int con_read_auth_result; int con_read_auth; int con_read_handshake; int con_connect_server; int con_init; } ;
struct TYPE_5__ {TYPE_1__ plugins; } ;
typedef TYPE_2__ network_mysqld_con ;


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
 int VAR_10 ;
 int VAR_11 ;

int FUNC_0(network_mysqld_con *VAR_12) {
 VAR_12->plugins.con_init = VAR_2;
 VAR_12->plugins.con_connect_server = VAR_0;
 VAR_12->plugins.con_read_handshake = VAR_5;
 VAR_12->plugins.con_read_auth = VAR_3;
 VAR_12->plugins.con_read_auth_result = VAR_4;
 VAR_12->plugins.con_read_query = VAR_8;
 VAR_12->plugins.con_read_query_result = VAR_9;
 VAR_12->plugins.con_send_query_result = VAR_11;
 VAR_12->plugins.con_read_local_infile_data = VAR_6;
 VAR_12->plugins.con_read_local_infile_result = VAR_7;
 VAR_12->plugins.con_send_local_infile_result = VAR_10;
 VAR_12->plugins.con_cleanup = VAR_1;

 return 0;
}
