
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, ptrdiff_t VAR_1)
{
    int VAR_2 = 0, VAR_3 = 0;
    int VAR_4, VAR_5;

    for (VAR_4=0; VAR_4<8; VAR_4+=2) {
        for (VAR_5=0; VAR_5<8; VAR_5+=2) {
            VAR_2 += VAR_0[VAR_5];
            VAR_3 += VAR_0[VAR_5]*VAR_0[VAR_5];
        }
        VAR_0 += 2*VAR_1;
    }
    return (16*VAR_3 - VAR_2*VAR_2) >> 8;
}
