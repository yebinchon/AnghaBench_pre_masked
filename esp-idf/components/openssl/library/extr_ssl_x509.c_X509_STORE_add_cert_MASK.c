
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_STORE ;
struct TYPE_6__ {struct TYPE_6__* client_CA; int ref_counter; } ;
typedef TYPE_1__ X509 ;
typedef TYPE_1__ SSL_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(X509_STORE *VAR_0, X509 *VAR_1) {

    VAR_1->ref_counter++;

    SSL_CTX *VAR_2 = (SSL_CTX *)VAR_0;
    FUNC_0(VAR_2);
    FUNC_0(VAR_1);

    if (VAR_2->client_CA == VAR_1) {
        return 1;
    }

    if (VAR_2->client_CA!=((void*)0)) {
        FUNC_1(VAR_2->client_CA);
    }

    VAR_2->client_CA = VAR_1;
    return 1;
}
