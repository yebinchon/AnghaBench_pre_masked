
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t i2s_port_t ;
typedef int esp_err_t ;
struct TYPE_3__ {scalar_t__ out_dscr_err; scalar_t__ out_eof; } ;
struct TYPE_4__ {TYPE_1__ int_ena; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

esp_err_t FUNC_2(i2s_port_t VAR_2)
{
    FUNC_0();
    VAR_1[VAR_2]->int_ena.out_eof = 0;
    VAR_1[VAR_2]->int_ena.out_dscr_err = 0;
    FUNC_1();
    return VAR_0;
}
