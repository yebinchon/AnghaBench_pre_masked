
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t uart_port_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (size_t) ;
 size_t VAR_2 ;
 int * VAR_3 ;

esp_err_t FUNC_5(uart_port_t VAR_4, uint32_t VAR_5)
{
    FUNC_1((VAR_4 < VAR_2), "uart_num error", VAR_0);
    FUNC_2(&VAR_3[VAR_4]);
    FUNC_0(FUNC_4(VAR_4), VAR_5);
    FUNC_3(&VAR_3[VAR_4]);
    return VAR_1;
}
