
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int id; int sec_ver; TYPE_2__* pop; } ;
typedef TYPE_1__ session_t ;
struct TYPE_10__ {int len; int const* data; } ;
typedef TYPE_2__ protocomm_security_pop_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int,TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_10 (void)
{
    FUNC_1(VAR_3, "Starting Security 1 wrong auth test");

    const char *VAR_4 = "test pop";
    protocomm_security_pop_t VAR_5 = {
        .data = (const uint8_t *)VAR_4,
        .len = FUNC_6(VAR_4)
    };

    session_t *VAR_6 = FUNC_2(1, sizeof(session_t));
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_3, "Error allocating session");
        return VAR_0;
    }

    VAR_6->id = 4;
    VAR_6->sec_ver = 1;
    VAR_6->pop = &VAR_5;


    if (FUNC_4(1, &VAR_5) != VAR_2) {
        FUNC_0(VAR_3, "Error starting test");
        FUNC_3(VAR_6);
        return VAR_1;
    }


    if (FUNC_8(VAR_6) != VAR_2) {
        FUNC_0(VAR_3, "Error creating new session");
        FUNC_5();
        FUNC_3(VAR_6);
        return VAR_1;
    }

    const char *VAR_7 = "wrong pop";
    protocomm_security_pop_t VAR_8 = {
        .data = (const uint8_t *)VAR_7,
        .len = FUNC_6(VAR_7)
    };


    VAR_6->pop = &VAR_8;



    if (FUNC_9(VAR_6) == VAR_2) {
        FUNC_0(VAR_3, "Error testing security endpoint");
        FUNC_7(VAR_6);
        FUNC_5();
        FUNC_3(VAR_6);
        return VAR_1;
    }

    FUNC_7(VAR_6);
    FUNC_5();
    FUNC_3(VAR_6);

    FUNC_1(VAR_3, "Protocomm test successful");
    return VAR_2;
}
