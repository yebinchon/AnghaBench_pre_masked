
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* challenge; } ;
typedef TYPE_1__ network_mysqld_auth_challenge ;
typedef int guint ;
struct TYPE_5__ {double* str; int len; } ;


 double VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 double FUNC_1 () ;

void FUNC_2(network_mysqld_auth_challenge *VAR_1) {
 guint VAR_2;



 FUNC_0(VAR_1->challenge, 21);

 for (VAR_2 = 0; VAR_2 < 20; VAR_2++) {
  VAR_1->challenge->str[VAR_2] = (94.0 * (FUNC_1() / (VAR_0 + 1.0))) + 33;
 }

 VAR_1->challenge->len = 20;
 VAR_1->challenge->str[VAR_1->challenge->len] = '\0';
}
