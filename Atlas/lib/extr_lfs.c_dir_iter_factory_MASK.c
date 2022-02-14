
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {long hFile; int * dir; int pattern; scalar_t__ closed; } ;
typedef TYPE_1__ dir_data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,char const*,...) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (char const*) ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10 (lua_State *VAR_4) {
 const char *VAR_5 = FUNC_0 (VAR_4, 1);
 dir_data *VAR_6 = (dir_data *) FUNC_3 (VAR_4, sizeof(dir_data));
 VAR_6->closed = 0;
 FUNC_2 (VAR_4, VAR_0);
 FUNC_5 (VAR_4, -2);
 VAR_6->dir = FUNC_6 (VAR_5);
 if (VAR_6->dir == ((void*)0))
  FUNC_1 (VAR_4, "cannot open %s: %s", VAR_5, FUNC_8 (VAR_3));

 FUNC_4 (VAR_4, VAR_2, 1);
 return 1;
}
