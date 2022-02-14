
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uart_stop_bits_t ;
typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_4__ {scalar_t__ stop_bit_num; } ;
struct TYPE_5__ {int dl1_en; } ;
struct TYPE_6__ {TYPE_1__ conf0; TYPE_2__ rs485_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;

esp_err_t FUNC_3(uart_port_t VAR_8, uart_stop_bits_t VAR_9)
{
    FUNC_0((VAR_8 < VAR_3), "uart_num error", VAR_0);
    FUNC_0((VAR_9 < VAR_6), "stop bit error", VAR_0);

    FUNC_1(&VAR_7[VAR_8]);
    VAR_2[VAR_8]->conf0.stop_bit_num = VAR_9;
    FUNC_2(&VAR_7[VAR_8]);
    return VAR_1;
}
