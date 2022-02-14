
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 unsigned int FUNC_0 (char const*,size_t) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,unsigned int) ;

int FUNC_4(lua_State *VAR_0) {
 size_t VAR_1;
 const char *VAR_2 = FUNC_2(VAR_0, 1, &VAR_1);
    FUNC_1("string:%s, length:%d", VAR_2, VAR_1);

 unsigned int VAR_3 = FUNC_0(VAR_2, VAR_1);
    FUNC_1("crc key:%ld", VAR_3);


    FUNC_3(VAR_0, VAR_3);

    return 1;
}
