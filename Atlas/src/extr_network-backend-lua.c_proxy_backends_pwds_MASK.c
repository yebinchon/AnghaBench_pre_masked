
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_backends_t ;
typedef int lua_State ;
typedef int guint ;
typedef int gchar ;
typedef int gboolean ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_4) {
 network_backends_t *VAR_5 = *(network_backends_t **)FUNC_1(VAR_4);
 guint VAR_6 = FUNC_3(VAR_4, -1);
 gchar *VAR_7 = FUNC_4(VAR_4, -2);
 gchar *VAR_8 = FUNC_4(VAR_4, -3);

 gboolean VAR_9 = FUNC_7(VAR_5, VAR_8);
 int VAR_10 = -1;

 switch (VAR_6) {
 case 129:
  if (VAR_9) {
   VAR_10 = VAR_0;
  } else {
   VAR_10 = FUNC_5(VAR_5, VAR_8, VAR_7, VAR_2);
  }
  break;

 case 130:
  if (VAR_9) {
   VAR_10 = VAR_0;
  } else {
   VAR_10 = FUNC_5(VAR_5, VAR_8, VAR_7, VAR_3);
  }
  break;

 case 128:
  if (!VAR_9) {
   VAR_10 = VAR_1;
  } else {
   VAR_10 = FUNC_6(VAR_5, VAR_8);
  }
  break;

 default:
  FUNC_0();
 }

 FUNC_2(VAR_4, VAR_10);
 return 1;
}
