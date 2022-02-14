
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pkey_pm {unsigned char* pkey; } ;
typedef int mbedtls_pk_context ;
struct TYPE_3__ {scalar_t__ pkey_pm; } ;
typedef TYPE_1__ EVP_PKEY ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int,int *,int ) ;
 int FUNC_4 (unsigned char*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (unsigned char*,unsigned char const*,int) ;

int FUNC_7(EVP_PKEY *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
    int VAR_4;
    unsigned char *VAR_5;
    struct pkey_pm *VAR_6 = (struct pkey_pm *)VAR_1->pkey_pm;

    if (VAR_6->pkey)
        FUNC_1(VAR_6->pkey);

    if (!VAR_6->pkey) {
        VAR_6->pkey = FUNC_5(sizeof(mbedtls_pk_context));
        if (!VAR_6->pkey) {
            FUNC_0(VAR_0, "no enough memory > (pkey_pm->pkey)");
            goto no_mem;
        }
    }

    VAR_5 = FUNC_5(VAR_3 + 1);
    if (!VAR_5) {
        FUNC_0(VAR_0, "no enough memory > (load_buf)");
        goto failed;
    }

    FUNC_6(VAR_5, VAR_2, VAR_3);
    VAR_5[VAR_3] = '\0';

    FUNC_2(VAR_6->pkey);

    VAR_4 = FUNC_3(VAR_6->pkey, VAR_5, VAR_3 + 1, ((void*)0), 0);
    FUNC_4(VAR_5);

    if (VAR_4) {
        FUNC_0(VAR_0, "mbedtls_pk_parse_key return -0x%x", -VAR_4);
        goto failed;
    }

    return 0;

failed:
    FUNC_1(VAR_6->pkey);
    FUNC_4(VAR_6->pkey);
    VAR_6->pkey = ((void*)0);
no_mem:
    return -1;
}
