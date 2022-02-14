
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int queue_size; int flags; int spics_io_num; int mode; } ;
typedef TYPE_1__ spi_slave_interface_config_t ;
struct TYPE_6__ {int sclk_io_num; int miso_io_num; int mosi_io_num; } ;
typedef TYPE_2__ spi_bus_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(void)
{

    spi_bus_config_t VAR_6={
        .mosi_io_num=VAR_4,
        .miso_io_num=VAR_3,
        .sclk_io_num=VAR_1
    };

    spi_slave_interface_config_t VAR_7={
        .mode=0,
        .spics_io_num=VAR_2,
        .queue_size=3,
        .flags=0,
    };

    FUNC_1(VAR_4, VAR_0);
    FUNC_1(VAR_1, VAR_0);
    FUNC_1(VAR_2, VAR_0);

    FUNC_0( FUNC_2(VAR_5, &VAR_6, &VAR_7, 2) );
}
