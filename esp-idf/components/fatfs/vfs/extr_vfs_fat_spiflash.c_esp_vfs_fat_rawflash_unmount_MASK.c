
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_partition_t ;
typedef int esp_err_t ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int) ;

esp_err_t FUNC_6(const char *VAR_5, const char* VAR_6)
{
    const esp_partition_t *VAR_7 = FUNC_1(VAR_3,
            VAR_2, VAR_6);

    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_4, "Failed to find FATFS partition (type='data', subtype='fat', partition_label='%s'). Check the partition table.", VAR_6);
        return VAR_1;
    }

    BYTE VAR_8 = FUNC_4(VAR_7);
    if (VAR_8 == 0xff) {
        return VAR_0;
    }
    char VAR_9[3] = {(char)('0' + VAR_8), ':', 0};

    FUNC_3(0, VAR_9, 0);
    FUNC_5(VAR_8);
    esp_err_t VAR_10 = FUNC_2(VAR_5);
    return VAR_10;
}
