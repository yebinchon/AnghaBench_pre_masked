
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uart_word_length_t ;
typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int bit_num; } ;
struct TYPE_4__ {TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 size_t VAR_3 ;

esp_err_t FUNC_1(uart_port_t VAR_4, uart_word_length_t *VAR_5)
{
    FUNC_0((VAR_4 < VAR_3), "uart_num error", VAR_0);
    *(VAR_5) = VAR_2[VAR_4]->conf0.bit_num;
    return VAR_1;
}
