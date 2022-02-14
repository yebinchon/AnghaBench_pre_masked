
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uart_port_t ;
typedef int uart_parity_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int val; } ;
struct TYPE_4__ {TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

esp_err_t FUNC_1(uart_port_t VAR_9, uart_parity_t *VAR_10)
{
    FUNC_0((VAR_9 < VAR_3), "uart_num error", VAR_0);
    int VAR_11 = VAR_2[VAR_9]->conf0.val;
    if (VAR_11 & VAR_5) {
        if (VAR_11 & VAR_7) {
            (*VAR_10) = VAR_8;
        } else {
            (*VAR_10) = VAR_6;
        }
    } else {
        (*VAR_10) = VAR_4;
    }
    return VAR_1;
}
