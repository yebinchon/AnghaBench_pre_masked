
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(SSL *VAR_3)
{
    int VAR_4;

    FUNC_0(VAR_3);

    VAR_4 = FUNC_3(VAR_3);
    if (1 != VAR_4) {
        FUNC_1(VAR_0, "SSL_shutdown return %d", VAR_4);
        goto failed1;
    }

    FUNC_2(VAR_1, VAR_3);

    VAR_4 = FUNC_2(VAR_2, VAR_3);
    if (!VAR_4) {
        FUNC_1(VAR_0, "SSL_METHOD_CALL(new) return %d", VAR_4);
        goto failed1;
    }

    return 1;

failed1:
    return VAR_4;
}
