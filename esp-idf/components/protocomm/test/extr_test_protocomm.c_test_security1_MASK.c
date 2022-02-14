
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int id; int sec_ver; TYPE_2__* pop; } ;
typedef TYPE_1__ session_t ;
struct TYPE_7__ {int len; int const* data; } ;
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
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_6 (void)
{
    FUNC_1(VAR_3, "Starting Sec1 test");

    const char *VAR_4 = "test pop";
    protocomm_security_pop_t VAR_5 = {
        .data = (const uint8_t *)VAR_4,
        .len = FUNC_4(VAR_4)
    };

    session_t *VAR_6 = FUNC_2(1, sizeof(session_t));
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_3, "Error allocating session");
        return VAR_0;
    }

    VAR_6->id = 7;
    VAR_6->sec_ver = 1;
    VAR_6->pop = &VAR_5;

    if (FUNC_5 (VAR_6) != VAR_2) {
        FUNC_0(VAR_3, "Sec1 test failed");
        FUNC_3(VAR_6);
        return VAR_1;
    }

    FUNC_1(VAR_3, "Sec1 test successful");
    FUNC_3(VAR_6);
    return VAR_2;
}
