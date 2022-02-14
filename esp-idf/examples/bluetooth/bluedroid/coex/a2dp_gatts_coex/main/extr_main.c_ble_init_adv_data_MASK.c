
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int raw_adv_data ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (int*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_5)
{
    int VAR_6 = FUNC_3(VAR_5);
    uint8_t VAR_7[VAR_6+5];

    VAR_7[0] = 2;
    VAR_7[1] = VAR_4;
    VAR_7[2] = (VAR_2 | VAR_1);

    VAR_7[3] = VAR_6 + 1;
    VAR_7[4] = VAR_3;
    for (int VAR_8 = 0;VAR_8 < VAR_6;VAR_8++)
    {
        VAR_7[VAR_8+5] = *(VAR_5++);
    }

    esp_err_t VAR_9 = FUNC_1(VAR_7, sizeof(VAR_7));
    if (VAR_9){
        FUNC_0(VAR_0, "config raw adv data failed, error code = 0x%x ", VAR_9);
    }
    esp_err_t VAR_10 = FUNC_2(VAR_7, sizeof(VAR_7));
    if (VAR_10){
        FUNC_0(VAR_0, "config raw scan rsp data failed, error code = 0x%x", VAR_10);
    }
}
