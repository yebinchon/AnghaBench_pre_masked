
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(uint8_t *VAR_1, int VAR_2)
{
    int VAR_3 = 0, VAR_4, VAR_5;
    const uint32_t *VAR_6 = VAR_0 + 256;

    for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < 16; VAR_5 += 8) {
            register uint32_t VAR_7 = *(uint32_t *) VAR_1;
            VAR_3 += VAR_6[VAR_7 & 0xff];
            VAR_3 += VAR_6[(VAR_7 >> 8) & 0xff];
            VAR_3 += VAR_6[(VAR_7 >> 16) & 0xff];
            VAR_3 += VAR_6[(VAR_7 >> 24) & 0xff];
            VAR_7 = *(uint32_t *) (VAR_1 + 4);
            VAR_3 += VAR_6[VAR_7 & 0xff];
            VAR_3 += VAR_6[(VAR_7 >> 8) & 0xff];
            VAR_3 += VAR_6[(VAR_7 >> 16) & 0xff];
            VAR_3 += VAR_6[(VAR_7 >> 24) & 0xff];

            VAR_1 += 8;
        }
        VAR_1 += VAR_2 - 16;
    }
    return VAR_3;
}
