
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_13__ {scalar_t__ verify; int tcp; int host; int numerichost; scalar_t__ listen; scalar_t__ ca_file; scalar_t__ key_file; scalar_t__ cert_file; } ;
struct TYPE_14__ {int ssl_context; int ssl_config; int priv_key; int own_cert; int ca_cert; int ctr_drbg_context; int entropy_context; int priv_key_pw; TYPE_2__ tls_shared; } ;
typedef TYPE_2__ TLSShared ;
typedef TYPE_3__ TLSContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char const*,int **) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *) ;
 int VAR_11 ;
 int FUNC_6 (int *,int ,int *,int *,int ) ;
 int VAR_12 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *,int ,int *) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int ,int ,int *) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,scalar_t__) ;
 int FUNC_24 (TYPE_3__*,char const*) ;
 int FUNC_25 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_26(URLContext *VAR_15, const char *VAR_16, int VAR_17, AVDictionary **VAR_18)
{
    TLSContext *VAR_19 = VAR_15->priv_data;
    TLSShared *VAR_20 = &VAR_19->tls_shared;
    uint32_t VAR_21;
    int VAR_22;


    FUNC_24(VAR_19, VAR_16);

    if ((VAR_22 = FUNC_2(VAR_20, VAR_15, VAR_16, VAR_18)) < 0)
        goto fail;

    FUNC_18(&VAR_19->ssl_context);
    FUNC_15(&VAR_19->ssl_config);
    FUNC_7(&VAR_19->entropy_context);
    FUNC_5(&VAR_19->ctr_drbg_context);
    FUNC_22(&VAR_19->ca_cert);
    FUNC_8(&VAR_19->priv_key);


    if (VAR_20->ca_file) {
        if ((VAR_22 = FUNC_23(&VAR_19->ca_cert, VAR_20->ca_file)) != 0) {
            FUNC_1(VAR_15, VAR_0, "mbedtls_x509_crt_parse_file for CA cert returned %d\n", VAR_22);
            goto fail;
        }
    }


    if (VAR_20->cert_file) {
        if ((VAR_22 = FUNC_23(&VAR_19->own_cert, VAR_20->cert_file)) != 0) {
            FUNC_1(VAR_15, VAR_0, "mbedtls_x509_crt_parse_file for own cert returned %d\n", VAR_22);
            goto fail;
        }
    }


    if (VAR_20->key_file) {
        if ((VAR_22 = FUNC_9(&VAR_19->priv_key,
                                            VAR_20->key_file,
                                            VAR_19->priv_key_pw)) != 0) {
            FUNC_4(VAR_15, VAR_22);
            goto fail;
        }
    }


    if ((VAR_22 = FUNC_6(&VAR_19->ctr_drbg_context,
                                     VAR_12,
                                     &VAR_19->entropy_context,
                                     ((void*)0), 0)) != 0) {
        FUNC_1(VAR_15, VAR_0, "mbedtls_ctr_drbg_seed returned %d\n", VAR_22);
        goto fail;
    }

    if ((VAR_22 = FUNC_14(&VAR_19->ssl_config,
                                           VAR_20->listen ? VAR_5 : VAR_4,
                                           VAR_7,
                                           VAR_6)) != 0) {
        FUNC_1(VAR_15, VAR_0, "mbedtls_ssl_config_defaults returned %d\n", VAR_22);
        goto fail;
    }

    FUNC_10(&VAR_19->ssl_config,
                              VAR_20->ca_file ? VAR_9 : VAR_8);
    FUNC_13(&VAR_19->ssl_config, VAR_11, &VAR_19->ctr_drbg_context);
    FUNC_11(&VAR_19->ssl_config, &VAR_19->ca_cert, ((void*)0));


    if ((VAR_22 = FUNC_12(&VAR_19->ssl_config, &VAR_19->own_cert, &VAR_19->priv_key)) != 0) {
        FUNC_1(VAR_15, VAR_0, "mbedtls_ssl_conf_own_cert returned %d\n", VAR_22);
        goto fail;
    }

    if ((VAR_22 = FUNC_21(&VAR_19->ssl_context, &VAR_19->ssl_config)) != 0) {
        FUNC_1(VAR_15, VAR_0, "mbedtls_ssl_setup returned %d\n", VAR_22);
        goto fail;
    }

    if (!VAR_20->listen && !VAR_20->numerichost) {
        if ((VAR_22 = FUNC_20(&VAR_19->ssl_context, VAR_20->host)) != 0) {
            FUNC_1(VAR_15, VAR_0, "mbedtls_ssl_set_hostname returned %d\n", VAR_22);
            goto fail;
        }
    }


    FUNC_19(&VAR_19->ssl_context, VAR_20->tcp, VAR_14, VAR_13, ((void*)0));


    while ((VAR_22 = FUNC_17(&VAR_19->ssl_context)) != 0) {
        if (VAR_22 != VAR_2 && VAR_22 != VAR_3) {
            FUNC_3(VAR_15, VAR_22);
            goto fail;
        }
    }

    if (VAR_20->verify) {

        if ((VAR_21 = FUNC_16(&VAR_19->ssl_context)) != 0) {
            FUNC_1(VAR_15, VAR_0, "mbedtls_ssl_get_verify_result reported problems " "with the certificate verification, returned flags: %u\n",

                                    VAR_21);
            if (VAR_21 & VAR_10)
                FUNC_1(VAR_15, VAR_0, "The certificate is not correctly signed by the trusted CA.\n");
            goto fail;
        }
    }

    return 0;

fail:
    FUNC_25(VAR_15);
    return FUNC_0(VAR_1);
}
