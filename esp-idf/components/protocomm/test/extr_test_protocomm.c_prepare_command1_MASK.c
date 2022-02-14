
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {TYPE_5__* sc1; int payload_case; int msg; } ;
typedef TYPE_2__ uint8_t ;
struct TYPE_17__ {int device_pubkey; int stb; int rand; scalar_t__ nc_off; int ctx_aes; int sym_key; } ;
typedef TYPE_3__ session_t ;
typedef int esp_err_t ;
struct TYPE_20__ {int ver; } ;
struct TYPE_15__ {int len; TYPE_2__* data; } ;
struct TYPE_19__ {TYPE_1__ client_verify_data; } ;
struct TYPE_18__ {TYPE_2__* sec1; int sec_ver; int proto_case; } ;
typedef TYPE_4__ SessionData ;
typedef TYPE_5__ SessionCmd1 ;
typedef TYPE_2__ Sec1Payload ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int,scalar_t__*,int ,int ,int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_9__ VAR_8 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_5__*) ;

__attribute__((used)) static esp_err_t FUNC_10(session_t *VAR_9, SessionData *VAR_10)
{
    int VAR_11;
    uint8_t *VAR_12 = (uint8_t *) FUNC_3(VAR_3);
    if (!VAR_12) {
        FUNC_0(VAR_7, "Error allocating ciphertext buffer");
        return VAR_0;
    }


    FUNC_5(&VAR_9->ctx_aes);
    FUNC_7(VAR_9->stb, 0, sizeof(VAR_9->stb));
    VAR_9->nc_off = 0;

    VAR_11 = FUNC_6(&VAR_9->ctx_aes, VAR_9->sym_key,
                                 sizeof(VAR_9->sym_key)*8);
    if (VAR_11 != 0) {
        FUNC_0(VAR_7, "Failed at mbedtls_aes_setkey_enc with erro code : %d", VAR_11);
        FUNC_1(VAR_12);
        return VAR_1;
    }

    VAR_11 = FUNC_4(&VAR_9->ctx_aes, VAR_3,
                                &VAR_9->nc_off, VAR_9->rand,
                                VAR_9->stb, VAR_9->device_pubkey, VAR_12);
    if (VAR_11 != 0) {
        FUNC_0(VAR_7, "Failed at mbedtls_aes_crypt_ctr with erro code : %d", VAR_11);
        FUNC_1(VAR_12);
        return VAR_1;
    }

    Sec1Payload *VAR_13 = (Sec1Payload *) FUNC_3(sizeof(Sec1Payload));
    if (!VAR_13) {
        FUNC_0(VAR_7, "Error allocating out buffer");
        FUNC_1(VAR_12);
        return VAR_0;
    }
    FUNC_8(VAR_13);

    SessionCmd1 *VAR_14 = (SessionCmd1 *) FUNC_3(sizeof(SessionCmd1));
    if (!VAR_14) {
        FUNC_0(VAR_7, "Error allocating out_req buffer");
        FUNC_1(VAR_12);
        FUNC_1(VAR_13);
        return VAR_0;
    }
    FUNC_9(VAR_14);

    VAR_14->client_verify_data.data = VAR_12;
    VAR_14->client_verify_data.len = VAR_3;
    FUNC_2("Client verify data", VAR_12, VAR_3);

    VAR_13->msg = VAR_4;
    VAR_13->payload_case = VAR_5;
    VAR_13->sc1 = VAR_14;

    VAR_10->proto_case = VAR_6;
    VAR_10->sec_ver = VAR_8;
    VAR_10->sec1 = VAR_13;

    return VAR_2;
}
