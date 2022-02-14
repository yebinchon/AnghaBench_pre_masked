
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int closed; scalar_t__ dir; scalar_t__ hFile; } ;
typedef TYPE_1__ dir_data ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_0) {
 dir_data *VAR_1 = (dir_data *)FUNC_2 (VAR_0, 1);






 if (!VAR_1->closed && VAR_1->dir) {
  FUNC_1 (VAR_1->dir);
  VAR_1->closed = 1;
 }

 return 0;
}
