
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int * pop; scalar_t__ sec_ver; } ;
typedef TYPE_1__ session_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_5 (void)
{
    FUNC_1(VAR_3, "Starting Sec0 test");

    session_t *VAR_4 = FUNC_2(1, sizeof(session_t));
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_3, "Error allocating session");
        return VAR_0;
    }

    VAR_4->id = 8;
    VAR_4->sec_ver = 0;
    VAR_4->pop = ((void*)0);

    if (FUNC_4 (VAR_4) != VAR_2) {
        FUNC_0(VAR_3, "Sec0 test failed");
        FUNC_3(VAR_4);
        return VAR_1;
    }

    FUNC_1(VAR_3, "Sec0 test successful");
    FUNC_3(VAR_4);
    return VAR_2;
}
