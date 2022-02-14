
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t i2s_port_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int in_suc_eof; int in_dscr_err; } ;
struct TYPE_4__ {TYPE_1__ int_ena; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

esp_err_t FUNC_2(i2s_port_t VAR_2)
{

    FUNC_0();
    VAR_1[VAR_2]->int_ena.in_suc_eof = 1;
    VAR_1[VAR_2]->int_ena.in_dscr_err = 1;
    FUNC_1();
    return VAR_0;
}
