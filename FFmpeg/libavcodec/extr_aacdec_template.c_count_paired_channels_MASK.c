
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(uint8_t (*VAR_3)[3], int VAR_4, int VAR_5,
                                 int *VAR_6)
{
    int VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10;
    for (VAR_10 = *VAR_6; VAR_10 < VAR_4; VAR_10++) {
        if (VAR_3[VAR_10][2] != VAR_5)
            break;
        if (VAR_3[VAR_10][0] == VAR_2) {
            if (VAR_9) {
                if (VAR_5 == VAR_0 && !VAR_8) {
                    VAR_9 = 0;
                } else {
                    return -1;
                }
            }
            VAR_7 += 2;
            VAR_8 = 1;
        } else {
            VAR_7++;
            VAR_9 ^= 1;
        }
    }
    if (VAR_9 &&
        ((VAR_5 == VAR_0 && VAR_8) || VAR_5 == VAR_1))
        return -1;
    *VAR_6 = VAR_10;
    return VAR_7;
}
