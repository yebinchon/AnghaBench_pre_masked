
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ esp_rom_spiflash_result_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_8 ;

esp_rom_spiflash_result_t FUNC_10(void)
{
    uint32_t VAR_9;

    FUNC_8(&VAR_8);

    if (FUNC_7(&VAR_8, &VAR_9) != VAR_2) {
        return VAR_1;
    }




    VAR_9 &= VAR_0;

    FUNC_8(&VAR_8);
    FUNC_8(&VAR_8);





    if (FUNC_9(&VAR_8, VAR_9) != VAR_2) {
        return VAR_1;
    }

    return VAR_2;
}
