
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int session_t ;
typedef int protocomm_security_pop_t ;
typedef int esp_err_t ;
struct TYPE_10__ {int msg; } ;
struct TYPE_9__ {scalar_t__ sec1; } ;
typedef TYPE_1__ SessionData ;
typedef TYPE_2__ Sec1Payload ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;


 int VAR_1 ;
 int FUNC_1 (int *,int ,TYPE_1__*,TYPE_1__*,int const*) ;
 int FUNC_2 (int *,int ,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_3(session_t *VAR_2,
                                    uint32_t VAR_3,
                                    SessionData *VAR_4, SessionData *VAR_5,
                                    const protocomm_security_pop_t *VAR_6)
{
    Sec1Payload *VAR_7 = (Sec1Payload *) VAR_4->sec1;
    esp_err_t VAR_8;

    if (!VAR_7) {
        FUNC_0(VAR_1, "Empty session data");
        return VAR_0;
    }

    switch (VAR_7->msg) {
        case 129:
            VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
            break;
        case 128:
            VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
            break;
        default:
            FUNC_0(VAR_1, "Invalid security message type");
            VAR_8 = VAR_0;
    }

    return VAR_8;

}
