
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_sha512_context ;
typedef int mbedtls_sha256_context ;
typedef int mbedtls_sha1_context ;
typedef scalar_t__ esp_sha_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char const*,size_t) ;
 int FUNC_7 (int *,unsigned char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,unsigned char const*,size_t) ;
 int FUNC_11 (int *,unsigned char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,unsigned char const*,size_t) ;

void FUNC_15(esp_sha_type VAR_4, const unsigned char *VAR_5, size_t VAR_6, unsigned char *VAR_7)
{
    int VAR_8;
    FUNC_0(VAR_5 != ((void*)0) && VAR_7 != ((void*)0));

    if (VAR_4 == VAR_0) {

        mbedtls_sha1_context *VAR_9 = (mbedtls_sha1_context *)FUNC_2(sizeof(mbedtls_sha1_context));
        FUNC_0(VAR_9 != ((void*)0));
        FUNC_5(VAR_9);
        VAR_8 = FUNC_6(VAR_9, VAR_5, VAR_6);
        FUNC_0(VAR_8 == 0);
        VAR_8 = FUNC_3(VAR_9, VAR_7);
        FUNC_0(VAR_8 == 0);
        FUNC_4(VAR_9);
        FUNC_1(VAR_9);

    } else if (VAR_4 == VAR_1) {

        mbedtls_sha256_context *VAR_10 = (mbedtls_sha256_context *)FUNC_2(sizeof(mbedtls_sha256_context));
        FUNC_0(VAR_10 != ((void*)0));
        FUNC_9(VAR_10, 0);
        VAR_8 = FUNC_10(VAR_10, VAR_5, VAR_6);
        FUNC_0(VAR_8 == 0);
        VAR_8 = FUNC_7(VAR_10, VAR_7);
        FUNC_0(VAR_8 == 0);
        FUNC_8(VAR_10);
        FUNC_1(VAR_10);

    } else if (VAR_4 == VAR_2) {

        mbedtls_sha512_context *VAR_11 = (mbedtls_sha512_context *)FUNC_2(sizeof(mbedtls_sha512_context));
        FUNC_0(VAR_11 != ((void*)0));
        FUNC_13(VAR_11, 1);
        VAR_8 = FUNC_14(VAR_11, VAR_5, VAR_6);
        FUNC_0(VAR_8 == 0);
        VAR_8 = FUNC_11(VAR_11, VAR_7);
        FUNC_0(VAR_8 == 0);
        FUNC_12(VAR_11);
        FUNC_1(VAR_11);

    } else if (VAR_4 == VAR_3) {

        mbedtls_sha512_context *VAR_12 = (mbedtls_sha512_context *)FUNC_2(sizeof(mbedtls_sha512_context));
        FUNC_0(VAR_12 != ((void*)0));
        FUNC_13(VAR_12, 0);
        VAR_8 = FUNC_14(VAR_12, VAR_5, VAR_6);
        FUNC_0(VAR_8 == 0);
        VAR_8 = FUNC_11(VAR_12, VAR_7);
        FUNC_0(VAR_8 == 0);
        FUNC_12(VAR_12);
        FUNC_1(VAR_12);

    }

}
