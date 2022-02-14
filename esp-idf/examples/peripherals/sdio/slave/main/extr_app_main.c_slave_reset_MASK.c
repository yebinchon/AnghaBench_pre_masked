
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sdio_slave_buf_handle_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static esp_err_t FUNC_6(void)
{
    esp_err_t VAR_1;
    FUNC_5();
    VAR_1 = FUNC_2();
    if (VAR_1 != VAR_0) return VAR_1;
    VAR_1 = FUNC_4();
    if (VAR_1 != VAR_0) return VAR_1;


    while(1) {
        sdio_slave_buf_handle_t VAR_2;
        VAR_1 = FUNC_3(&VAR_2, 0);
        if (VAR_1 != VAR_0) break;
        VAR_1 = FUNC_1(VAR_2);
        FUNC_0(VAR_1);
    }
    return VAR_0;
}
