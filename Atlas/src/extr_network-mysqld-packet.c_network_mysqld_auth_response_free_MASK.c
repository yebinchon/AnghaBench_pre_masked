
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ database; scalar_t__ username; scalar_t__ response; } ;
typedef TYPE_1__ network_mysqld_auth_response ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(network_mysqld_auth_response *VAR_1) {
 if (!VAR_1) return;

 if (VAR_1->response) FUNC_1(VAR_1->response, VAR_0);
 if (VAR_1->username) FUNC_1(VAR_1->username, VAR_0);
 if (VAR_1->database) FUNC_1(VAR_1->database, VAR_0);

 FUNC_0(VAR_1);
}
