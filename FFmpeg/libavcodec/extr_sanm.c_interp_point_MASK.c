
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;



__attribute__((used)) static void FUNC_0(int8_t *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                         int VAR_5, int VAR_6)
{
    if (VAR_6) {
        VAR_0[0] = (VAR_1 * VAR_5 + VAR_3 * (VAR_6 - VAR_5) + (VAR_6 >> 1)) / VAR_6;
        VAR_0[1] = (VAR_2 * VAR_5 + VAR_4 * (VAR_6 - VAR_5) + (VAR_6 >> 1)) / VAR_6;
    } else {
        VAR_0[0] = VAR_1;
        VAR_0[1] = VAR_2;
    }
}
