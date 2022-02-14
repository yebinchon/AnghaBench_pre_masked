
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int const**,int) ;

__attribute__((used)) static uint16_t FUNC_1(const uint8_t **VAR_0, uint32_t *VAR_1,
                           int *VAR_2, int VAR_3)
{
    if (*VAR_2)
        (*VAR_2)--;
    else {
        *VAR_1 = FUNC_0(VAR_0, VAR_3);
        *VAR_2 = 7;
    }

    switch (*VAR_2){
    case 7: return *VAR_1 & 0xFFF;
    case 6: return (*VAR_1 >> 12) & 0xFFF;
    case 5: {
            uint32_t VAR_4 = *VAR_1 >> 24;
            *VAR_1 = FUNC_0(VAR_0, VAR_3);
            VAR_4 |= *VAR_1 << 8;
            return VAR_4 & 0xFFF;
            }
    case 4: return (*VAR_1 >> 4) & 0xFFF;
    case 3: return (*VAR_1 >> 16) & 0xFFF;
    case 2: {
            uint32_t VAR_5 = *VAR_1 >> 28;
            *VAR_1 = FUNC_0(VAR_0, VAR_3);
            VAR_5 |= *VAR_1 << 4;
            return VAR_5 & 0xFFF;
            }
    case 1: return (*VAR_1 >> 8) & 0xFFF;
    default: return *VAR_1 >> 20;
    }
}
