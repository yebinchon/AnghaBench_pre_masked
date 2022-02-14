
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_partition_info_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int *,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *,int,int*) ;

__attribute__((used)) static esp_err_t FUNC_5(esp_partition_info_t *VAR_6, int *VAR_7)
{
    esp_err_t VAR_8;

    VAR_8 = FUNC_2(VAR_3, VAR_6, VAR_2, 0);
    if (VAR_8 != VAR_1) {
        FUNC_1(VAR_5, "Failed to read partition table data");
        return VAR_8;
    }
    if (FUNC_4(VAR_6, 0, VAR_7) == VAR_1) {
        FUNC_0(VAR_5, "partition table is plaintext. Encrypting...");
        esp_err_t VAR_9 = FUNC_3(VAR_3,
                                                 VAR_4);
        if (VAR_9 != VAR_1) {
            FUNC_1(VAR_5, "Failed to encrypt partition table in place. %x", VAR_9);
            return VAR_9;
        }
    }
    else {
        FUNC_1(VAR_5, "Failed to read partition table data - not plaintext?");
        return VAR_0;
    }


    return VAR_1;
}
