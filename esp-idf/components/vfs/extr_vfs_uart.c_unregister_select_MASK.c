
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uart_select_args_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int ** FUNC_2 (int **,int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;

__attribute__((used)) static esp_err_t FUNC_3(uart_select_args_t *VAR_6)
{
    esp_err_t VAR_7 = VAR_2;
    if (VAR_6) {
        VAR_7 = VAR_0;
        FUNC_0(&VAR_3);
        for (int VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
            if (VAR_5[VAR_8] == VAR_6) {
                const int VAR_9 = VAR_4 - 1;


                VAR_5[VAR_8] = VAR_5[VAR_9];
                VAR_5 = FUNC_2(VAR_5, VAR_9 * sizeof(uart_select_args_t *));
                if (VAR_5 || VAR_9 == 0) {
                    VAR_4 = VAR_9;
                    VAR_7 = VAR_2;
                } else {
                    VAR_7 = VAR_1;
                }
                break;
            }
        }
        FUNC_1(&VAR_3);
    }
    return VAR_7;
}
