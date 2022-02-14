
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 () ;
 unsigned char FUNC_1 (unsigned char const**,int) ;
 int FUNC_2 (char) ;
 unsigned char* VAR_3 ;

int FUNC_3(unsigned char **VAR_4, size_t *VAR_5)
{
    unsigned char VAR_6;
    unsigned char VAR_7 = 0;
    unsigned char VAR_8[2];
    int VAR_9 = 0;
    VAR_6 = FUNC_0();
    if (VAR_6 != '$') {
        return VAR_6;
    }
    while (1) {
        VAR_6 = FUNC_0();
        if (VAR_6 == '#') {

            VAR_3[VAR_9] = 0;
            break;
        }
        VAR_7 += VAR_6;
        if (VAR_6 == '$') {

            VAR_7 = 0;
            VAR_9 = 0;
            continue;
        }
        if (VAR_6 == '}') {

            VAR_6 = FUNC_0();
            VAR_7 += VAR_6;
            VAR_6 ^= 0x20;
        }
        VAR_3[VAR_9++] = VAR_6;
        if (VAR_9 >= VAR_0) {
            return VAR_1;
        }
    }

    VAR_8[0] = FUNC_0();
    VAR_8[1] = FUNC_0();
    const unsigned char* VAR_10 = &VAR_8[0];
    unsigned char VAR_11 = FUNC_1(&VAR_10, 8);
    if (VAR_11 != VAR_7) {
        FUNC_2('-');
        return VAR_1;
    } else {
        FUNC_2('+');
        *VAR_4 = VAR_3;
        *VAR_5 = VAR_9;
        return VAR_2;
    }
}
