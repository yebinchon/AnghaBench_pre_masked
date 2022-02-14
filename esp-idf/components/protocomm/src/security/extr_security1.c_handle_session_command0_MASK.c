
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_22__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_18__ ;
typedef struct TYPE_36__ TYPE_11__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_43__ {scalar_t__ state; int * rand; int * sym_key; int * client_pubkey; int * device_pubkey; } ;
typedef TYPE_5__ session_t ;
struct TYPE_44__ {scalar_t__ len; int * data; } ;
typedef TYPE_6__ protocomm_security_pop_t ;
struct TYPE_40__ {int len; int * data; } ;
struct TYPE_38__ {int len; int * data; } ;
struct TYPE_39__ {int X; int Z; } ;
struct TYPE_37__ {int X; } ;
struct TYPE_45__ {struct TYPE_45__* sr0; int payload_case; int msg; TYPE_2__ device_random; TYPE_1__ device_pubkey; int status; int z; int d; TYPE_22__ Qp; int grp; TYPE_4__* sc0; TYPE_18__ Q; } ;
typedef TYPE_7__ mbedtls_entropy_context ;
typedef TYPE_7__ mbedtls_ecdh_context ;
typedef TYPE_7__ mbedtls_ctr_drbg_context ;
typedef int esp_err_t ;
struct TYPE_41__ {int len; int data; } ;
struct TYPE_42__ {TYPE_3__ client_pubkey; } ;
struct TYPE_36__ {TYPE_7__* sec1; int proto_case; } ;
typedef TYPE_7__ SessionResp0 ;
typedef TYPE_11__ SessionData ;
typedef TYPE_7__ Sec1Payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (char*,int *,int) ;
 TYPE_7__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,int *,int) ;
 int FUNC_9 (TYPE_7__*,int ,TYPE_7__*,int *,int ) ;
 int FUNC_10 (int *,int *,TYPE_22__*,int *,int (*) (TYPE_7__*,int *,int),TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (int *,int *,TYPE_18__*,int (*) (TYPE_7__*,int *,int),TYPE_7__*) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (TYPE_7__*) ;
 int VAR_15 ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int *,int) ;
 int FUNC_19 (int *,int *,int) ;
 int FUNC_20 (unsigned char const*,scalar_t__,int *,int ) ;
 int FUNC_21 (int *,int ,int) ;
 int FUNC_22 (TYPE_7__*) ;
 int FUNC_23 (TYPE_7__*) ;

