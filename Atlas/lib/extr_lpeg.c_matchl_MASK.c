
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Integer ;
typedef int Instruction ;
typedef int Capture ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,char const*,int) ;
 int * FUNC_1 (int *,int,int *) ;
 char* FUNC_2 (int *,int ,size_t*) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *,char const*,char const*,char const*,int *,int *,int) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_2) {
  Capture VAR_3[VAR_0];
  const char *VAR_4;
  size_t VAR_5;
  Instruction *VAR_6 = FUNC_1(VAR_2, 1, ((void*)0));
  const char *VAR_7 = FUNC_2(VAR_2, VAR_1, &VAR_5);
  int VAR_8 = FUNC_5(VAR_2);
  lua_Integer VAR_9 = FUNC_3(VAR_2, 3, 1);
  size_t VAR_10 = (VAR_9 > 0) ?
             (((size_t)VAR_9 <= VAR_5) ? (size_t)VAR_9 - 1 : VAR_5) :
             (((size_t)-VAR_9 <= VAR_5) ? VAR_5 - ((size_t)-VAR_9) : 0);
  FUNC_7(VAR_2);
  FUNC_6(VAR_2, VAR_3);
  FUNC_4(VAR_2, 1);
  VAR_4 = FUNC_8(VAR_2, VAR_7, VAR_7 + VAR_10, VAR_7 + VAR_5, VAR_6, VAR_3, VAR_8);
  if (VAR_4 == ((void*)0)) {
    FUNC_7(VAR_2);
    return 1;
  }
  return FUNC_0(VAR_2, VAR_7, VAR_4, VAR_8);
}
