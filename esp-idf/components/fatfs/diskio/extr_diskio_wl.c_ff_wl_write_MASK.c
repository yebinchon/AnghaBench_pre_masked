
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wl_handle_t ;
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
 int FUNC_2 (scalar_t__) ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int,size_t const*,int) ;

DRESULT FUNC_6 (BYTE VAR_5, const BYTE *VAR_6, DWORD VAR_7, UINT VAR_8)
{
    FUNC_1(VAR_3, "ff_wl_write - pdrv=%i, sector=%i, count=%i\n", (unsigned int)VAR_5, (unsigned int)VAR_7, (unsigned int)VAR_8);
    wl_handle_t VAR_9 = VAR_4[VAR_5];
    FUNC_2(VAR_9 + 1);
    esp_err_t VAR_10 = FUNC_3(VAR_9, VAR_7 * FUNC_4(VAR_9), VAR_8 * FUNC_4(VAR_9));
    if (VAR_10 != VAR_0) {
        FUNC_0(VAR_3, "wl_erase_range failed (%d)", VAR_10);
        return VAR_1;
    }
    VAR_10 = FUNC_5(VAR_9, VAR_7 * FUNC_4(VAR_9), VAR_6, VAR_8 * FUNC_4(VAR_9));
    if (VAR_10 != VAR_0) {
        FUNC_0(VAR_3, "wl_write failed (%d)", VAR_10);
        return VAR_1;
    }
    return VAR_2;
}
