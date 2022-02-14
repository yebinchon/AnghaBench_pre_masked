
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_6__ {int tx_brk_done; } ;
struct TYPE_9__ {int tx_brk_done; } ;
struct TYPE_8__ {int txd_brk; } ;
struct TYPE_7__ {int tx_brk_num; } ;
struct TYPE_10__ {TYPE_1__ int_ena; TYPE_4__ int_clr; TYPE_3__ conf0; TYPE_2__ idle_conf; } ;


 int VAR_0 ;
 TYPE_5__** VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static esp_err_t FUNC_2(uart_port_t VAR_3, int VAR_4)
{
    FUNC_0(&VAR_2[VAR_3]);
    VAR_1[VAR_3]->idle_conf.tx_brk_num = VAR_4;
    VAR_1[VAR_3]->conf0.txd_brk = 1;
    VAR_1[VAR_3]->int_clr.tx_brk_done = 1;
    VAR_1[VAR_3]->int_ena.tx_brk_done = 1;
    FUNC_1(&VAR_2[VAR_3]);
    return VAR_0;
}
