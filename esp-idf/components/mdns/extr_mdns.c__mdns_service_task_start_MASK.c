
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;
typedef int TaskHandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int ,char*,int ,int *,int ,int * const,int ) ;

__attribute__((used)) static esp_err_t FUNC_7(void)
{
    if (!VAR_5) {
        VAR_5 = FUNC_5();
        if (!VAR_5) {
            return VAR_0;
        }
    }
    FUNC_0();
    if (FUNC_2()) {
        FUNC_1();
        return VAR_0;
    }
    if (!VAR_7) {
        FUNC_6(VAR_6, "mdns", VAR_2, ((void*)0), VAR_4,
                                (TaskHandle_t * const)(&VAR_7), VAR_3);
        if (!VAR_7) {
            FUNC_3();
            FUNC_1();
            FUNC_4(VAR_5);
            VAR_5 = ((void*)0);
            return VAR_0;
        }
    }
    FUNC_1();
    return VAR_1;
}
