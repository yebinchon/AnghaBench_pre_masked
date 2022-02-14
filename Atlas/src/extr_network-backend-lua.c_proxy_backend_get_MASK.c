
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int weight; TYPE_2__* uuid; int type; int state; int addr; int connected_clients; } ;
typedef TYPE_1__ network_backend_t ;
typedef int lua_State ;
typedef int gsize ;
struct TYPE_4__ {scalar_t__ len; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (int *,int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_0) {
 network_backend_t *VAR_1 = *(network_backend_t **)FUNC_3(VAR_0);
 gsize VAR_2 = 0;
 const char *VAR_3 = FUNC_2(VAR_0, 2, &VAR_2);

 if (FUNC_8(VAR_3, VAR_2, FUNC_0("connected_clients"))) {
  FUNC_4(VAR_0, VAR_1->connected_clients);
 } else if (FUNC_8(VAR_3, VAR_2, FUNC_0("dst"))) {
  FUNC_7(VAR_0, VAR_1->addr);
 } else if (FUNC_8(VAR_3, VAR_2, FUNC_0("state"))) {
  FUNC_4(VAR_0, VAR_1->state);
 } else if (FUNC_8(VAR_3, VAR_2, FUNC_0("type"))) {
  FUNC_4(VAR_0, VAR_1->type);
 } else if (FUNC_8(VAR_3, VAR_2, FUNC_0("uuid"))) {
  if (VAR_1->uuid->len) {
   FUNC_5(VAR_0, FUNC_1(VAR_1->uuid));
  } else {
   FUNC_6(VAR_0);
  }
 } else if (FUNC_8(VAR_3, VAR_2, FUNC_0("weight"))) {
  FUNC_4(VAR_0, VAR_1->weight);
 } else {
  FUNC_6(VAR_0);
 }

 return 1;
}
