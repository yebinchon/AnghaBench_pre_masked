
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int tv_usec; int tv_sec; } ;
typedef TYPE_1__ GTimeVal ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,char*) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_0) {
 GTimeVal VAR_1;

 FUNC_0(&VAR_1);

 FUNC_1(VAR_0);
 FUNC_2(VAR_0, VAR_1.tv_sec);
 FUNC_3(VAR_0, -2, "tv_sec");
 FUNC_2(VAR_0, VAR_1.tv_usec);
 FUNC_3(VAR_0, -2, "tv_usec");

 return 1;
}
