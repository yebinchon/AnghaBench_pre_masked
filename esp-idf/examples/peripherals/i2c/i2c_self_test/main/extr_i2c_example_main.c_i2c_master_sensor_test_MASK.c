
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;
 int VAR_8 ;
 int FUNC_7 (int) ;

__attribute__((used)) static esp_err_t FUNC_8(i2c_port_t VAR_9, uint8_t *VAR_10, uint8_t *VAR_11)
{
    int VAR_12;
    i2c_cmd_handle_t VAR_13 = FUNC_0();
    FUNC_4(VAR_13);
    FUNC_6(VAR_13, VAR_3 << 1 | VAR_7, VAR_0);
    FUNC_6(VAR_13, VAR_2, VAR_0);
    FUNC_5(VAR_13);
    VAR_12 = FUNC_2(VAR_9, VAR_13, 1000 / VAR_8);
    FUNC_1(VAR_13);
    if (VAR_12 != VAR_4) {
        return VAR_12;
    }
    FUNC_7(30 / VAR_8);
    VAR_13 = FUNC_0();
    FUNC_4(VAR_13);
    FUNC_6(VAR_13, VAR_3 << 1 | VAR_6, VAR_0);
    FUNC_3(VAR_13, VAR_10, VAR_1);
    FUNC_3(VAR_13, VAR_11, VAR_5);
    FUNC_5(VAR_13);
    VAR_12 = FUNC_2(VAR_9, VAR_13, 1000 / VAR_8);
    FUNC_1(VAR_13);
    return VAR_12;
}
