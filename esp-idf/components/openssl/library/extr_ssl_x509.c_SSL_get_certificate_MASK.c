
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_6__ {TYPE_1__* cert; } ;
struct TYPE_5__ {int * x509; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (TYPE_2__ const*) ;

X509 *FUNC_1(const SSL *VAR_0)
{
    FUNC_0(VAR_0);

    return VAR_0->cert->x509;
}
