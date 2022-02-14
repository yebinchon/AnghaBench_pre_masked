
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
struct TYPE_5__ {int div_int; int div_frag; } ;
struct TYPE_4__ {scalar_t__ tick_ref_always_on; } ;
struct TYPE_6__ {TYPE_2__ clk_div; TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__** VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_5 ;
 int FUNC_3 () ;
 int * VAR_6 ;

esp_err_t FUNC_4(uart_port_t VAR_7, uint32_t VAR_8)
{
    FUNC_0((VAR_7 < VAR_5), "uart_num error", VAR_1);
    esp_err_t VAR_9 = VAR_2;
    FUNC_1(&VAR_6[VAR_7]);
    int VAR_10;
    if (VAR_4[VAR_7]->conf0.tick_ref_always_on == 0) {

        VAR_10 = VAR_3;
    } else {
        VAR_10 = FUNC_3();
    }
    uint32_t VAR_11 = (((VAR_10) << 4) / VAR_8);
    if (VAR_11 < 16) {

        VAR_9 = VAR_0;
    } else {
        VAR_4[VAR_7]->clk_div.div_int = VAR_11 >> 4;
        VAR_4[VAR_7]->clk_div.div_frag = VAR_11 & 0xf;
    }
    FUNC_2(&VAR_6[VAR_7]);
    return VAR_9;
}
