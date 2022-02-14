
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* mode_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*) ;
 int VAR_8 ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_9) {
 const char *VAR_10 = FUNC_1 (VAR_9, 1);
 int VAR_11;




 mode_t VAR_12 = FUNC_7( (mode_t)0 );
 VAR_11 = FUNC_5 (VAR_10, VAR_2 | VAR_4 | VAR_7 | VAR_0 |
                      VAR_3 | VAR_5 | VAR_1 | VAR_6 );

 if (VAR_11) {
  FUNC_4 (VAR_9);
        FUNC_3 (VAR_9, "%s", FUNC_6(VAR_8));
  return 2;
 }
 FUNC_7 (VAR_12);
 FUNC_2 (VAR_9, 1);
 return 1;
}
