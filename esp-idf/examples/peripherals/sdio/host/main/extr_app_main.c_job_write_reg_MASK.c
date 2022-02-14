
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_slave_context_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *,int ,int,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;

void FUNC_8(esp_slave_context_t *VAR_4, int VAR_5)
{
    esp_err_t VAR_6;
    uint8_t VAR_7[64];
    FUNC_2(VAR_3, "========JOB: write slave reg========");
    VAR_6 = FUNC_5(VAR_4, VAR_2, VAR_5, ((void*)0));
    FUNC_0(VAR_6);

    VAR_6 = FUNC_6(VAR_4, VAR_1);
    FUNC_0(VAR_6);

    FUNC_7(10);
    for (int VAR_8 = 0; VAR_8 < 64; VAR_8++) {
        FUNC_1(VAR_3, "reading register %d", VAR_8);
        VAR_6 = FUNC_4(VAR_4, VAR_8, &VAR_7[VAR_8]);
        FUNC_0(VAR_6);
    }

    FUNC_2(VAR_3, "read registers:");
    FUNC_3(VAR_3, VAR_7, 64, VAR_0);
}
