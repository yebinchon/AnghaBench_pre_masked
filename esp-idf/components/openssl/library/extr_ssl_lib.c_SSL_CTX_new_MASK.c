
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_6__ {int version; int * cert; int * client_CA; TYPE_1__ const* method; } ;
struct TYPE_5__ {int version; } ;
typedef TYPE_1__ SSL_METHOD ;
typedef TYPE_2__ SSL_CTX ;
typedef int CERT ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

SSL_CTX* FUNC_6(const SSL_METHOD *VAR_1)
{
    SSL_CTX *VAR_2;
    CERT *VAR_3;
    X509 *VAR_4;

    if (!VAR_1) {
        FUNC_0(VAR_0, "no no_method");
        return ((void*)0);
    }

    VAR_4 = FUNC_2();
    if (!VAR_4) {
        FUNC_0(VAR_0, "X509_new() return NULL");
        goto failed1;
    }

    VAR_3 = FUNC_4();
    if (!VAR_3) {
        FUNC_0(VAR_0, "ssl_cert_new() return NULL");
        goto failed2;
    }

    VAR_2 = (SSL_CTX *)FUNC_5(sizeof(SSL_CTX));
    if (!VAR_2) {
        FUNC_0(VAR_0, "no enough memory > (ctx)");
        goto failed3;
    }

    VAR_2->method = VAR_1;
    VAR_2->client_CA = VAR_4;
    VAR_2->cert = VAR_3;

    VAR_2->version = VAR_1->version;

    return VAR_2;

failed3:
    FUNC_3(VAR_3);
failed2:
    FUNC_1(VAR_4);
failed1:
    return ((void*)0);
}
