
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (char const*,char**,int) ;

int FUNC_4(const char *VAR_2, uint64_t* VAR_3, int* VAR_4)
{
    int VAR_5 = 0;
    char *VAR_6;
    uint64_t VAR_7 = FUNC_1(VAR_2);

    if (VAR_7) {
        *VAR_3 = VAR_7;
        *VAR_4 = FUNC_2(VAR_7);
        return 0;
    }

    VAR_5 = FUNC_3(VAR_2, &VAR_6, 10);
    if (!VAR_1 && *VAR_6 == 'C' && *(VAR_6 + 1) == '\0' && VAR_5 > 0 && VAR_5 < 64) {
        *VAR_3 = 0;
        *VAR_4 = VAR_5;
        return 0;
    }

    return FUNC_0(VAR_0);
}
