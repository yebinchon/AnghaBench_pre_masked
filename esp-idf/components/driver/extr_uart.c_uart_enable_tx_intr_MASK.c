
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_6__ {int txfifo_empty; } ;
struct TYPE_5__ {int txfifo_empty_thrhd; } ;
struct TYPE_7__ {int txfifo_empty; } ;
struct TYPE_8__ {TYPE_2__ int_ena; TYPE_1__ conf1; TYPE_3__ int_clr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

esp_err_t FUNC_3(uart_port_t VAR_7, int VAR_8, int VAR_9)
{
    FUNC_0((VAR_7 < VAR_4), "uart_num error", VAR_0);
    FUNC_0((VAR_9 < VAR_3), "empty intr threshold error", VAR_0);
    FUNC_1(&VAR_6[VAR_7]);
    VAR_2[VAR_7]->int_clr.txfifo_empty = 1;
    VAR_2[VAR_7]->conf1.txfifo_empty_thrhd = VAR_9 & VAR_5;
    VAR_2[VAR_7]->int_ena.txfifo_empty = VAR_8 & 0x1;
    FUNC_2(&VAR_6[VAR_7]);
    return VAR_1;
}
