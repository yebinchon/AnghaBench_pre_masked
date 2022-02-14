
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int i2c_port_t ;
typedef int i2c_cmd_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,size_t,int ) ;
 int FUNC_6 (int ,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static esp_err_t FUNC_7(i2c_port_t VAR_4, uint8_t *VAR_5, size_t VAR_6)
{
    i2c_cmd_handle_t VAR_7 = FUNC_0();
    FUNC_3(VAR_7);
    FUNC_6(VAR_7, (VAR_1 << 1) | VAR_2, VAR_0);
    FUNC_5(VAR_7, VAR_5, VAR_6, VAR_0);
    FUNC_4(VAR_7);
    esp_err_t VAR_8 = FUNC_2(VAR_4, VAR_7, 1000 / VAR_3);
    FUNC_1(VAR_7);
    return VAR_8;
}
