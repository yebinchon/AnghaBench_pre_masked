
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int lua_State ;
struct TYPE_2__ {char const* name; int (* push ) (int *,struct stat*) ;} ;


 char* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *,int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_9 (char const*,struct stat*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (int *,struct stat*) ;
 int FUNC_12 (int *,struct stat*) ;

__attribute__((used)) static int FUNC_13 (lua_State *VAR_1) {
 int VAR_2;
 struct stat VAR_3;
 const char *VAR_4 = FUNC_0 (VAR_1, 1);

 if (FUNC_9(VAR_4, &VAR_3)) {
  FUNC_5 (VAR_1);
  FUNC_4 (VAR_1, "cannot obtain information from file `%s'", VAR_4);
  return 2;
 }
 if (FUNC_1 (VAR_1, 2)) {
  int VAR_5;
  const char *VAR_6 = FUNC_8 (VAR_1, 2);
  if (FUNC_10 (VAR_6, "mode") == 0) VAR_5 = 0;

  else if (FUNC_10 (VAR_6, "blksize") == 0) VAR_5 = 12;

  else
   for (VAR_5 = 1; VAR_0[VAR_5].name; VAR_5++)
    if (*VAR_0[VAR_5].name == *VAR_6)
     break;

  VAR_0[VAR_5].push (VAR_1, &VAR_3);
  return 1;
 } else if (!FUNC_2 (VAR_1, 2))

  FUNC_3 (VAR_1);

 for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2++) {
  FUNC_6 (VAR_1, VAR_0[VAR_2].name);
  VAR_0[VAR_2].push (VAR_1, &VAR_3);
  FUNC_7 (VAR_1, -3);
 }
 return 1;
}
