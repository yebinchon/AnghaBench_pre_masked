
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int reg_spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

esp_err_t FUNC_4(int VAR_3, uint8_t VAR_4)
{
    if (VAR_3 >= 28 && VAR_3 <= 31) {
        FUNC_1("interrupt reg, please use sdio_slave_clear_int");
        return VAR_0;
    }
    if (VAR_3 < 0 || VAR_3 >= 64) {
        FUNC_1("write register address wrong");
        return VAR_0;
    }
    uint32_t VAR_5 = FUNC_0(VAR_3) & (~3);
    uint32_t VAR_6 = (VAR_3 % 4)*8;

    FUNC_2(&VAR_2.reg_spinlock);
    int VAR_7 = *(uint32_t*)VAR_5;
    *(uint32_t*)VAR_5 = (VAR_7 & ~(0xff << VAR_6)) | (VAR_4<<VAR_6);
    FUNC_3(&VAR_2.reg_spinlock);
    return VAR_1;
}
