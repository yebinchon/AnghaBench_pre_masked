
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int FUNC_0 (char const*,char*,int*,int*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int64_t *VAR_1, int *VAR_2)
{
    int64_t VAR_3;
    int VAR_4, VAR_5, VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11;

    if (FUNC_0(VAR_0, "%u:%u:%u.%u,%u:%u:%u.%u",
               &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11) == 8) {
        VAR_3 = (VAR_8*3600LL + VAR_9*60LL + VAR_10) * 100LL + VAR_11;
        *VAR_1 = (VAR_4*3600LL + VAR_5*60LL + VAR_6) * 100LL + VAR_7;
        *VAR_2 = VAR_3 - *VAR_1;
        return 0;
    }
    return -1;
}
