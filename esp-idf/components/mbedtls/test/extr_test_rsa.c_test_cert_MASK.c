
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int pk; } ;
typedef TYPE_1__ mbedtls_x509_crt ;
typedef int mbedtls_rsa_context ;
typedef int buf ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int const*,char*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,size_t) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,int,char*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int const*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char const*) ;

__attribute__((used)) static void FUNC_13(const char *VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
    mbedtls_x509_crt VAR_4;
    mbedtls_rsa_context *VAR_5;
    char VAR_6[VAR_3];

    FUNC_3(VAR_6, VAR_3);

    FUNC_9(&VAR_4);

    FUNC_0(0,
                                    -FUNC_10(&VAR_4,
                                                            (const uint8_t *)VAR_1,
                                                            FUNC_12(VAR_1)+1),
                                    "parse cert");

    VAR_5 = FUNC_4(VAR_4.pk);
    FUNC_2(VAR_5);

    FUNC_0(0,
                                    -FUNC_5(VAR_5),
                                    "check cert pubkey");

    FUNC_8(VAR_6, sizeof(VAR_6), "", &VAR_4);
    FUNC_11(VAR_6);

    FUNC_0(0,
                                    -FUNC_6(VAR_5, VAR_0, (uint8_t *)VAR_6),
                                    "RSA PK operation");
    FUNC_1(VAR_2, VAR_6, VAR_3);

    FUNC_7(&VAR_4);
}
