
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* cert; } ;
typedef TYPE_2__ X509 ;
struct TYPE_8__ {TYPE_2__* x509; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(SSL *VAR_0, X509 *VAR_1)
{
    FUNC_0(VAR_0);
    FUNC_0(VAR_1);

    if (VAR_0->cert->x509 == VAR_1)
        return 1;

    FUNC_1(VAR_0->cert->x509);

    VAR_0->cert->x509 = VAR_1;

    return 1;
}
