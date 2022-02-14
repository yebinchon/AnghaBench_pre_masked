
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int rw_byte; } ;
struct TYPE_7__ {int rw_byte; } ;
struct TYPE_6__ {int txfifo_cnt; } ;
struct TYPE_9__ {TYPE_3__ ahb_fifo; TYPE_2__ fifo; TYPE_1__ status; } ;
typedef TYPE_4__ uart_dev_t ;
struct TYPE_10__ {TYPE_4__* uart; } ;


 TYPE_5__** VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1, int VAR_2)
{
    uart_dev_t* VAR_3 = VAR_0[VAR_1]->uart;
    while (VAR_3->status.txfifo_cnt >= 127) {
        ;
    }





}
