
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_partition_info_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int) ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int,int *) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static esp_err_t FUNC_10(uint32_t VAR_9, bool VAR_10)
{
    esp_err_t VAR_11;
    esp_partition_info_t VAR_12[VAR_7];
    int VAR_13;



    if (VAR_10 || VAR_9 == 0xFF) {
        FUNC_1(VAR_8, "Cannot re-encrypt data (FLASH_CRYPT_CNT 0x%02x write disabled %d", VAR_9, VAR_10);
        return VAR_5;
    }

    if (VAR_9 == 0) {

        VAR_11 = FUNC_9();
        if (VAR_11 != VAR_6) {
            return VAR_11;
        }
    }

    VAR_11 = FUNC_6();
    if (VAR_11 != VAR_6) {
        return VAR_11;
    }

    VAR_11 = FUNC_5(VAR_12, &VAR_13);
    if (VAR_11 != VAR_6) {
        return VAR_11;
    }





    for (int VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
        VAR_11 = FUNC_7(VAR_14, &VAR_12[VAR_14]);
        if (VAR_11 != VAR_6) {
            return VAR_11;
        }
    }

    FUNC_0(VAR_8, "All flash regions checked for encryption pass");


    int VAR_15 = FUNC_4((~VAR_9) & VAR_3);

    uint32_t VAR_16 = VAR_9 + (1 << (VAR_15 - 1));
    FUNC_0(VAR_8, "FLASH_CRYPT_CNT 0x%x -> 0x%x", VAR_9, VAR_16);
    uint32_t VAR_17 = ((VAR_16 & VAR_1) << VAR_2);





    FUNC_3(VAR_0, VAR_17);
    FUNC_8();

    FUNC_2(VAR_8, "Flash encryption completed");

    return VAR_6;
}
