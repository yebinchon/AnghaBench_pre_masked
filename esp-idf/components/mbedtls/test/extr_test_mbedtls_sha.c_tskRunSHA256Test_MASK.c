
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_sha256_context ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned char*,int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_3)
{
    mbedtls_sha256_context VAR_4;
    unsigned char VAR_5[32];

    for (int VAR_6 = 0; VAR_6 < 1000; VAR_6++) {
        FUNC_3(&VAR_4);
        FUNC_0(0, FUNC_4(&VAR_4, 0));
        for (int VAR_7 = 0; VAR_7 < 10; VAR_7++) {
            FUNC_0(0, FUNC_5(&VAR_4, (unsigned char *)VAR_1, 100));
        }
        FUNC_0(0, FUNC_2(&VAR_4, VAR_5));

        FUNC_1(VAR_2, VAR_5, 32, "SHA256 calculation");
    }
    FUNC_7(VAR_0);
    FUNC_6(((void*)0));
}
