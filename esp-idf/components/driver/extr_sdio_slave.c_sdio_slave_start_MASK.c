
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {int sdio_ioready1; } ;
struct TYPE_8__ {TYPE_2__ cfg_data1; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_7__ {TYPE_1__ slc0_int_clr; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

esp_err_t FUNC_2(void)
{
    esp_err_t VAR_4;
    VAR_2.slc0_int_clr.val = VAR_3;
    VAR_4 = FUNC_1();
    if (VAR_4 != VAR_0) return VAR_4;
    VAR_4 = FUNC_0();
    if (VAR_4 != VAR_0) return VAR_4;
    VAR_1.cfg_data1.sdio_ioready1 = 1;
    return VAR_0;
}
