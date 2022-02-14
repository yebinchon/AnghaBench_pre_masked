
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

esp_err_t FUNC_4(int VAR_3, uint32_t VAR_4)
{
    if (!FUNC_3(VAR_3)) {
        return VAR_0;
    }
    if (!FUNC_2(VAR_3)) {
        return VAR_1;
    }
    FUNC_0(VAR_2, "Setting card clock to %d kHz", VAR_4);
    return FUNC_1(VAR_3, VAR_4 * 1000);
}
