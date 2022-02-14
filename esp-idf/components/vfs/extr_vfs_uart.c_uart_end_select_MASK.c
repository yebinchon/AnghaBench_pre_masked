
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uart_select_args_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static esp_err_t FUNC_6(void *VAR_1)
{
    uart_select_args_t *VAR_2 = VAR_1;

    FUNC_1(FUNC_3());
    esp_err_t VAR_3 = FUNC_5(VAR_2);
    for (int VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
        FUNC_4(VAR_4, ((void*)0));
    }
    FUNC_2(FUNC_3());

    if (VAR_2) {
        FUNC_0(VAR_2);
    }

    return VAR_3;
}
