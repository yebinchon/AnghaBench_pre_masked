
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 double FUNC_0 (char const*,char**) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, int64_t *VAR_2)
{
    const char *VAR_3 = VAR_1;
    char *VAR_4;
    int VAR_5, VAR_6;
    double VAR_7 = 0;

    if (*VAR_3 < '0' || *VAR_3 > '9')
        return 0;
    VAR_5 = FUNC_1(VAR_3, &VAR_4, 10);
    if (VAR_4 == VAR_3 || *VAR_4 != ':' || VAR_4[1] < '0' || VAR_4[1] > '9')
        return 0;
    VAR_3 = VAR_4 + 1;
    VAR_6 = FUNC_1(VAR_3, &VAR_4, 10);
    if (VAR_4 == VAR_3)
        return 0;
    VAR_3 = VAR_4;
    if (*VAR_4 == ':'){
        VAR_7 = FUNC_0(VAR_3 + 1, &VAR_4);
        if (VAR_4 > VAR_3 + 1)
            VAR_3 = VAR_4;
    }
    *VAR_2 = (VAR_5 * 3600LL + VAR_6 * 60LL + VAR_7) * VAR_0;
    return VAR_3 - VAR_1;
}
