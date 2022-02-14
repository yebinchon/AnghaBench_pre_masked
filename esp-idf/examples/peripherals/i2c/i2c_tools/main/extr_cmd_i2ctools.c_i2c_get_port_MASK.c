
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i2c_port_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static esp_err_t FUNC_1(int VAR_6, i2c_port_t *VAR_7)
{
    if (VAR_6 >= VAR_4) {
        FUNC_0(VAR_5, "Wrong port number: %d", VAR_6);
        return VAR_0;
    }
    switch (VAR_6) {
    case 0:
        *VAR_7 = VAR_2;
        break;
    case 1:
        *VAR_7 = VAR_3;
        break;
    default:
        *VAR_7 = VAR_2;
        break;
    }
    return VAR_1;
}
