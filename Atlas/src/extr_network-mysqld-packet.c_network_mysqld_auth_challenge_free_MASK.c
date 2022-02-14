
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ challenge; struct TYPE_4__* server_version_str; } ;
typedef TYPE_1__ network_mysqld_auth_challenge ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(network_mysqld_auth_challenge *VAR_1) {
 if (!VAR_1) return;

 if (VAR_1->server_version_str) FUNC_0(VAR_1->server_version_str);
 if (VAR_1->challenge) FUNC_1(VAR_1->challenge, VAR_0);

 FUNC_0(VAR_1);
}
