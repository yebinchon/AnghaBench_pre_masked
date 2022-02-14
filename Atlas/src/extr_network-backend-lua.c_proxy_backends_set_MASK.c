
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_backends_t ;
typedef int lua_State ;
typedef int gsize ;
typedef int gchar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 char* FUNC_3 (int *,int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char const*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_14(lua_State *VAR_2) {
 network_backends_t *VAR_3 = *(network_backends_t **)FUNC_4(VAR_2);
 gsize VAR_4 = 0;
 const char *VAR_5 = FUNC_3(VAR_2, 2, &VAR_4);

 if (FUNC_13(VAR_5, VAR_4, FUNC_0("addslave"))) {
  gchar *VAR_6 = FUNC_2(FUNC_7(VAR_2, -1));
  FUNC_8(VAR_3, VAR_6, VAR_0);
  FUNC_1(VAR_6);
 } else if (FUNC_13(VAR_5, VAR_4, FUNC_0("addmaster"))) {
  gchar *VAR_7 = FUNC_2(FUNC_7(VAR_2, -1));
  FUNC_8(VAR_3, VAR_7, VAR_1);
  FUNC_1(VAR_7);
 } else if (FUNC_13(VAR_5, VAR_4, FUNC_0("removebackend"))) {
  FUNC_10(VAR_3, FUNC_6(VAR_2, -1));
 } else if (FUNC_13(VAR_5, VAR_4, FUNC_0("addclient"))) {
  gchar *VAR_8 = FUNC_2(FUNC_7(VAR_2, -1));
  FUNC_9(VAR_3, VAR_8);
  FUNC_1(VAR_8);
 } else if (FUNC_13(VAR_5, VAR_4, FUNC_0("removeclient"))) {
  gchar *VAR_9 = FUNC_2(FUNC_7(VAR_2, -1));
  FUNC_11(VAR_3, VAR_9);
  FUNC_1(VAR_9);
 } else if (FUNC_13(VAR_5, VAR_4, FUNC_0("saveconfig"))) {
  FUNC_12(VAR_3);
 } else {
  return FUNC_5(VAR_2, "proxy.global.backends.%s is not writable", VAR_5);
 }
 return 1;
}