__attribute__((used)) static esp_err_t FUNC_24(session_t *VAR_16,
                                         uint32_t VAR_17,
                                         SessionData *VAR_18, SessionData *VAR_19,
                                         const protocomm_security_pop_t *VAR_20)
{
    FUNC_0(VAR_14, "Request to handle setup0_command");
    Sec1Payload *VAR_21 = (Sec1Payload *) VAR_18->sec1;
    esp_err_t VAR_22;
    int VAR_23;

    if (VAR_16->state != VAR_10) {
        FUNC_1(VAR_14, "Invalid state of session %d (expected %d)", VAR_10, VAR_16->state);
        return VAR_1;
    }

    if (VAR_21->sc0->client_pubkey.len != VAR_6) {
        FUNC_1(VAR_14, "Invalid public key length");
        return VAR_0;
    }

    mbedtls_ecdh_context *VAR_24 = FUNC_5(sizeof(mbedtls_ecdh_context));
    mbedtls_entropy_context *VAR_25 = FUNC_5(sizeof(mbedtls_entropy_context));
    mbedtls_ctr_drbg_context *VAR_26 = FUNC_5(sizeof(mbedtls_ctr_drbg_context));
    if (!VAR_24 || !VAR_25 || !VAR_26) {
        FUNC_1(VAR_14, "Failed to allocate memory for mbedtls context");
        FUNC_3(VAR_24);
        FUNC_3(VAR_25);
        FUNC_3(VAR_26);
        return VAR_2;
    }

    FUNC_13(VAR_24);
    FUNC_7(VAR_26);
    FUNC_16(VAR_25);

    VAR_23 = FUNC_9(VAR_26, VAR_15,
                                     VAR_25, ((void*)0), 0);
    if (VAR_23 != 0) {
        FUNC_1(VAR_14, "Failed at mbedtls_ctr_drbg_seed with error code : -0x%x", -VAR_23);
        VAR_22 = VAR_3;
        goto exit_cmd0;
    }

    VAR_23 = FUNC_14(&VAR_24->grp, VAR_5);
    if (VAR_23 != 0) {
        FUNC_1(VAR_14, "Failed at mbedtls_ecp_group_load with error code : -0x%x", -VAR_23);
        VAR_22 = VAR_3;
        goto exit_cmd0;
    }

    VAR_23 = FUNC_12(&VAR_24->grp, &VAR_24->d, &VAR_24->Q,
                                       FUNC_8, VAR_26);
    if (VAR_23 != 0) {
        FUNC_1(VAR_14, "Failed at mbedtls_ecdh_gen_public with error code : -0x%x", -VAR_23);
        VAR_22 = VAR_3;
        goto exit_cmd0;
    }

    VAR_23 = FUNC_19(&VAR_24->Q.X,
                                        VAR_16->device_pubkey,
                                        VAR_6);
    if (VAR_23 != 0) {
        FUNC_1(VAR_14, "Failed at mbedtls_mpi_write_binary with error code : -0x%x", -VAR_23);
        VAR_22 = VAR_3;
        goto exit_cmd0;
    }
    FUNC_2(VAR_16->device_pubkey, VAR_6);

    FUNC_21(VAR_16->client_pubkey, VAR_21->sc0->client_pubkey.data, VAR_6);

    uint8_t *VAR_27 = VAR_16->device_pubkey;
    uint8_t *VAR_28 = VAR_16->client_pubkey;
    FUNC_4("Device pubkey", VAR_27, VAR_6);
    FUNC_4("Client pubkey", VAR_28, VAR_6);

    VAR_23 = FUNC_17(&VAR_24->Qp.Z, 1);
    if (VAR_23 != 0) {
        FUNC_1(VAR_14, "Failed at mbedtls_mpi_lset with error code : -0x%x", -VAR_23);
        VAR_22 = VAR_3;
        goto exit_cmd0;
    }

    FUNC_2(VAR_16->client_pubkey, VAR_6);
    VAR_23 = FUNC_18(&VAR_24->Qp.X, VAR_28, VAR_6);
    FUNC_2(VAR_16->client_pubkey, VAR_6);
    if (VAR_23 != 0) {
        FUNC_1(VAR_14, "Failed at mbedtls_mpi_read_binary with error code : -0x%x", -VAR_23);
        VAR_22 = VAR_3;
        goto exit_cmd0;
    }

    VAR_23 = FUNC_10(&VAR_24->grp, &VAR_24->z, &VAR_24->Qp,
                                           &VAR_24->d, FUNC_8, VAR_26);
    if (VAR_23 != 0) {
        FUNC_1(VAR_14, "Failed at mbedtls_ecdh_compute_shared with error code : -0x%x", -VAR_23);
        VAR_22 = VAR_3;
        goto exit_cmd0;
    }

    VAR_23 = FUNC_19(&VAR_24->z, VAR_16->sym_key, VAR_6);
    if (VAR_23 != 0) {
        FUNC_1(VAR_14, "Failed at mbedtls_mpi_write_binary with error code : -0x%x", -VAR_23);
        VAR_22 = VAR_3;
        goto exit_cmd0;
    }
    FUNC_2(VAR_16->sym_key, VAR_6);

    if (VAR_20 != ((void*)0) && VAR_20->data != ((void*)0) && VAR_20->len != 0) {
        FUNC_0(VAR_14, "Adding proof of possession");
        uint8_t VAR_29[VAR_6];

        VAR_23 = FUNC_20((const unsigned char *) VAR_20->data, VAR_20->len, VAR_29, 0);
        if (VAR_23 != 0) {
            FUNC_1(VAR_14, "Failed at mbedtls_sha256_ret with error code : -0x%x", -VAR_23);
            VAR_22 = VAR_3;
            goto exit_cmd0;
        }

        for (int VAR_30 = 0; VAR_30 < VAR_6; VAR_30++) {
            VAR_16->sym_key[VAR_30] ^= VAR_29[VAR_30];
        }
    }

    FUNC_4("Shared key", VAR_16->sym_key, VAR_6);

    VAR_23 = FUNC_8(VAR_26, VAR_16->rand, VAR_13);
    if (VAR_23 != 0) {
        FUNC_1(VAR_14, "Failed at mbedtls_ctr_drbg_random with error code : -0x%x", -VAR_23);
        VAR_22 = VAR_3;
        goto exit_cmd0;
    }

    FUNC_4("Device random", VAR_16->rand, VAR_13);

    Sec1Payload *VAR_31 = (Sec1Payload *) FUNC_5(sizeof(Sec1Payload));
    SessionResp0 *VAR_32 = (SessionResp0 *) FUNC_5(sizeof(SessionResp0));
    if (!VAR_31 || !VAR_32) {
        FUNC_1(VAR_14, "Error allocating memory for response0");
        VAR_22 = VAR_2;
        FUNC_3(VAR_31);
        FUNC_3(VAR_32);
        goto exit_cmd0;
    }

    FUNC_22(VAR_31);
    FUNC_23(VAR_32);

    VAR_32->status = VAR_12;

    VAR_32->device_pubkey.data = VAR_27;
    VAR_32->device_pubkey.len = VAR_6;

    VAR_32->device_random.data = (uint8_t *) VAR_16->rand;
    VAR_32->device_random.len = VAR_13;

    VAR_31->msg = VAR_7;
    VAR_31->payload_case = VAR_8;
    VAR_31->sr0 = VAR_32;

    VAR_19->proto_case = VAR_9;
    VAR_19->sec1 = VAR_31;

    VAR_16->state = VAR_11;

    FUNC_0(VAR_14, "Session setup phase1 done");
    VAR_22 = VAR_4;

exit_cmd0:
    FUNC_11(VAR_24);
    FUNC_3(VAR_24);

    FUNC_6(VAR_26);
    FUNC_3(VAR_26);

    FUNC_15(VAR_25);
    FUNC_3(VAR_25);

    return VAR_22;
}
