
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uuid; int state; } ;
typedef TYPE_1__ network_backend_t ;
typedef int lua_State ;
typedef int gsize ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,size_t) ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (int *,int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char const*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int,size_t*) ;
 scalar_t__ FUNC_10 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_0) {
 network_backend_t *VAR_1 = *(network_backend_t **)FUNC_4(VAR_0);
 gsize VAR_2 = 0;
 const char *VAR_3 = FUNC_3(VAR_0, 2, &VAR_2);

 if (FUNC_10(VAR_3, VAR_2, FUNC_0("state"))) {
  VAR_1->state = FUNC_8(VAR_0, -1);
 } else if (FUNC_10(VAR_3, VAR_2, FUNC_0("uuid"))) {
  if (FUNC_7(VAR_0, -1)) {
   size_t VAR_4 = 0;
   const char *VAR_5 = FUNC_9(VAR_0, -1, &VAR_4);

   FUNC_1(VAR_1->uuid, VAR_5, VAR_4);
  } else if (FUNC_6(VAR_0, -1)) {
   FUNC_2(VAR_1->uuid, 0);
  } else {
   return FUNC_5(VAR_0, "proxy.global.backends[...].%s has to be a string", VAR_3);
  }
 } else {
  return FUNC_5(VAR_0, "proxy.global.backends[...].%s is not writable", VAR_3);
 }
 return 1;
}
