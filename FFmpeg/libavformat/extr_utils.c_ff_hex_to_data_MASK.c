
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (char const*,int ) ;

int FUNC_2(uint8_t *VAR_1, const char *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;

    VAR_4 = 0;
    VAR_5 = 1;
    for (;;) {
        VAR_2 += FUNC_1(VAR_2, VAR_0);
        if (*VAR_2 == '\0')
            break;
        VAR_3 = FUNC_0((unsigned char) *VAR_2++);
        if (VAR_3 >= '0' && VAR_3 <= '9')
            VAR_3 = VAR_3 - '0';
        else if (VAR_3 >= 'A' && VAR_3 <= 'F')
            VAR_3 = VAR_3 - 'A' + 10;
        else
            break;
        VAR_5 = (VAR_5 << 4) | VAR_3;
        if (VAR_5 & 0x100) {
            if (VAR_1)
                VAR_1[VAR_4] = VAR_5;
            VAR_4++;
            VAR_5 = 1;
        }
    }
    return VAR_4;
}
