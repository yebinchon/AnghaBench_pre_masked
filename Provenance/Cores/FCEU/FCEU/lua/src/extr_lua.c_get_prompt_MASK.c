
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int) ;

__attribute__((used)) static const char *FUNC_3 (lua_State *VAR_3, int VAR_4) {
  const char *VAR_5;
  FUNC_0(VAR_3, VAR_0, VAR_4 ? "_PROMPT" : "_PROMPT2");
  VAR_5 = FUNC_2(VAR_3, -1);
  if (VAR_5 == ((void*)0)) VAR_5 = (VAR_4 ? VAR_1 : VAR_2);
  FUNC_1(VAR_3, 1);
  return VAR_5;
}
