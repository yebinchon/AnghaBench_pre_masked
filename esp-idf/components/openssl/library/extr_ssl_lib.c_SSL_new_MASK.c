
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int session; int cert; int client_CA; int rwstate; int verify_mode; int options; int version; int method; TYPE_1__* ctx; } ;
struct TYPE_7__ {int verify_mode; int options; int version; int method; int client_CA; int cert; } ;
typedef TYPE_1__ SSL_CTX ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int) ;

SSL *FUNC_10(SSL_CTX *VAR_3)
{
    int VAR_4 = 0;
    SSL *VAR_5;

    if (!VAR_3) {
        FUNC_0(VAR_0, "no ctx");
        return ((void*)0);
    }

    VAR_5 = (SSL *)FUNC_9(sizeof(SSL));
    if (!VAR_5) {
        FUNC_0(VAR_0, "no enough memory > (ssl)");
        goto failed1;
    }

    VAR_5->session = FUNC_3();
    if (!VAR_5->session) {
        FUNC_0(VAR_0, "SSL_SESSION_new() return NULL");
        goto failed2;
    }

    VAR_5->cert = FUNC_6(VAR_3->cert);
    if (!VAR_5->cert) {
        FUNC_0(VAR_0, "__ssl_cert_new() return NULL");
        goto failed3;
    }

    VAR_5->client_CA = FUNC_5(VAR_3->client_CA);
    if (!VAR_5->client_CA) {
        FUNC_0(VAR_0, "__X509_new() return NULL");
        goto failed4;
    }

    VAR_5->ctx = VAR_3;
    VAR_5->method = VAR_3->method;

    VAR_5->version = VAR_3->version;
    VAR_5->options = VAR_3->options;

    VAR_5->verify_mode = VAR_3->verify_mode;

    VAR_4 = FUNC_1(VAR_2, VAR_5);
    if (VAR_4) {
        FUNC_0(VAR_0, "SSL_METHOD_CALL(new) return %d", VAR_4);
        goto failed5;
    }

    VAR_5->rwstate = VAR_1;

    return VAR_5;

failed5:
    FUNC_4(VAR_5->client_CA);
failed4:
    FUNC_7(VAR_5->cert);
failed3:
    FUNC_2(VAR_5->session);
failed2:
    FUNC_8(VAR_5);
failed1:
    return ((void*)0);
}
