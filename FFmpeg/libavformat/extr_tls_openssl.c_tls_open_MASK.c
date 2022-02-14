
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_18__ {int ptr; } ;
struct TYPE_16__ {scalar_t__ listen; int host; int numerichost; int tcp; scalar_t__ verify; scalar_t__ key_file; scalar_t__ cert_file; scalar_t__ ca_file; } ;
struct TYPE_17__ {int ssl; int * url_bio_method; int ctx; TYPE_2__ tls_shared; } ;
typedef TYPE_2__ TLSShared ;
typedef TYPE_3__ TLSContext ;
typedef TYPE_4__ BIO ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 TYPE_4__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,scalar_t__,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int,int *) ;
 int FUNC_16 (int ,scalar_t__,int ) ;
 int FUNC_17 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,TYPE_4__*,TYPE_4__*) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 (TYPE_1__*,int ,char*,...) ;
 int FUNC_26 () ;
 int FUNC_27 (TYPE_2__*,TYPE_1__*,char const*,int **) ;
 int FUNC_28 (TYPE_1__*,int) ;
 int FUNC_29 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_30(URLContext *VAR_15, const char *VAR_16, int VAR_17, AVDictionary **VAR_18)
{
    TLSContext *VAR_19 = VAR_15->priv_data;
    TLSShared *VAR_20 = &VAR_19->tls_shared;
    BIO *VAR_21;
    int VAR_22;

    if ((VAR_22 = FUNC_26()) < 0)
        return VAR_22;

    if ((VAR_22 = FUNC_27(VAR_20, VAR_15, VAR_16, VAR_18)) < 0)
        goto fail;





    VAR_19->ctx = FUNC_13(VAR_20->listen ? FUNC_24() : FUNC_23());
    if (!VAR_19->ctx) {
        FUNC_25(VAR_15, VAR_0, "%s\n", FUNC_10(FUNC_11(), ((void*)0)));
        VAR_22 = FUNC_0(VAR_2);
        goto fail;
    }
    FUNC_14(VAR_19->ctx, VAR_4 | VAR_5);
    if (VAR_20->ca_file) {
        if (!FUNC_12(VAR_19->ctx, VAR_20->ca_file, ((void*)0)))
            FUNC_25(VAR_15, VAR_0, "SSL_CTX_load_verify_locations %s\n", FUNC_10(FUNC_11(), ((void*)0)));
    }
    if (VAR_20->cert_file && !FUNC_17(VAR_19->ctx, VAR_20->cert_file)) {
        FUNC_25(VAR_15, VAR_0, "Unable to load cert file %s: %s\n",
               VAR_20->cert_file, FUNC_10(FUNC_11(), ((void*)0)));
        VAR_22 = FUNC_0(VAR_2);
        goto fail;
    }
    if (VAR_20->key_file && !FUNC_16(VAR_19->ctx, VAR_20->key_file, VAR_3)) {
        FUNC_25(VAR_15, VAR_0, "Unable to load key file %s: %s\n",
               VAR_20->key_file, FUNC_10(FUNC_11(), ((void*)0)));
        VAR_22 = FUNC_0(VAR_2);
        goto fail;
    }


    if (VAR_20->verify)
        FUNC_15(VAR_19->ctx, VAR_7|VAR_6, ((void*)0));
    VAR_19->ssl = FUNC_20(VAR_19->ctx);
    if (!VAR_19->ssl) {
        FUNC_25(VAR_15, VAR_0, "%s\n", FUNC_10(FUNC_11(), ((void*)0)));
        VAR_22 = FUNC_0(VAR_2);
        goto fail;
    }
    VAR_21 = FUNC_8(&VAR_14);
    VAR_21->ptr = VAR_20->tcp;

    FUNC_21(VAR_19->ssl, VAR_21, VAR_21);
    if (!VAR_20->listen && !VAR_20->numerichost)
        FUNC_22(VAR_19->ssl, VAR_20->host);
    VAR_22 = VAR_20->listen ? FUNC_18(VAR_19->ssl) : FUNC_19(VAR_19->ssl);
    if (VAR_22 == 0) {
        FUNC_25(VAR_15, VAR_0, "Unable to negotiate TLS/SSL session\n");
        VAR_22 = FUNC_0(VAR_2);
        goto fail;
    } else if (VAR_22 < 0) {
        VAR_22 = FUNC_28(VAR_15, VAR_22);
        goto fail;
    }

    return 0;
fail:
    FUNC_29(VAR_15);
    return VAR_22;
}
