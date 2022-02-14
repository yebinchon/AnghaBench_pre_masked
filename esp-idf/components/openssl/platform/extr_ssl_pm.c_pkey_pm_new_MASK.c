
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pkey_pm {int pkey; int ex_pkey; } ;
struct TYPE_4__ {struct pkey_pm* pkey_pm; } ;
typedef TYPE_1__ EVP_PKEY ;


 struct pkey_pm* FUNC_0 (int) ;

int FUNC_1(EVP_PKEY *VAR_0, EVP_PKEY *VAR_1)
{
    struct pkey_pm *VAR_2;

    VAR_2 = FUNC_0(sizeof(struct pkey_pm));
    if (!VAR_2)
        return -1;

    VAR_0->pkey_pm = VAR_2;

    if (VAR_1) {
        struct pkey_pm *VAR_3 = (struct pkey_pm *)VAR_1->pkey_pm;

        VAR_2->ex_pkey = VAR_3->pkey;
    }

    return 0;
}
