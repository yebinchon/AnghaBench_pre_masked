
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
typedef int lua_State ;


 int FUNC_0 (struct timeval*,int ) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(lua_State *VAR_0)
{
    struct timeval VAR_1;
    FUNC_0(&VAR_1, 0);
 FUNC_1(VAR_0, VAR_1.tv_sec);
 FUNC_1(VAR_0, VAR_1.tv_usec);
 return 2;
}
