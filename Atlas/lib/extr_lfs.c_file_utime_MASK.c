
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* time_t ;
struct utimbuf {void* actime; void* modtime; } ;
typedef int lua_State ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,struct utimbuf*) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_1) {
 const char *VAR_2 = FUNC_0 (VAR_1, 1);
 struct utimbuf VAR_3, *VAR_4;

 if (FUNC_2 (VAR_1) == 1)
  VAR_4 = ((void*)0);
 else {
  VAR_3.actime = (time_t)FUNC_1 (VAR_1, 2, 0);
  VAR_3.modtime = (time_t)FUNC_1 (VAR_1, 3, VAR_3.actime);
  VAR_4 = &VAR_3;
 }
 if (FUNC_7 (VAR_2, VAR_4)) {
  FUNC_5 (VAR_1);
  FUNC_4 (VAR_1, "%s", FUNC_6 (VAR_0));
  return 2;
 }
 FUNC_3 (VAR_1, 1);
 return 1;
}
