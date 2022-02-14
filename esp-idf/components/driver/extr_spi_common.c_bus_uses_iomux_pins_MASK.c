
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t spi_host_device_t ;
struct TYPE_4__ {scalar_t__ sclk_io_num; scalar_t__ quadwp_io_num; scalar_t__ quadhd_io_num; scalar_t__ mosi_io_num; scalar_t__ miso_io_num; } ;
typedef TYPE_1__ spi_bus_config_t ;
struct TYPE_5__ {scalar_t__ spiclk_iomux_pin; scalar_t__ spiwp_iomux_pin; scalar_t__ spihd_iomux_pin; scalar_t__ spid_iomux_pin; scalar_t__ spiq_iomux_pin; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static bool FUNC_0(spi_host_device_t VAR_1, const spi_bus_config_t* VAR_2)
{
    if (VAR_2->sclk_io_num>=0 &&
        VAR_2->sclk_io_num != VAR_0[VAR_1].spiclk_iomux_pin) return 0;
    if (VAR_2->quadwp_io_num>=0 &&
        VAR_2->quadwp_io_num != VAR_0[VAR_1].spiwp_iomux_pin) return 0;
    if (VAR_2->quadhd_io_num>=0 &&
        VAR_2->quadhd_io_num != VAR_0[VAR_1].spihd_iomux_pin) return 0;
    if (VAR_2->mosi_io_num >= 0 &&
        VAR_2->mosi_io_num != VAR_0[VAR_1].spid_iomux_pin) return 0;
    if (VAR_2->miso_io_num>=0 &&
        VAR_2->miso_io_num != VAR_0[VAR_1].spiq_iomux_pin) return 0;

    return 1;
}
