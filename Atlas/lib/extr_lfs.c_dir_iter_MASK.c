
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dirent {int d_name; } ;
struct _finddata_t {int name; } ;
typedef int lua_State ;
struct TYPE_2__ {int closed; long hFile; int dir; int pattern; } ;
typedef TYPE_1__ dir_data ;


 int FUNC_0 (long) ;
 long FUNC_1 (int ,struct _finddata_t*) ;
 long FUNC_2 (long,struct _finddata_t*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int,int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int) ;
 struct dirent* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11 (lua_State *VAR_1) {



 struct dirent *VAR_2;

 dir_data *VAR_3 = (dir_data *)FUNC_7 (VAR_1, FUNC_8 (1));
 FUNC_4 (VAR_1, !VAR_3->closed, 1, "closed directory");
 if ((VAR_2 = FUNC_9 (VAR_3->dir)) != ((void*)0)) {
  FUNC_6 (VAR_1, VAR_2->d_name);
  return 1;
 } else {

  FUNC_3 (VAR_3->dir);
  VAR_3->closed = 1;
  return 0;
 }

}
