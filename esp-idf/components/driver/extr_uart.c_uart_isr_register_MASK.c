
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uart_port_t ;
typedef int uart_isr_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;



 size_t VAR_4 ;
 int FUNC_3 (int ,int,void (*) (void*),void*,int *) ;
 int * VAR_5 ;

esp_err_t FUNC_4(uart_port_t VAR_6, void (*VAR_7)(void *), void *VAR_8, int VAR_9, uart_isr_handle_t *VAR_10)
{
    int VAR_11;
    FUNC_0((VAR_6 < VAR_4), "uart_num error", VAR_0);
    FUNC_1(&VAR_5[VAR_6]);
    switch(VAR_6) {
        case 129:
            VAR_11=FUNC_3(VAR_2, VAR_9, VAR_7, VAR_8, VAR_10);
            break;





        case 130:
            default:
            VAR_11=FUNC_3(VAR_1, VAR_9, VAR_7, VAR_8, VAR_10);
            break;
    }
    FUNC_2(&VAR_5[VAR_6]);
    return VAR_11;
}
