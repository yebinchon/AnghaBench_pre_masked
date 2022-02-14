
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_partition_t ;
typedef scalar_t__ esp_err_t ;
typedef int UINT ;
typedef int DWORD ;
typedef int DRESULT ;
typedef size_t BYTE ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*,int,size_t*,int) ;
 int ** VAR_5 ;

DRESULT FUNC_4 (BYTE VAR_6, BYTE *VAR_7, DWORD VAR_8, UINT VAR_9)
{
    FUNC_1(VAR_4, "ff_raw_read - pdrv=%i, sector=%i, count=%in", (unsigned int)VAR_6, (unsigned int)VAR_8, (unsigned int)VAR_9);
    const esp_partition_t* VAR_10 = VAR_5[VAR_6];
    FUNC_2(VAR_10);
    esp_err_t VAR_11 = FUNC_3(VAR_10, VAR_8 * VAR_3, VAR_7, VAR_9 * VAR_3);
    if (VAR_11 != VAR_0) {
        FUNC_0(VAR_4, "esp_partition_read failed (0x%x)", VAR_11);
        return VAR_1;
    }
    return VAR_2;
}
