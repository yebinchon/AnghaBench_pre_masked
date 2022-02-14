
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pkey_pm {int * pkey; } ;
struct TYPE_3__ {int * pkey_pm; } ;
typedef TYPE_1__ EVP_PKEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(EVP_PKEY *VAR_0)
{
    struct pkey_pm *VAR_1 = (struct pkey_pm *)VAR_0->pkey_pm;

    if (VAR_1->pkey) {
        FUNC_0(VAR_1->pkey);

        FUNC_1(VAR_1->pkey);
        VAR_1->pkey = ((void*)0);
    }

    FUNC_1(VAR_0->pkey_pm);
    VAR_0->pkey_pm = ((void*)0);
}
