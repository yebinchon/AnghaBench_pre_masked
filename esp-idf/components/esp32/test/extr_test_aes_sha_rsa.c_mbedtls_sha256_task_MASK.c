
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;
typedef int output ;
typedef int mbedtls_sha256_context ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,unsigned char*,int,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_2)
{
    xSemaphoreHandle *VAR_3 = (xSemaphoreHandle *) VAR_2;
    FUNC_0(VAR_0, "mbedtls_sha256_task is started");
    const char *VAR_4 = "@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_abcdefghijklmnopqrstuvwxyz~DEL0123456789Space!#$%&()*+,-.0123456789:;<=>?";
    mbedtls_sha256_context VAR_5;
    unsigned char VAR_6[32];
    unsigned char VAR_7[32];

    FUNC_3(&VAR_5);
    FUNC_7(VAR_6, 0, sizeof(VAR_6));
    FUNC_4(&VAR_5, 0);
    for (int VAR_8 = 0; VAR_8 < 3; ++VAR_8) {
        FUNC_5(&VAR_5, (unsigned char *)VAR_4, 100);
    }
    FUNC_2(&VAR_5, VAR_6);
    FUNC_6(VAR_7, VAR_6, sizeof(VAR_6));

    while (VAR_1 == 0) {
        FUNC_3(&VAR_5);
        FUNC_7(VAR_6, 0, sizeof(VAR_6));
        FUNC_4(&VAR_5, 0);
        for (int VAR_9 = 0; VAR_9 < 3; ++VAR_9) {
            FUNC_5(&VAR_5, (unsigned char *)VAR_4, 100);
        }
        FUNC_2(&VAR_5, VAR_6);

        FUNC_1(VAR_6, VAR_7, sizeof(VAR_6), "MBEDTLS SHA256 must match");
    }
    FUNC_9(*VAR_3);
    FUNC_8(((void*)0));
}
