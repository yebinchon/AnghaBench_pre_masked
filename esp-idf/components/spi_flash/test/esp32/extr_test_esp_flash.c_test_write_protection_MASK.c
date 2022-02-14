
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_flash_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(esp_flash_t* VAR_1)
{
    bool VAR_2 = 1;
    esp_err_t VAR_3 = VAR_0;
    VAR_3 = FUNC_2(VAR_1, &VAR_2);
    FUNC_1(VAR_3);

    for (int VAR_4 = 0; VAR_4 < 4; VAR_4 ++) {
        bool VAR_5 = !VAR_2;
        VAR_3 = FUNC_3(VAR_1, VAR_5);
        FUNC_1(VAR_3);

        bool VAR_6;
        VAR_3 = FUNC_2(VAR_1, &VAR_6);
        FUNC_1(VAR_3);
        FUNC_0(VAR_6 == VAR_5);
        VAR_2 = VAR_6;
    }
}
