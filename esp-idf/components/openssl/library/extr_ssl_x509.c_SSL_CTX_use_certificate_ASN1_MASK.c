
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned char const*,int) ;

int FUNC_4(SSL_CTX *VAR_1, int VAR_2,
                                 const unsigned char *VAR_3)
{
    int VAR_4;
    X509 *VAR_5;

    VAR_5 = FUNC_3(((void*)0), VAR_3, VAR_2);
    if (!VAR_5) {
        FUNC_1(VAR_0, "d2i_X509() return NULL");
        goto failed1;
    }

    VAR_4 = FUNC_0(VAR_1, VAR_5);
    if (!VAR_4) {
        FUNC_1(VAR_0, "SSL_CTX_use_certificate() return %d", VAR_4);
        goto failed2;
    }

    return 1;

failed2:
    FUNC_2(VAR_5);
failed1:
    return 0;
}
