
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *,size_t,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ) ;
 int VAR_6 ;

__attribute__((used)) static esp_err_t FUNC_8(i2c_port_t VAR_7, uint8_t *VAR_8, size_t VAR_9)
{
    if (VAR_9 == 0) {
        return VAR_2;
    }
    i2c_cmd_handle_t VAR_10 = FUNC_0();
    FUNC_5(VAR_10);
    FUNC_7(VAR_10, (VAR_3 << 1) | VAR_5, VAR_0);
    if (VAR_9 > 1) {
        FUNC_3(VAR_10, VAR_8, VAR_9 - 1, VAR_1);
    }
    FUNC_4(VAR_10, VAR_8 + VAR_9 - 1, VAR_4);
    FUNC_6(VAR_10);
    esp_err_t VAR_11 = FUNC_2(VAR_7, VAR_10, 1000 / VAR_6);
    FUNC_1(VAR_10);
    return VAR_11;
}
