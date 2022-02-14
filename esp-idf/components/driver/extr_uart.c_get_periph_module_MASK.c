
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uart_port_t ;
typedef int periph_module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static periph_module_t FUNC_1(uart_port_t VAR_6)
{
    periph_module_t VAR_7 = VAR_0;
    if (VAR_6 == VAR_3) {
        VAR_7 = VAR_0;
    } else if (VAR_6 == VAR_4) {
        VAR_7 = VAR_1;
    }





    else {
        FUNC_0(0 && "uart_num error");
    }
    return VAR_7;
}
