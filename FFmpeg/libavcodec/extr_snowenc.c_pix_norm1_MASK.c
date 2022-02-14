
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static int FUNC_0(uint8_t * VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    const uint32_t *VAR_7 = VAR_0 + 256;

    VAR_4 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 ++) {
            VAR_4 += VAR_7[VAR_1[0]];
            VAR_1 ++;
        }
        VAR_1 += VAR_2 - VAR_3;
    }
    return VAR_4;
}
