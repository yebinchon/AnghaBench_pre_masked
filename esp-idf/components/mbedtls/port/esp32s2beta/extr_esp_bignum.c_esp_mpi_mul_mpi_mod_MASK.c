
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ mbedtls_mpi_uint ;
typedef int const mbedtls_mpi ;


 int FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int const*,int const*,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*,int ,size_t) ;
 scalar_t__ FUNC_9 (int const*) ;
 int FUNC_10 (int ,int const*,size_t) ;
 size_t FUNC_11 (int const*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

int FUNC_14(mbedtls_mpi *VAR_9, const mbedtls_mpi *VAR_10, const mbedtls_mpi *VAR_11, const mbedtls_mpi *VAR_12)
{
    int VAR_13;
    size_t VAR_14 = FUNC_11(VAR_12);
    mbedtls_mpi VAR_15;
    mbedtls_mpi_uint VAR_16;

    size_t VAR_17 = FUNC_1(FUNC_1(VAR_14, FUNC_11(VAR_10)), FUNC_11(VAR_11));

    if (VAR_17 * 32 > 4096) {
        return VAR_0;
    }


    FUNC_7(&VAR_15);
    FUNC_2(FUNC_3(&VAR_15, VAR_12, VAR_14));
    VAR_16 = FUNC_9(VAR_12);

    FUNC_4();

    FUNC_0(VAR_1, (VAR_17 - 1));
    FUNC_0(VAR_8, (uint32_t)VAR_16);


    FUNC_10(VAR_2, VAR_12, VAR_17);
    FUNC_10(VAR_4, VAR_10, VAR_17);
    FUNC_10(VAR_5, VAR_11, VAR_17);
    FUNC_10(VAR_3, &VAR_15, VAR_17);


    FUNC_12(VAR_7);

    FUNC_13(VAR_7);

    FUNC_8(VAR_9, VAR_6, VAR_14);

    FUNC_5();

 cleanup:
    FUNC_6(&VAR_15);
    return VAR_13;
}
