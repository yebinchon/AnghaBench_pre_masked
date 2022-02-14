
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

uint32_t FUNC_0(const unsigned char **VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5;
    uint32_t VAR_6 = 0;
    char VAR_7;
    VAR_5 = VAR_3 / 4;
    if (VAR_3 == -1) {
        VAR_5 = 64;
    }
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        VAR_7 = **VAR_2;
        (*VAR_2)++;
        if (VAR_7 >= '0' && VAR_7 <= '9') {
            VAR_6 <<= 4;
            VAR_6 |= (VAR_7 - '0');
        } else if (VAR_7 >= 'A' && VAR_7 <= 'F') {
            VAR_6 <<= 4;
            VAR_6 |= (VAR_7 - 'A') + 10;
        } else if (VAR_7 >= 'a' && VAR_7 <= 'f') {
            VAR_6 <<= 4;
            VAR_6 |= (VAR_7 - 'a') + 10;
        } else if (VAR_7 == '#') {
            if (VAR_3 == -1) {
                (*VAR_2)--;
                return VAR_6;
            }
            return VAR_0;
        } else {
            if (VAR_3 == -1) {
                (*VAR_2)--;
                return VAR_6;
            }
            return VAR_1;
        }
    }
    return VAR_6;
}
