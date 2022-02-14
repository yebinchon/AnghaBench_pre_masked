
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static esp_err_t FUNC_4(void)
{

    uint8_t VAR_3 = FUNC_2(1);
    for (int VAR_4 = 0; VAR_4 < 64; VAR_4++) {

        if (VAR_4 >= 28 && VAR_4 <= 31) continue;
        FUNC_3(VAR_4, VAR_3+3*VAR_4);
    }
    uint8_t VAR_5[64] = {0};
    for (int VAR_6 = 0; VAR_6 < 64; VAR_6++) {

        if (VAR_6 >= 28 && VAR_6 <= 31) continue;
        VAR_5[VAR_6] = FUNC_2(VAR_6);
    }
    FUNC_0(VAR_2, "write regs:");
    FUNC_1(VAR_2, VAR_5, 64, VAR_0);
    return VAR_1;
}
