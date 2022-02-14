
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t i2s_port_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int rx_fifo_reset; int tx_fifo_reset; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 size_t VAR_3 ;

__attribute__((used)) static esp_err_t FUNC_3(i2s_port_t VAR_4)
{
    FUNC_0((VAR_4 < VAR_3), "i2s_num error", VAR_0);
    FUNC_1();
    VAR_2[VAR_4]->conf.rx_fifo_reset = 1;
    VAR_2[VAR_4]->conf.rx_fifo_reset = 0;
    VAR_2[VAR_4]->conf.tx_fifo_reset = 1;
    VAR_2[VAR_4]->conf.tx_fifo_reset = 0;
    FUNC_2();
    return VAR_1;
}
