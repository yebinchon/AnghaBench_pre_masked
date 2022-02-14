
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rw_byte; } ;
struct TYPE_5__ {scalar_t__ rxfifo_cnt; } ;
struct TYPE_7__ {TYPE_2__ fifo; TYPE_1__ status; } ;
typedef TYPE_3__ uart_dev_t ;
struct TYPE_8__ {TYPE_3__* uart; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_4__** VAR_1 ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
    uart_dev_t* VAR_3 = VAR_1[VAR_2]->uart;
    if (VAR_3->status.rxfifo_cnt == 0) {
        return VAR_0;
    }





}
