
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;

__attribute__((used)) static float FUNC_0(float VAR_1)
{
    float VAR_2, VAR_3, VAR_4;

    VAR_2 = VAR_1 / 3.0;
    VAR_4 = 1;

    if (VAR_1 <= 0) {
        return 0;
    }

    do {
        VAR_3 = VAR_2;
        VAR_2 = (VAR_2 + VAR_1 / VAR_2) / 2.0;
        VAR_4 = VAR_2 - VAR_3;
    } while (VAR_4 > VAR_0 || VAR_4 < -VAR_0);

    return VAR_2;
}
