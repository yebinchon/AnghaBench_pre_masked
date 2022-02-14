
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t uart_port_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;

esp_err_t FUNC_6(uart_port_t VAR_5, uint32_t VAR_6)
{
    FUNC_2((VAR_5 < VAR_3), "uart_num error", VAR_0);
    FUNC_2((((VAR_6 & ~VAR_2) == 0) || (VAR_6 == 0)), "inverse_mask error", VAR_0);
    FUNC_4(&VAR_4[VAR_5]);
    FUNC_0(FUNC_3(VAR_5), VAR_2);
    FUNC_1(FUNC_3(VAR_5), VAR_6);
    FUNC_5(&VAR_4[VAR_5]);
    return VAR_1;
}
