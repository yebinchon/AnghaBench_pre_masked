
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* sds ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (char const*,char) ;

sds FUNC_4(sds VAR_0, const char *VAR_1) {
    char *VAR_2, *VAR_3, *VAR_4, *VAR_5;
    size_t VAR_6;

    VAR_4 = VAR_2 = VAR_0;
    VAR_5 = VAR_3 = VAR_0+FUNC_1(VAR_0)-1;
    while(VAR_4 <= VAR_3 && FUNC_3(VAR_1, *VAR_4)) VAR_4++;
    while(VAR_5 > VAR_4 && FUNC_3(VAR_1, *VAR_5)) VAR_5--;
    VAR_6 = (VAR_4 > VAR_5) ? 0 : ((VAR_5-VAR_4)+1);
    if (VAR_0 != VAR_4) FUNC_0(VAR_0, VAR_4, VAR_6);
    VAR_0[VAR_6] = '\0';
    FUNC_2(VAR_0,VAR_6);
    return VAR_0;
}
