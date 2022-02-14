
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int gnutls_x509_crt_t ;
typedef int gnutls_datum_t ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {int host; scalar_t__ verify; int tcp; scalar_t__ key_file; scalar_t__ cert_file; scalar_t__ ca_file; int numerichost; scalar_t__ listen; } ;
struct TYPE_12__ {int need_shutdown; int session; int cred; TYPE_2__ tls_shared; } ;
typedef TYPE_2__ TLSShared ;
typedef TYPE_3__ TLSContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,char const*,int **) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,unsigned int*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,unsigned int*) ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int ,char*,int *) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int const*,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (TYPE_1__*,int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_29(URLContext *VAR_13, const char *VAR_14, int VAR_15, AVDictionary **VAR_16)
{
    TLSContext *VAR_17 = VAR_13->priv_data;
    TLSShared *VAR_18 = &VAR_17->tls_shared;
    int VAR_19;

    FUNC_2();

    if ((VAR_19 = FUNC_3(VAR_18, VAR_13, VAR_14, VAR_16)) < 0)
        goto fail;

    FUNC_15(&VAR_17->session, VAR_18->listen ? VAR_7 : VAR_3);
    if (!VAR_18->listen && !VAR_18->numerichost)
        FUNC_17(VAR_17->session, VAR_6, VAR_18->host, FUNC_27(VAR_18->host));
    FUNC_4(&VAR_17->cred);
    if (VAR_18->ca_file) {
        VAR_19 = FUNC_9(VAR_17->cred, VAR_18->ca_file, VAR_10);
        if (VAR_19 < 0)
            FUNC_1(VAR_13, VAR_0, "%s\n", FUNC_18(VAR_19));
    }




    FUNC_6(VAR_17->cred, VAR_18->verify ?
                                        VAR_8 : 0);
    if (VAR_18->cert_file && VAR_18->key_file) {
        VAR_19 = FUNC_7(VAR_17->cred,
                                                   VAR_18->cert_file, VAR_18->key_file,
                                                   VAR_10);
        if (VAR_19 < 0) {
            FUNC_1(VAR_13, VAR_0,
                   "Unable to set cert/key files %s and %s: %s\n",
                   VAR_18->cert_file, VAR_18->key_file, FUNC_18(VAR_19));
            VAR_19 = FUNC_0(VAR_1);
            goto fail;
        }
    } else if (VAR_18->cert_file || VAR_18->key_file)
        FUNC_1(VAR_13, VAR_0, "cert and key required\n");
    FUNC_12(VAR_17->session, VAR_4, VAR_17->cred);
    FUNC_20(VAR_17->session, VAR_11);
    FUNC_21(VAR_17->session, VAR_12);
    FUNC_19(VAR_17->session, VAR_18->tcp);
    FUNC_16(VAR_17->session, "NORMAL", ((void*)0));
    do {
        VAR_19 = FUNC_14(VAR_17->session);
        if (FUNC_13(VAR_19)) {
            VAR_19 = FUNC_26(VAR_13, VAR_19);
            goto fail;
        }
    } while (VAR_19);
    VAR_17->need_shutdown = 1;
    if (VAR_18->verify) {
        unsigned int VAR_20, VAR_21;
        gnutls_x509_crt_t VAR_22;
        const gnutls_datum_t *VAR_23;
        if ((VAR_19 = FUNC_11(VAR_17->session, &VAR_20)) < 0) {
            FUNC_1(VAR_13, VAR_0, "Unable to verify peer certificate: %s\n",
                                    FUNC_18(VAR_19));
            VAR_19 = FUNC_0(VAR_1);
            goto fail;
        }
        if (VAR_20 & VAR_2) {
            FUNC_1(VAR_13, VAR_0, "Peer certificate failed verification\n");
            VAR_19 = FUNC_0(VAR_1);
            goto fail;
        }
        if (FUNC_10(VAR_17->session) != VAR_5) {
            FUNC_1(VAR_13, VAR_0, "Unsupported certificate type\n");
            VAR_19 = FUNC_0(VAR_1);
            goto fail;
        }
        FUNC_25(&VAR_22);
        VAR_23 = FUNC_5(VAR_17->session, &VAR_21);
        FUNC_24(VAR_22, VAR_23, VAR_9);
        VAR_19 = FUNC_22(VAR_22, VAR_18->host);
        FUNC_23(VAR_22);
        if (!VAR_19) {
            FUNC_1(VAR_13, VAR_0,
                   "The certificate's owner does not match hostname %s\n", VAR_18->host);
            VAR_19 = FUNC_0(VAR_1);
            goto fail;
        }
    }

    return 0;
fail:
    FUNC_28(VAR_13);
    return VAR_19;
}
