
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uart_port_t ;
typedef void* tout_thresh ;
typedef int esp_err_t ;
struct TYPE_7__ {int rx_tout_thrhd; int rx_tout_en; } ;
struct TYPE_6__ {void* rx_tout_thrhd; } ;
struct TYPE_5__ {scalar_t__ tick_ref_always_on; } ;
struct TYPE_8__ {TYPE_3__ conf1; TYPE_2__ mem_conf; TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int * VAR_6 ;

esp_err_t FUNC_3(uart_port_t VAR_7, const uint8_t VAR_8)
{
    FUNC_0((VAR_7 < VAR_3), "uart_num error", VAR_0);
    FUNC_0((VAR_8 < 127), "tout_thresh max value is 126", VAR_0);
    FUNC_1(&VAR_6[VAR_7]);


    if (VAR_8 > 0) {
        VAR_2[VAR_7]->conf1.rx_tout_en = 1;
    } else {
        VAR_2[VAR_7]->conf1.rx_tout_en = 0;
    }
    FUNC_2(&VAR_6[VAR_7]);
    return VAR_1;
}
