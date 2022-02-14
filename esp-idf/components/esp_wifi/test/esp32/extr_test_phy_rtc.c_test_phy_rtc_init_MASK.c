
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
    esp_err_t VAR_5 = FUNC_6();
    if (VAR_5 == VAR_1 || VAR_5 == VAR_0) {
        FUNC_0(VAR_4, "no free pages or nvs version mismatch, erase..");
        FUNC_2(FUNC_5());
        VAR_5 = FUNC_6();
    }
    FUNC_2(VAR_5);




    FUNC_3(VAR_3);


    FUNC_1(1);
    FUNC_4();
}
