
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

int FUNC_3(char *VAR_0, char *VAR_1)
{
    int VAR_2 = -1;

    uint16_t VAR_3 = FUNC_2(VAR_0);

    if (VAR_3 > 2) {
        if (VAR_0[0] == '0' && VAR_0[1] == 'x') {
            VAR_1[(VAR_3 - 2) / 2] = 0;
            VAR_2 = FUNC_0(&VAR_0[2], (uint8_t *)VAR_1, (VAR_3 - 2) / 2);
            VAR_3 = (VAR_3 - 2) / 2;
        } else {
            FUNC_1(VAR_1, VAR_0);
            VAR_2 = 0;
        }
    } else {
        FUNC_1(VAR_1, VAR_0);
        VAR_2 = 0;
    }
    return VAR_2;
}
