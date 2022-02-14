
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int slot; int (* io_int_wait ) (int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ host; } ;
typedef TYPE_2__ sdmmc_card_t ;
typedef int esp_err_t ;
typedef int TickType_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

esp_err_t FUNC_1(sdmmc_card_t* VAR_1, TickType_t VAR_2)
{
    if (VAR_1->host.io_int_wait == ((void*)0)) {
        return VAR_0;
    }
    return (*VAR_1->host.io_int_wait)(VAR_1->host.slot, VAR_2);
}
