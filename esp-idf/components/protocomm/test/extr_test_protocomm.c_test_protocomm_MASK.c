
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pop; int sec_ver; } ;
typedef TYPE_1__ session_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_9 (session_t *VAR_3)
{
    FUNC_1(VAR_2, "Starting Protocomm test");


    if (FUNC_2(VAR_3->sec_ver, VAR_3->pop) != VAR_1) {
        FUNC_0(VAR_2, "Error starting test");
        return VAR_0;
    }


    if (FUNC_8(VAR_3) != VAR_1) {
        FUNC_0(VAR_2, "Error testing version endpoint");
        FUNC_3();
        return VAR_0;
    }


    if (FUNC_5(VAR_3) != VAR_1) {
        FUNC_0(VAR_2, "Error creating new session");
        FUNC_3();
        return VAR_0;
    }


    if (FUNC_7(VAR_3) != VAR_1) {
        FUNC_0(VAR_2, "Error testing security endpoint");
        FUNC_4(VAR_3);
        FUNC_3();
        return VAR_0;
    }



    if (FUNC_6(VAR_3) != VAR_1) {
        FUNC_0(VAR_2, "Error testing request endpoint");
        FUNC_4(VAR_3);
        FUNC_3();
        return VAR_0;
    }


    FUNC_4(VAR_3);
    FUNC_3();
    FUNC_1(VAR_2, "Protocomm test successful");
    return VAR_1;
}
