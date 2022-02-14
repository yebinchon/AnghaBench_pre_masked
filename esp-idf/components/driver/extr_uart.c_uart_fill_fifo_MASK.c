
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef size_t uart_port_t ;
struct TYPE_6__ {int tx_done; } ;
struct TYPE_5__ {scalar_t__ sw_rts; } ;
struct TYPE_7__ {scalar_t__ txfifo_cnt; } ;
struct TYPE_8__ {TYPE_2__ int_ena; TYPE_1__ conf0; TYPE_3__ status; } ;


 TYPE_4__** VAR_0 ;
 int FUNC_0 (size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char const) ;

__attribute__((used)) static int FUNC_3(uart_port_t VAR_3, const char *VAR_4, uint32_t VAR_5)
{
    uint8_t VAR_6 = 0;
    uint8_t VAR_7 = VAR_0[VAR_3]->status.txfifo_cnt;
    uint8_t VAR_8 = (VAR_1 - VAR_7);
    uint8_t VAR_9 = (VAR_5 >= VAR_8 ? VAR_8 : VAR_5);

    if (FUNC_1(VAR_3, VAR_2)) {
        VAR_0[VAR_3]->conf0.sw_rts = 0;
        VAR_0[VAR_3]->int_ena.tx_done = 1;
    }
    for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
        FUNC_2(FUNC_0(VAR_3), VAR_4[VAR_6]);
    }
    return VAR_9;
}
