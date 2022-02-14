
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spi_transaction_t ;
typedef int spi_device_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int **,int ) ;

__attribute__((used)) static void FUNC_2(spi_device_handle_t VAR_2)
{
    spi_transaction_t *VAR_3;
    esp_err_t VAR_4;

    for (int VAR_5=0; VAR_5<6; VAR_5++) {
        VAR_4=FUNC_1(VAR_2, &VAR_3, VAR_1);
        FUNC_0(VAR_4==VAR_0);

    }
}
