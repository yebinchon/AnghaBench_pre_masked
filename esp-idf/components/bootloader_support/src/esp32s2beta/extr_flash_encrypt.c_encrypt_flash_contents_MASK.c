
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_partition_info_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int,int) ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static esp_err_t FUNC_11(uint32_t VAR_7, bool VAR_8)
{
    esp_err_t VAR_9;
    esp_partition_info_t VAR_10[VAR_4];
    int VAR_11;



    if (VAR_8 || VAR_7 == VAR_1) {
        FUNC_1(VAR_6, "Cannot re-encrypt data (SPI_BOOT_CRYPT_CNT 0x%02x write disabled %d", VAR_7, VAR_8);
        return VAR_2;
    }

    if (VAR_7 == 0) {

        VAR_9 = FUNC_10();
        if (VAR_9 != VAR_3) {
            return VAR_9;
        }
    }

    VAR_9 = FUNC_6();
    if (VAR_9 != VAR_3) {
        return VAR_9;
    }

    VAR_9 = FUNC_5(VAR_10, &VAR_11);
    if (VAR_9 != VAR_3) {
        return VAR_9;
    }





    for (int VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
        VAR_9 = FUNC_7(VAR_12, &VAR_10[VAR_12]);
        if (VAR_9 != VAR_3) {
            return VAR_9;
        }
    }

    FUNC_0(VAR_6, "All flash regions checked for encryption pass");


    int VAR_13 = FUNC_4((~VAR_7) & 0x7);

    uint32_t VAR_14 = VAR_7 + (1 << (VAR_13 - 1));
    FUNC_0(VAR_6, "SPI_BOOT_CRYPT_CNT 0x%x -> 0x%x", VAR_7, VAR_14);

    FUNC_8();
    FUNC_3(VAR_0, VAR_1, VAR_14);
    FUNC_9(VAR_5);

    FUNC_2(VAR_6, "Flash encryption completed");

    return VAR_3;
}
