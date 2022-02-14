
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rio ;


 scalar_t__ FUNC_0 (int *,char const*,int) ;
 size_t FUNC_1 (int *,char,size_t) ;

size_t FUNC_2(rio *VAR_0, const char *VAR_1, size_t VAR_2) {
    size_t VAR_3;

    if ((VAR_3 = FUNC_1(VAR_0,'$',VAR_2)) == 0) return 0;
    if (VAR_2 > 0 && FUNC_0(VAR_0,VAR_1,VAR_2) == 0) return 0;
    if (FUNC_0(VAR_0,"\r\n",2) == 0) return 0;
    return VAR_3+VAR_2+2;
}
