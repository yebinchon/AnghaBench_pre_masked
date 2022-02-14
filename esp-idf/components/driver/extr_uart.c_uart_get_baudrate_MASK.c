
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_4__ {scalar_t__ tick_ref_always_on; } ;
struct TYPE_5__ {int div_int; int div_frag; } ;
struct TYPE_6__ {TYPE_1__ conf0; TYPE_2__ clk_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__** VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_4 ;
 int FUNC_3 () ;
 int * VAR_5 ;

esp_err_t FUNC_4(uart_port_t VAR_6, uint32_t *VAR_7)
{
    FUNC_0((VAR_6 < VAR_4), "uart_num error", VAR_0);
    FUNC_1(&VAR_5[VAR_6]);
    uint32_t VAR_8 = (VAR_3[VAR_6]->clk_div.div_int << 4) | VAR_3[VAR_6]->clk_div.div_frag;
    FUNC_2(&VAR_5[VAR_6]);
    uint32_t VAR_9 = FUNC_3();
    if (VAR_3[VAR_6]->conf0.tick_ref_always_on == 0) {
        VAR_9 = VAR_2;
    }
    (*VAR_7) = ((VAR_9) << 4) / VAR_8;
    return VAR_1;
}
