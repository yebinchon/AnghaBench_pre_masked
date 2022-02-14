
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_9__ {void* xoff_char; scalar_t__ xoff_threshold; } ;
struct TYPE_8__ {void* xon_char; scalar_t__ xon_threshold; } ;
struct TYPE_7__ {void* xoff_char; void* xon_char; scalar_t__ xoff_threshold; scalar_t__ xon_threshold; } ;
struct TYPE_6__ {int sw_flow_con_en; int xonoff_del; } ;
struct TYPE_10__ {TYPE_4__ swfc_conf0; TYPE_3__ swfc_conf1; TYPE_2__ swfc_conf; TYPE_1__ flow_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int * VAR_7 ;

esp_err_t FUNC_3(uart_port_t VAR_8, bool VAR_9, uint8_t VAR_10, uint8_t VAR_11)
{
    FUNC_0((VAR_8 < VAR_4), "uart_num error", VAR_0);
    FUNC_0((VAR_10 < VAR_3), "rx flow xon thresh error", VAR_0);
    FUNC_0((VAR_11 < VAR_3), "rx flow xon thresh error", VAR_0);
    FUNC_1(&VAR_7[VAR_8]);
    VAR_2[VAR_8]->flow_conf.sw_flow_con_en = VAR_9 ? 1 : 0;
    VAR_2[VAR_8]->flow_conf.xonoff_del = VAR_9 ? 1 : 0;
    FUNC_2(&VAR_7[VAR_8]);
    return VAR_1;
}
