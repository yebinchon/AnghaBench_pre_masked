
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,scalar_t__) ;

size_t FUNC_5(char *VAR_1, size_t VAR_2, size_t VAR_3, void *VAR_4) {
    size_t VAR_5 = VAR_2 * VAR_3;
    char *VAR_6 = (char *)VAR_4;
    char *VAR_7 = FUNC_1(VAR_5 + 1);
    FUNC_2(VAR_7, VAR_1, VAR_5);
    VAR_7[VAR_5] = '\0';
    FUNC_4(VAR_6, VAR_7, VAR_0 - FUNC_3(VAR_6) - 1);
    FUNC_0(VAR_7);
    return VAR_5;
}
