
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * raw_pwds; int * raw_ips; } ;
typedef TYPE_1__ network_backends_t ;
typedef int lua_State ;
struct TYPE_5__ {TYPE_1__* backends; int log_path; int instance_name; } ;
typedef TYPE_2__ chassis ;
typedef int GPtrArray ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int,char*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void FUNC_15(lua_State *VAR_0 , chassis *VAR_1) {
 network_backends_t **VAR_2;

 int VAR_3 = FUNC_3(VAR_0);





 FUNC_2(VAR_0, "proxy");
 if (FUNC_4(VAR_0, -1)) {
  FUNC_7(VAR_0, 1);

  FUNC_13(VAR_0);

  FUNC_2(VAR_0, "proxy");
 }
 FUNC_0(FUNC_5(VAR_0, -1));
 FUNC_1(VAR_0, -1, "global");



 FUNC_1(VAR_0, -1, "config");

    FUNC_8(VAR_0, VAR_1->instance_name);
 FUNC_9(VAR_0, -2, "instance");

    FUNC_8(VAR_0, VAR_1->log_path);
 FUNC_9(VAR_0, -2, "logpath");

    FUNC_7(VAR_0, 1);


 VAR_2 = FUNC_6(VAR_0, sizeof(network_backends_t *));
 *VAR_2 = VAR_1->backends;

 FUNC_11(VAR_0);
 FUNC_10(VAR_0, -2);

 FUNC_9(VAR_0, -2, "backends");

 GPtrArray **VAR_4 = FUNC_6(VAR_0, sizeof(GPtrArray *));
 *VAR_4 = VAR_1->backends->raw_ips;
 FUNC_12(VAR_0);
 FUNC_10(VAR_0, -2);
 FUNC_9(VAR_0, -2, "clients");

 GPtrArray **VAR_5 = FUNC_6(VAR_0, sizeof(GPtrArray *));
 *VAR_5 = VAR_1->backends->raw_pwds;
 FUNC_14(VAR_0);
 FUNC_10(VAR_0, -2);
 FUNC_9(VAR_0, -2, "pwds");

 FUNC_7(VAR_0, 2);

 FUNC_0(FUNC_3(VAR_0) == VAR_3);
}
