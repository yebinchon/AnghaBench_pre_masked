
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int len; TYPE_4__* data; } ;
struct TYPE_22__ {struct TYPE_22__* sr1; int payload_case; int msg; TYPE_3__ device_verify_data; int status; TYPE_2__* sc1; } ;
typedef TYPE_4__ uint8_t ;
typedef int uint32_t ;
struct TYPE_23__ {scalar_t__ state; int ctx_aes; TYPE_4__* client_pubkey; int stb; int rand; scalar_t__ nc_off; int device_pubkey; int sym_key; } ;
typedef TYPE_5__ session_t ;
typedef int esp_err_t ;
typedef int check_buf ;
struct TYPE_24__ {TYPE_4__* sec1; int proto_case; } ;
struct TYPE_19__ {int len; TYPE_4__* data; } ;
struct TYPE_20__ {TYPE_1__ client_verify_data; } ;
typedef TYPE_4__ SessionResp1 ;
typedef TYPE_7__ SessionData ;
typedef TYPE_4__ Sec1Payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char*,TYPE_4__*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int,scalar_t__*,int ,int ,TYPE_4__*,TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ,int) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static esp_err_t FUNC_13(session_t *VAR_12,
                                         uint32_t VAR_13,
                                         SessionData *VAR_14, SessionData *VAR_15)
{
    FUNC_0(VAR_11, "Request to handle setup1_command");
    Sec1Payload *VAR_16 = (Sec1Payload *) VAR_14->sec1;
    uint8_t VAR_17[VAR_4];
    int VAR_18;

    if (VAR_12->state != VAR_8) {
        FUNC_1(VAR_11, "Invalid state of session %d (expected %d)", VAR_8, VAR_12->state);
        return VAR_0;
    }


    FUNC_7(&VAR_12->ctx_aes);
    FUNC_10(VAR_12->stb, 0, sizeof(VAR_12->stb));
    VAR_12->nc_off = 0;

    FUNC_3("Client verifier", VAR_16->sc1->client_verify_data.data,
            VAR_16->sc1->client_verify_data.len);

    VAR_18 = FUNC_8(&VAR_12->ctx_aes, VAR_12->sym_key,
                                      sizeof(VAR_12->sym_key)*8);
    if (VAR_18 != 0) {
        FUNC_1(VAR_11, "Failure at mbedtls_aes_setkey_enc with error code : -0x%x", -VAR_18);
        FUNC_6(&VAR_12->ctx_aes);
        return VAR_2;
    }

    VAR_18 = FUNC_5(&VAR_12->ctx_aes,
                                     VAR_4, &VAR_12->nc_off,
                                     VAR_12->rand, VAR_12->stb,
                                     VAR_16->sc1->client_verify_data.data, VAR_17);
    if (VAR_18 != 0) {
        FUNC_1(VAR_11, "Failure at mbedtls_aes_crypt_ctr with error code : -0x%x", -VAR_18);
        FUNC_6(&VAR_12->ctx_aes);
        return VAR_2;
    }

    FUNC_3("Dec Client verifier", VAR_17, sizeof(VAR_17));


    if (FUNC_9(VAR_17, VAR_12->device_pubkey,
                                 sizeof(VAR_12->device_pubkey)) != 0) {
        FUNC_1(VAR_11, "Key mismatch. Close connection");
        FUNC_6(&VAR_12->ctx_aes);
        return VAR_2;
    }

    Sec1Payload *VAR_19 = (Sec1Payload *) FUNC_4(sizeof(Sec1Payload));
    SessionResp1 *VAR_20 = (SessionResp1 *) FUNC_4(sizeof(SessionResp1));
    if (!VAR_19 || !VAR_20) {
        FUNC_1(VAR_11, "Error allocating memory for response1");
        FUNC_2(VAR_19);
        FUNC_2(VAR_20);
        FUNC_6(&VAR_12->ctx_aes);
        return VAR_1;
    }

    FUNC_11(VAR_19);
    FUNC_12(VAR_20);
    VAR_20->status = VAR_10;

    uint8_t *VAR_21 = (uint8_t *) FUNC_4(VAR_4);
    if (!VAR_21) {
        FUNC_1(VAR_11, "Error allocating ciphertext buffer");
        FUNC_2(VAR_19);
        FUNC_2(VAR_20);
        FUNC_6(&VAR_12->ctx_aes);
        return VAR_1;
    }

    VAR_18 = FUNC_5(&VAR_12->ctx_aes,
                                     VAR_4, &VAR_12->nc_off,
                                     VAR_12->rand, VAR_12->stb,
                                     VAR_12->client_pubkey, VAR_21);
    if (VAR_18 != 0) {
        FUNC_1(VAR_11, "Failure at mbedtls_aes_crypt_ctr with error code : -0x%x", -VAR_18);
        FUNC_2(VAR_21);
        FUNC_2(VAR_19);
        FUNC_2(VAR_20);
        FUNC_6(&VAR_12->ctx_aes);
        return VAR_2;
    }

    VAR_20->device_verify_data.data = VAR_21;
    VAR_20->device_verify_data.len = VAR_4;
    FUNC_3("Device verify data", VAR_21, VAR_4);

    VAR_19->msg = VAR_5;
    VAR_19->payload_case = VAR_6;
    VAR_19->sr1 = VAR_20;

    VAR_15->proto_case = VAR_7;
    VAR_15->sec1 = VAR_19;

    VAR_12->state = VAR_9;
    FUNC_0(VAR_11, "Secure session established successfully");
    return VAR_3;
}
