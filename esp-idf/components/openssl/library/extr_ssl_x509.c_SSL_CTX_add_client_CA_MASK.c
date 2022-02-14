
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* client_CA; } ;
typedef TYPE_1__ X509 ;
typedef TYPE_1__ SSL_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(SSL_CTX *VAR_0, X509 *VAR_1)
{
    FUNC_0(VAR_0);
    FUNC_0(VAR_1);

    if (VAR_0->client_CA == VAR_1)
        return 1;

    FUNC_1(VAR_0->client_CA);

    VAR_0->client_CA = VAR_1;

    return 1;
}
