
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_err_t ;
typedef int esp_efuse_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int,size_t*) ;
 int FUNC_3 (int ,unsigned int,int) ;

esp_err_t FUNC_4(unsigned int VAR_2, esp_efuse_block_t VAR_3, int VAR_4, int VAR_5, void* VAR_6, int* VAR_7)
{
    esp_err_t VAR_8 = VAR_0;
    uint32_t VAR_9 = FUNC_0(VAR_3, VAR_2);
    size_t* VAR_10 = (size_t*)VAR_6;
    uint32_t VAR_11 = FUNC_1(VAR_5, VAR_4);
    uint32_t VAR_12 = VAR_9 & VAR_11;
    if ((VAR_12 ^ VAR_11) != 0) {
        uint32_t VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_12, VAR_10);
        FUNC_3(VAR_3, VAR_2, VAR_13);
    }
    *VAR_7 += VAR_5;
    if ((*VAR_10) == 0) {
        VAR_8 = VAR_1;
    }
    return VAR_8;
}
