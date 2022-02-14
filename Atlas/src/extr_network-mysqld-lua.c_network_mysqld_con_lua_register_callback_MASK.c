
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int network_mysqld_register_callback_ret ;
struct TYPE_8__ {int * queries; } ;
struct TYPE_9__ {int * L; int L_ref; TYPE_1__ injected; } ;
typedef TYPE_2__ network_mysqld_con_lua_t ;
struct TYPE_10__ {TYPE_5__* srv; TYPE_2__* plugin_con_state; } ;
typedef TYPE_3__ network_mysqld_con ;
struct TYPE_11__ {int L; } ;
typedef TYPE_4__ lua_scope ;
typedef int lua_State ;
typedef int con ;
struct TYPE_12__ {TYPE_4__* sc; } ;
typedef int GQueue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ) ;
 void* FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int,char*) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int ,int *,int) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (TYPE_4__*,char const*) ;
 int FUNC_25 (int ,TYPE_5__*) ;
 int FUNC_26 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

network_mysqld_register_callback_ret FUNC_27(network_mysqld_con *VAR_7, const char *VAR_8) {
 lua_State *VAR_9 = ((void*)0);
 network_mysqld_con_lua_t *VAR_10 = VAR_7->plugin_con_state;

 lua_scope *VAR_11 = VAR_7->srv->sc;

 GQueue **VAR_12;
 network_mysqld_con **VAR_13;
 int VAR_14;

 if (!VAR_8) return VAR_4;

 if (VAR_10->L) {

  VAR_9 = VAR_10->L;

  FUNC_0(FUNC_9(VAR_9, -1));

  FUNC_4(VAR_9, -1);
  FUNC_0(FUNC_10(VAR_9, -1));

  FUNC_6(VAR_9, "proxy");
  FUNC_7(VAR_9, -1);

  FUNC_5(VAR_9, -3, "__proxy");
  FUNC_19(VAR_9, -2, "__index");

  FUNC_5(VAR_9, -3, "__proxy");
  FUNC_19(VAR_9, -2, "__newindex");

  FUNC_15(VAR_9, 3);

  FUNC_0(FUNC_9(VAR_9, -1));

  return VAR_4;
 }


 if (0 != FUNC_24(VAR_11, VAR_8)) {

  return VAR_3;
 }


 FUNC_25(VAR_11->L, VAR_7->srv);






 VAR_9 = FUNC_12(VAR_11->L);

 VAR_10->L_ref = FUNC_2(VAR_11->L, VAR_1);

 VAR_14 = FUNC_8(VAR_9);


 FUNC_22(VAR_11->L, VAR_9, 1);
 FUNC_0(FUNC_9(VAR_9, -1));

 FUNC_11(VAR_9);

 FUNC_11(VAR_9);

 FUNC_17(VAR_9, VAR_0);
 FUNC_19(VAR_9, -2, "__index");
 FUNC_20(VAR_9, -2);

 FUNC_11(VAR_9);

 FUNC_0(FUNC_10(VAR_9, -1));

 VAR_12 = FUNC_13(VAR_9, sizeof(GQueue *));
 *VAR_12 = VAR_10->injected.queries;
 FUNC_26(VAR_9);

 FUNC_17(VAR_9, -1);
 FUNC_19(VAR_9, -2, "__index");

 FUNC_20(VAR_9, -2);


 FUNC_19(VAR_9, -2, "queries");
 VAR_13 = FUNC_13(VAR_9, sizeof(VAR_7));
 *VAR_13 = VAR_7;

 FUNC_23(VAR_9);
 FUNC_20(VAR_9, -2);

 FUNC_19(VAR_9, -2, "connection");
 FUNC_11(VAR_9);
 FUNC_19(VAR_9, -2, "response");

 FUNC_19(VAR_9, -2, "__proxy");


 FUNC_6(VAR_9, "proxy");
 FUNC_0(FUNC_10(VAR_9, -1));

 if (0 == FUNC_7(VAR_9, -1)) {


  FUNC_11(VAR_9);
 }
 FUNC_0(FUNC_10(VAR_9, -1));

 FUNC_5(VAR_9, -3, "__proxy");
 FUNC_0(FUNC_10(VAR_9, -1));
 FUNC_19(VAR_9, -2, "__index");

 FUNC_5(VAR_9, -3, "__proxy");
 FUNC_19(VAR_9, -2, "__newindex");

 FUNC_20(VAR_9, -2);

 FUNC_15(VAR_9, 1);

 FUNC_0(FUNC_9(VAR_9, -2));
 FUNC_0(FUNC_10(VAR_9, -1));

 FUNC_18(VAR_9, -2);


 FUNC_0(FUNC_9(VAR_9, -1));
 FUNC_17(VAR_9, -1);


 if (FUNC_14(VAR_9, 0, 0, 0) != 0) {
  FUNC_1("(lua-error) [%s]\n%s", VAR_8, FUNC_21(VAR_9, -1));

  FUNC_15(VAR_9, 1);

  FUNC_3(VAR_11->L, VAR_1, VAR_10->L_ref);

  return VAR_2;
 }

 VAR_10->L = VAR_9;

 FUNC_0(FUNC_9(VAR_9, -1));
 FUNC_0(FUNC_8(VAR_9) - VAR_14 == 1);

 return VAR_4;
}
