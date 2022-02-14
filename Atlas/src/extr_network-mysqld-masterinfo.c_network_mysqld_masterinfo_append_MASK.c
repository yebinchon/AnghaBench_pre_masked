
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int master_lines; int master_log_pos; int master_port; int master_connect_retry; int master_ssl; int master_ssl_verify_server_cert; int master_ssl_key; int master_ssl_cipher; int master_ssl_cert; int master_ssl_capath; int master_ssl_ca; int master_password; int master_user; int master_host; int master_log_file; } ;
typedef TYPE_1__ network_mysqld_masterinfo_t ;
typedef TYPE_1__ GString ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

int FUNC_3(GString *VAR_0, network_mysqld_masterinfo_t *VAR_1) {
 int VAR_2 = 0;

 FUNC_0(VAR_1, -1);
 FUNC_0(VAR_0, -1);

 VAR_2 = VAR_2 || FUNC_1(VAR_0, VAR_1->master_lines);
        VAR_2 = VAR_2 || FUNC_2(VAR_0, VAR_1->master_log_file);
 VAR_2 = VAR_2 || FUNC_1(VAR_0, VAR_1->master_log_pos);
 VAR_2 = VAR_2 || FUNC_2(VAR_0, VAR_1->master_host);
 VAR_2 = VAR_2 || FUNC_2(VAR_0, VAR_1->master_user);
 VAR_2 = VAR_2 || FUNC_2(VAR_0, VAR_1->master_password);
 VAR_2 = VAR_2 || FUNC_1(VAR_0, VAR_1->master_port);
 VAR_2 = VAR_2 || FUNC_1(VAR_0, VAR_1->master_connect_retry);
 VAR_2 = VAR_2 || FUNC_1(VAR_0, VAR_1->master_ssl);
 VAR_2 = VAR_2 || FUNC_2(VAR_0, VAR_1->master_ssl_ca);
 VAR_2 = VAR_2 || FUNC_2(VAR_0, VAR_1->master_ssl_capath);
 VAR_2 = VAR_2 || FUNC_2(VAR_0, VAR_1->master_ssl_cert);
 VAR_2 = VAR_2 || FUNC_2(VAR_0, VAR_1->master_ssl_cipher);
 VAR_2 = VAR_2 || FUNC_2(VAR_0, VAR_1->master_ssl_key);
 if (VAR_1->master_lines >= 15) {
                VAR_2 = VAR_2 || FUNC_1(VAR_0, VAR_1->master_ssl_verify_server_cert);
        }

 return VAR_2 ? -1 : 0;
}
