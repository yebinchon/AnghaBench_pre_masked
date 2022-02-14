
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int protocomm_security_pop_t ;
typedef int esp_err_t ;
struct TYPE_10__ {struct TYPE_10__* sr; int payload_case; int msg; int status; } ;
struct TYPE_9__ {TYPE_2__* sec0; int proto_case; } ;
typedef TYPE_1__ SessionData ;
typedef TYPE_2__ Sec0Payload ;
typedef TYPE_2__ S0SessionResp ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static esp_err_t FUNC_5(uint32_t VAR_7,
                                    SessionData *VAR_8, SessionData *VAR_9,
                                    const protocomm_security_pop_t *VAR_10)
{
    Sec0Payload *VAR_11 = (Sec0Payload *) FUNC_2(sizeof(Sec0Payload));
    S0SessionResp *VAR_12 = (S0SessionResp *) FUNC_2(sizeof(S0SessionResp));
    if (!VAR_11 || !VAR_12) {
        FUNC_0(VAR_6, "Error allocating response");
        FUNC_1(VAR_11);
        FUNC_1(VAR_12);
        return VAR_0;
    }
    FUNC_4(VAR_11);
    FUNC_3(VAR_12);
    VAR_12->status = VAR_5;

    VAR_11->msg = VAR_2;
    VAR_11->payload_case = VAR_3;
    VAR_11->sr = VAR_12;

    VAR_9->proto_case = VAR_4;
    VAR_9->sec0 = VAR_11;

    return VAR_1;
}
