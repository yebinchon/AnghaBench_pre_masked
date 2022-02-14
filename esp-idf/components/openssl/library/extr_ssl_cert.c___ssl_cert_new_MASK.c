
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_6__ {int * pkey; int * x509; } ;
typedef int EVP_PKEY ;
typedef TYPE_1__ CERT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;

CERT *FUNC_6(CERT *VAR_1)
{
    CERT *VAR_2;

    X509 *VAR_3;
    EVP_PKEY *VAR_4;

    VAR_2 = FUNC_5(sizeof(CERT));
    if (!VAR_2) {
        FUNC_1(VAR_0, "no enough memory > (cert)");
        goto no_mem;
    }

    if (VAR_1) {
        VAR_4 = VAR_1->pkey;
        VAR_3 = VAR_1->x509;
    } else {
        VAR_4 = ((void*)0);
        VAR_3 = ((void*)0);
    }

    VAR_2->pkey = FUNC_2(VAR_4);
    if (!VAR_2->pkey) {
        FUNC_1(VAR_0, "__EVP_PKEY_new() return NULL");
        goto pkey_err;
    }

    VAR_2->x509 = FUNC_3(VAR_3);
    if (!VAR_2->x509) {
        FUNC_1(VAR_0, "__X509_new() return NULL");
        goto x509_err;
    }

    return VAR_2;

x509_err:
    FUNC_0(VAR_2->pkey);
pkey_err:
    FUNC_4(VAR_2);
no_mem:
    return ((void*)0);
}
