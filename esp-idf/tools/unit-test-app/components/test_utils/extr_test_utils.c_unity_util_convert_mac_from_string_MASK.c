
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char const*,char**,int) ;

bool FUNC_1(const char* VAR_0, uint8_t *VAR_1)
{
    uint8_t VAR_2 = 0;
    uint8_t VAR_3 = 0;
    const char *VAR_4;
    char *VAR_5;

    for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
        VAR_4 = VAR_0 + VAR_2 * 3;
        VAR_3 = FUNC_0(VAR_4, &VAR_5, 16);
        if (VAR_5 - VAR_4 == 2 && (*VAR_5 == ':' || (*VAR_5 == 0 && VAR_2 == 5))) {
            VAR_1[VAR_2] = VAR_3;
        } else {
            return 0;
        }
    }
    return 1;
}
