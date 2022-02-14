
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int master_ssl_key; int master_ssl_cipher; int master_ssl_cert; int master_ssl_capath; int master_ssl_ca; int master_password; int master_user; int master_host; int master_log_file; } ;
typedef TYPE_1__ network_mysqld_masterinfo_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(network_mysqld_masterinfo_t *VAR_1) {
 if (!VAR_1) return;

 FUNC_1(VAR_1->master_log_file, VAR_0);
 FUNC_1(VAR_1->master_host, VAR_0);
 FUNC_1(VAR_1->master_user, VAR_0);
 FUNC_1(VAR_1->master_password, VAR_0);

 FUNC_1(VAR_1->master_ssl_ca, VAR_0);
 FUNC_1(VAR_1->master_ssl_capath, VAR_0);
 FUNC_1(VAR_1->master_ssl_cert, VAR_0);
 FUNC_1(VAR_1->master_ssl_cipher, VAR_0);
 FUNC_1(VAR_1->master_ssl_key, VAR_0);

 FUNC_0(VAR_1);
}
