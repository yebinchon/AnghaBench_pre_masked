
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int guchar ;
typedef int GChecksum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,size_t) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_1) {
 size_t VAR_2;
 const char *VAR_3 = FUNC_4 (VAR_1, 1, &VAR_2);
 GChecksum *VAR_4;

 VAR_4 = FUNC_2(VAR_0);

 FUNC_3(VAR_4, (guchar *)VAR_3, VAR_2);

 FUNC_5(VAR_1, FUNC_1(VAR_4));

 FUNC_0(VAR_4);

 return 1;
}
