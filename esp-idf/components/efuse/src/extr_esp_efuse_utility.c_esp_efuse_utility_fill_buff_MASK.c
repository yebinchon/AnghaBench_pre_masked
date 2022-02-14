
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int esp_err_t ;
typedef int esp_efuse_block_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int,int ) ;

esp_err_t FUNC_2(unsigned int VAR_1, esp_efuse_block_t VAR_2, int VAR_3, int VAR_4, void* VAR_5, int* VAR_6)
{
    uint8_t* VAR_7 = (uint8_t *) VAR_5;
    uint32_t VAR_8 = FUNC_0(VAR_2, VAR_1);
    uint64_t VAR_9 = (VAR_8 >> VAR_3) & FUNC_1(VAR_4, 0);

    int VAR_10 = (*VAR_6) % 8;
    if (VAR_10 != 0) {
        VAR_7[(*VAR_6) / 8] |= (uint8_t)(VAR_9 << VAR_10);
        VAR_10 = ((8 - VAR_10) < VAR_4) ? (8 - VAR_10) : VAR_4;
        (*VAR_6) += VAR_10;
        VAR_4 -= VAR_10;
    }

    int VAR_11 = 0;
    while (VAR_4 > 0) {
        VAR_11 += VAR_10;
        VAR_7[(*VAR_6) / 8] |= (uint8_t)(VAR_9 >> VAR_11);
        VAR_10 = (VAR_4 > 8) ? 8 : VAR_4;
        (*VAR_6) += VAR_10;
        VAR_4 -= VAR_10;
    };
    return VAR_0;
}
