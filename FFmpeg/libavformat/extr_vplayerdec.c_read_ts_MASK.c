
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int*,int*,int*,...) ;
 scalar_t__ FUNC_1 (char*,char) ;

__attribute__((used)) static int64_t FUNC_2(char **VAR_1)
{
    char VAR_2;
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    if (((VAR_7 = FUNC_0(*VAR_1, "%d:%d:%d.%d%c%n", &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_2, &VAR_8)) >= 5 ||
         (VAR_7 = FUNC_0(*VAR_1, "%d:%d:%d%c%n", &VAR_3, &VAR_4, &VAR_5, &VAR_2, &VAR_8)) >= 4) && FUNC_1(": =", VAR_2)) {
        *VAR_1 += VAR_8;
        return (VAR_3*3600LL + VAR_4*60LL + VAR_5) * 100LL + (VAR_7 < 5 ? 0 : VAR_6);
    }
    return VAR_0;
}
