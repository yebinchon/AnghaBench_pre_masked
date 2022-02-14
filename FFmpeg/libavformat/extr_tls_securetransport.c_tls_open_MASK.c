
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_13__ {int verify; int host; scalar_t__ cert_file; scalar_t__ ca_file; scalar_t__ listen; } ;
struct TYPE_14__ {int ca_array; int ssl_context; TYPE_2__ tls_shared; } ;
typedef TYPE_2__ TLSShared ;
typedef TYPE_3__ TLSContext ;
typedef scalar_t__ SecTrustResultType ;
typedef scalar_t__ SecTrustRef ;
typedef scalar_t__ OSStatus ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_1__*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (TYPE_1__*,int ,char*,...) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,char const*,int **) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ VAR_19 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_14(URLContext *VAR_22, const char *VAR_23, int VAR_24, AVDictionary **VAR_25)
{
    TLSContext *VAR_26 = VAR_22->priv_data;
    TLSShared *VAR_27 = &VAR_26->tls_shared;
    int VAR_28;

    if ((VAR_28 = FUNC_9(VAR_27, VAR_22, VAR_23, VAR_25)) < 0)
        goto fail;

    VAR_26->ssl_context = FUNC_4(((void*)0), VAR_27->listen ? VAR_13 : VAR_12, VAR_15);
    if (!VAR_26->ssl_context) {
        FUNC_8(VAR_22, VAR_1, "Unable to create SSL context\n");
        VAR_28 = FUNC_0(VAR_3);
        goto fail;
    }
    if (VAR_27->ca_file) {
        if ((VAR_28 = FUNC_10(VAR_22)) < 0)
            goto fail;
    }
    if (VAR_27->ca_file || !VAR_27->verify)
        FUNC_2(VAR_7, VAR_26->ssl_context, VAR_14, 1);
    if (VAR_27->cert_file)
        if ((VAR_28 = FUNC_11(VAR_22)) < 0)
            goto fail;
    FUNC_2(VAR_6, VAR_26->ssl_context, VAR_27->host, FUNC_12(VAR_27->host));
    FUNC_2(VAR_5, VAR_26->ssl_context, VAR_20, VAR_21);
    FUNC_2(VAR_4, VAR_26->ssl_context, VAR_22);
    while (1) {
        OSStatus VAR_29 = FUNC_5(VAR_26->ssl_context);
        if (VAR_29 == VAR_9) {
            SecTrustRef VAR_30;
            SecTrustResultType VAR_31;
            if (!VAR_27->verify)
                continue;

            if (FUNC_3(VAR_26->ssl_context, &VAR_30) != VAR_19) {
                VAR_28 = FUNC_0(VAR_3);
                goto fail;
            }

            if (FUNC_7(VAR_30, VAR_26->ca_array) != VAR_19) {
                VAR_28 = VAR_0;
                goto fail;
            }

            if (FUNC_6(VAR_30, &VAR_31) != VAR_19) {
                VAR_28 = VAR_0;
                goto fail;
            }

            if (VAR_31 == VAR_16 ||
                VAR_31 == VAR_18) {

                VAR_29 = VAR_10;
            } else if (VAR_31 == VAR_17) {

                VAR_29 = VAR_11;
            } else {

                VAR_29 = VAR_8;
            }

            if (VAR_30)
                FUNC_1(VAR_30);
        }
        if (VAR_29 == VAR_19) {
            break;
        } else if (VAR_29 != VAR_10) {
            FUNC_8(VAR_22, VAR_1, "Unable to negotiate TLS/SSL session: %i\n", (int)VAR_29);
            VAR_28 = FUNC_0(VAR_2);
            goto fail;
        }
    }

    return 0;
fail:
    FUNC_13(VAR_22);
    return VAR_28;
}
