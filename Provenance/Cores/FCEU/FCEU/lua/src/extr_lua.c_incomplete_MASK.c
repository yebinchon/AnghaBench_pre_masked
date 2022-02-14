
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int,size_t*) ;
 char const* FUNC_3 (char const*,int ) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1, int VAR_2) {
  if (VAR_2 == VAR_0) {
    size_t VAR_3;
    const char *VAR_4 = FUNC_2(VAR_1, -1, &VAR_3);
    const char *VAR_5 = VAR_4 + VAR_3 - (sizeof(FUNC_0("<eof>")) - 1);
    if (FUNC_3(VAR_4, FUNC_0("<eof>")) == VAR_5) {
      FUNC_1(VAR_1, 1);
      return 1;
    }
  }
  return 0;
}
