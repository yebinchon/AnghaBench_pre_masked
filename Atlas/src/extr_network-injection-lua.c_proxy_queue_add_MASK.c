
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int proxy_queue_add_t ;
typedef int lua_State ;
struct TYPE_5__ {int resultset_is_needed; } ;
typedef TYPE_1__ injection ;
typedef int GString ;
typedef int GQueue ;


 int VAR_0 ;


 int FUNC_0 () ;
 int FUNC_1 (int *,char const*,size_t) ;
 int * FUNC_2 (size_t) ;
 TYPE_1__* FUNC_3 (int,int *) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int,size_t*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int *,int,char*) ;
 int FUNC_10 (int *,int,char*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int VAR_1 ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (int *,TYPE_1__*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(lua_State *VAR_2, proxy_queue_add_t VAR_3) {
 GQueue *VAR_4 = *(GQueue **)FUNC_7(VAR_2);
 int VAR_5 = FUNC_5(VAR_2, 2);
 size_t VAR_6;
 const char *VAR_7 = FUNC_6(VAR_2, 3, &VAR_6);
 injection *VAR_8;

 GString *VAR_9 = FUNC_2(VAR_6);
 FUNC_1(VAR_9, VAR_7, VAR_6);

 VAR_8 = FUNC_3(VAR_5, VAR_9);
 VAR_8->resultset_is_needed = VAR_0;


 switch (FUNC_8(VAR_2, VAR_1, 4, -1)) {
 case -1:

  break;
 case 1:
  FUNC_10(VAR_2, 4, "resultset_is_needed");
  if (FUNC_12(VAR_2, -1)) {

  } else if (FUNC_11(VAR_2, -1)) {
   VAR_8->resultset_is_needed = FUNC_14(VAR_2, -1);
  } else {
   switch (VAR_3) {
   case 129:
    return FUNC_4(VAR_2, 4, ":append(..., { resultset_is_needed = boolean } ), is %s");
   case 128:
    return FUNC_4(VAR_2, 4, ":prepend(..., { resultset_is_needed = boolean } ), is %s");
   }
  }

  FUNC_13(VAR_2, 1);
  break;
 default:
  FUNC_17(VAR_2);
  FUNC_9(VAR_2, 4, "table");
  break;
 }

 switch (VAR_3) {
 case 129:
  FUNC_15(VAR_4, VAR_8);
  return 0;
 case 128:
  FUNC_16(VAR_4, VAR_8);
  return 0;
 }

 FUNC_0();
}
