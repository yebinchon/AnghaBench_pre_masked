
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int client_pubkey; } ;
typedef TYPE_2__ session_t ;
typedef int esp_err_t ;
struct TYPE_17__ {int ver; } ;
struct TYPE_16__ {TYPE_4__* sc0; int payload_case; int msg; } ;
struct TYPE_12__ {int len; int data; } ;
struct TYPE_15__ {TYPE_1__ client_pubkey; } ;
struct TYPE_14__ {TYPE_5__* sec1; int sec_ver; int proto_case; } ;
typedef TYPE_3__ SessionData ;
typedef TYPE_4__ SessionCmd0 ;
typedef TYPE_5__ Sec1Payload ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_8__ VAR_7 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static esp_err_t FUNC_5(session_t *VAR_8, SessionData *VAR_9)
{
    Sec1Payload *VAR_10 = (Sec1Payload *) FUNC_2(sizeof(Sec1Payload));
    if (VAR_10 == ((void*)0)) {
        FUNC_0(VAR_6, "Error allocating memory for request");
        return VAR_0;
    }

    SessionCmd0 *VAR_11 = (SessionCmd0 *) FUNC_2(sizeof(SessionCmd0));
    if (VAR_11 == ((void*)0)) {
        FUNC_0(VAR_6, "Error allocating memory for request");
        FUNC_1(VAR_10);
        return VAR_0;
    }

    FUNC_3(VAR_10);
    FUNC_4(VAR_11);

    VAR_11->client_pubkey.data = VAR_8->client_pubkey;
    VAR_11->client_pubkey.len = VAR_2;

    VAR_10->msg = VAR_3;
    VAR_10->payload_case = VAR_4;
    VAR_10->sc0 = VAR_11;

    VAR_9->proto_case = VAR_5;
    VAR_9->sec_ver = VAR_7;
    VAR_9->sec1 = VAR_10;

    return VAR_1;
}
