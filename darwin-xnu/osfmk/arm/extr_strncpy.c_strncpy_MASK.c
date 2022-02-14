
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t const) ;
 int FUNC_1 (char*,int ,size_t) ;
 size_t FUNC_2 (char const*,size_t) ;

char *
FUNC_3(char * VAR_0, const char * VAR_1, size_t VAR_2) {
    const size_t VAR_3 = FUNC_2(VAR_1, VAR_2);
    if (VAR_3 < VAR_2) {
        FUNC_0(VAR_0, VAR_1, VAR_3);
        FUNC_1(VAR_0+VAR_3, 0, VAR_2 - VAR_3);
    } else {
        FUNC_0(VAR_0, VAR_1, VAR_2);
    }
    return VAR_0;
}
