
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(uint8_t* VAR_1, int VAR_2, int* VAR_3)
{
    int VAR_4 = *VAR_3;
    if (VAR_4 == -1) {

        VAR_4 += VAR_1[0] + 2;
    }
    FUNC_0(VAR_4 >= 0);
    while (1) {
        if (VAR_4 < VAR_2) {

            if (VAR_1[VAR_4] == VAR_0) {
                *VAR_3 = VAR_4 + 1;
                return 1;
            }
        }
        if (VAR_4 + 1 < VAR_2) {
            VAR_4 += VAR_1[VAR_4+1] + 2;
        } else {
            break;
        }
    }
    *VAR_3 = VAR_4;
    return 0;
}
