
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static uint32_t FUNC_1(int VAR_0, int VAR_1, uint8_t* VAR_2, int* VAR_3)
{
    uint32_t VAR_4 = 0;
    uint32_t VAR_5;
    int VAR_6 = (*VAR_3) % 8;
    if (VAR_6 != 0) {
        VAR_5 = VAR_2[(*VAR_3) / 8] >> VAR_6;
        VAR_6 = ((8 - VAR_6) < VAR_1) ? (8 - VAR_6) : VAR_1;
        VAR_4 = VAR_5 & FUNC_0(VAR_6, 0);
        (*VAR_3) += VAR_6;
        VAR_1 -= VAR_6;
    }

    int VAR_7 = VAR_6;
    while (VAR_1 > 0) {
        VAR_5 = VAR_2[(*VAR_3) / 8];
        VAR_6 = (VAR_1 > 8) ? 8 : VAR_1;
        VAR_4 |= (VAR_5 & FUNC_0(VAR_6, 0)) << VAR_7;
        (*VAR_3) += VAR_6;
        VAR_1 -= VAR_6;
        VAR_7 += 8;
    };
    return VAR_4 << VAR_0;
}
