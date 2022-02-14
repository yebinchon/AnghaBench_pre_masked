
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

UINT8 FUNC_0(UINT16 VAR_2, char *VAR_3)
{
    UINT16 VAR_4, VAR_5;
    char *VAR_6 = VAR_3;
    BOOLEAN VAR_7 = VAR_0;

    if (VAR_2 == 0) {

        *VAR_6++ = '0';
    } else {
        for (VAR_4 = 10000; VAR_4 > 0; VAR_4 /= 10) {
            VAR_5 = VAR_2 / VAR_4;
            VAR_2 %= VAR_4;
            if (VAR_5 > 0 || VAR_7) {
                *VAR_6++ = VAR_5 + '0';
                VAR_7 = VAR_1;
            }
        }
    }
    *VAR_6 = 0;
    return (UINT8) (VAR_6 - VAR_3);
}
