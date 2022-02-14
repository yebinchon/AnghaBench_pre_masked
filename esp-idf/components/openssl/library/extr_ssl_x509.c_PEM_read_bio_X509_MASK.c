
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_3__ {int dlen; int data; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int VAR_1 ;

X509 * FUNC_5(BIO *VAR_2, X509 **VAR_3, void *VAR_4, void *VAR_5) {
    int VAR_6 = 0;
    int VAR_7;
    X509 *VAR_8;

    FUNC_0(VAR_2->data);
    FUNC_0(VAR_2->dlen);

    if (VAR_3 && *VAR_3) {
        VAR_8 = *VAR_3;
    } else {
        VAR_8 = FUNC_4();
        if (!VAR_8) {
            FUNC_1(VAR_0, "X509_new() return NULL");
            goto failed;
        }
        VAR_6 = 1;
    }

    VAR_7 = FUNC_2(VAR_1, VAR_8, VAR_2->data, VAR_2->dlen);
    if (VAR_7) {
        FUNC_1(VAR_0, "X509_METHOD_CALL(load) return %d", VAR_7);
        goto failed;
    }

    return VAR_8;

failed:
    if (VAR_6) {
        FUNC_3(VAR_8);
    }

    return ((void*)0);
}
