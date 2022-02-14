
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int coll_det_flg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__** VAR_5 ;

esp_err_t FUNC_2(uart_port_t VAR_6, bool *VAR_7)
{
    FUNC_0((VAR_6 < VAR_4), "uart_num error", VAR_0);
    FUNC_0((VAR_7 != ((void*)0)), "wrong parameter pointer", VAR_0);
    FUNC_0((FUNC_1(VAR_6, VAR_3)
                    || FUNC_1(VAR_6, VAR_2)),
                    "wrong mode", VAR_0);
    *VAR_7 = VAR_5[VAR_6]->coll_det_flg;
    return VAR_1;
}
