
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char*) ;

int FUNC_2(char *VAR_0) {
    const char *VAR_1 = FUNC_1(VAR_0);
    return VAR_1 ? (!FUNC_0(VAR_1, "http") || !FUNC_0(VAR_1, "https")) : 0;
}
