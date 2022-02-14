
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static esp_err_t FUNC_3(void)
{
    for(int VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        FUNC_0(VAR_2, "send intr: %d", VAR_5);
        FUNC_1(VAR_5);

        if (VAR_4 & VAR_1) break;
        FUNC_2(500/VAR_3);
    }
    return VAR_0;
}
