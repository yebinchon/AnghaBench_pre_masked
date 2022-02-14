
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int16_t FUNC_0(int VAR_3, int VAR_4, const int16_t* VAR_5)
{
    int VAR_6, VAR_7, VAR_8;

    if (VAR_5[0] >= 14745) {
        VAR_8 = VAR_2;
    } else if (VAR_5[0] <= 9830) {
        VAR_8 = VAR_1;
    } else {
        VAR_8 = VAR_0;
    }

    for (VAR_6 = 0, VAR_7 = 0; VAR_6 < 6; VAR_6++)
        if (VAR_5[VAR_6] < 9830)
            VAR_7++;

    if (VAR_7 > 2 && !VAR_3)
        VAR_8 = VAR_1;

    if (!VAR_3 && VAR_8 > VAR_4 + 1)
        VAR_8--;

    if (VAR_3 && VAR_8 < VAR_2)
        VAR_8++;

    return VAR_8;
}
