
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_9__ {int pre_idle_num; } ;
struct TYPE_8__ {int post_idle_num; } ;
struct TYPE_7__ {int rx_gap_tout; } ;
struct TYPE_6__ {char data; int char_num; } ;
struct TYPE_10__ {TYPE_4__ at_cmd_precnt; TYPE_3__ at_cmd_postcnt; TYPE_2__ at_cmd_gaptout; TYPE_1__ at_cmd_char; } ;


 int VAR_0 ;
 TYPE_5__** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (size_t,int*) ;

esp_err_t FUNC_4(uart_port_t VAR_7, char VAR_8, uint8_t VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    FUNC_0((VAR_7 < VAR_3), "uart_num error", VAR_0);
    FUNC_0(VAR_10 >= 0 && VAR_10 <= VAR_6, "uart pattern set error\n", VAR_0);
    FUNC_0(VAR_11 >= 0 && VAR_11 <= VAR_4, "uart pattern set error\n", VAR_0);
    FUNC_0(VAR_12 >= 0 && VAR_12 <= VAR_5, "uart pattern set error\n", VAR_0);
    VAR_1[VAR_7]->at_cmd_char.data = VAR_8;
    VAR_1[VAR_7]->at_cmd_char.char_num = VAR_9;
    return FUNC_2(VAR_7, VAR_2);
}
