
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static int FUNC_0(int16_t (*VAR_0)[2], int VAR_1)
{
    int VAR_2;
    VAR_2 = VAR_0[0][0] - VAR_0[-VAR_1][0];
    if(VAR_2 < -3 || VAR_2 > 3)
        return 1;
    VAR_2 = VAR_0[0][1] - VAR_0[-VAR_1][1];
    if(VAR_2 < -3 || VAR_2 > 3)
        return 1;
    return 0;
}
