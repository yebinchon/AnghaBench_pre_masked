
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double* VAR_0 ;

__attribute__((used)) static size_t FUNC_0(double VAR_1)
{
    size_t VAR_2 = 0;
    size_t VAR_3 = 1000;
    size_t VAR_4;

    do {
        VAR_4 = (VAR_2 + VAR_3) / 2;
        if (VAR_1 >= VAR_0[VAR_4]) {
            VAR_2 = VAR_4;
        } else {
            VAR_3 = VAR_4;
        }
    } while (VAR_3 - VAR_2 != 1);

    return VAR_2;
}
