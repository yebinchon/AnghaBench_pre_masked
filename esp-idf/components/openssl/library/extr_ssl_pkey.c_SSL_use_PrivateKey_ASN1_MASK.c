
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ,int *,unsigned char const**,long) ;

int FUNC_4(int VAR_1, SSL *VAR_2,
                                const unsigned char *VAR_3, long VAR_4)
{
    int VAR_5;
    EVP_PKEY *VAR_6;

    VAR_6 = FUNC_3(0, ((void*)0), &VAR_3, VAR_4);
    if (!VAR_6) {
        FUNC_1(VAR_0, "d2i_PrivateKey() return NULL");
        goto failed1;
    }

    VAR_5 = FUNC_2(VAR_2, VAR_6);
    if (!VAR_5) {
        FUNC_1(VAR_0, "SSL_use_PrivateKey() return %d", VAR_5);
        goto failed2;
    }

    return 1;

failed2:
    FUNC_0(VAR_6);
failed1:
    return 0;
}
