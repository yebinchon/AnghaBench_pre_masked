
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int,int,int ,void const**,scalar_t__*) ;

const void *FUNC_2(uint32_t VAR_5, uint32_t VAR_6)
{
    if (VAR_4) {
        FUNC_0(VAR_3, "tried to bootloader_mmap twice");
        return ((void*)0);
    }
    const void *VAR_7 = ((void*)0);
    uint32_t VAR_8 = VAR_5 & ~(VAR_2 - 1);
    VAR_6 += (VAR_5 - VAR_8);
    esp_err_t VAR_9 = FUNC_1(VAR_8, VAR_6, VAR_1, &VAR_7, &VAR_4);
    if (VAR_9 != VAR_0) {
        FUNC_0(VAR_3, "spi_flash_mmap failed: 0x%x", VAR_9);
        return ((void*)0);
    }
    return (void *)((intptr_t)VAR_7 + (VAR_5 - VAR_8));
}
