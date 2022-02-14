
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* cert; } ;
struct TYPE_8__ {TYPE_2__* pkey; } ;
typedef TYPE_2__ SSL_CTX ;
typedef TYPE_2__ EVP_PKEY ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(SSL_CTX *VAR_0, EVP_PKEY *VAR_1)
{
    FUNC_1(VAR_0);
    FUNC_1(VAR_1);

    if (VAR_0->cert->pkey == VAR_1)
        return 1;

    if (VAR_0->cert->pkey)
        FUNC_0(VAR_0->cert->pkey);

    VAR_0->cert->pkey = VAR_1;

    return 1;
}
