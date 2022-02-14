
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssl_pm {int ssl; } ;
struct TYPE_3__ {scalar_t__ ssl_pm; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int *) ;

int FUNC_1(const SSL *VAR_0)
{
    struct ssl_pm *VAR_1 = (struct ssl_pm *)VAR_0->ssl_pm;

    return FUNC_0(&VAR_1->ssl);
}
