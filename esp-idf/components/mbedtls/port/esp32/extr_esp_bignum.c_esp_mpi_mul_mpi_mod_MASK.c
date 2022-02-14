
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ mbedtls_mpi_uint ;
typedef int const mbedtls_mpi ;


 int FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_4 (size_t) ;
 int FUNC_5 (int const*,int const*,size_t) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 size_t FUNC_8 (size_t) ;
 size_t FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int const*) ;
 int FUNC_13 (int const*,int const*,int const*,size_t,size_t) ;
 int FUNC_14 (int ,int const*,size_t) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

int FUNC_17(mbedtls_mpi *VAR_6, const mbedtls_mpi *VAR_7, const mbedtls_mpi *VAR_8, const mbedtls_mpi *VAR_9)
{
    int VAR_10;
    size_t VAR_11 = FUNC_9(VAR_7);
    size_t VAR_12 = FUNC_9(VAR_8);
    size_t VAR_13 = FUNC_9(VAR_9);
    size_t VAR_14 = FUNC_3(VAR_13, VAR_11 + VAR_12);
    size_t VAR_15 = FUNC_4(VAR_11);
    size_t VAR_16 = FUNC_4(VAR_12);
    size_t VAR_17 = FUNC_4(VAR_13);
    size_t VAR_18 = FUNC_4(VAR_14);
    size_t VAR_19 = FUNC_8(FUNC_1(VAR_15, FUNC_1(VAR_16, VAR_17)));
    mbedtls_mpi VAR_20;
    mbedtls_mpi_uint VAR_21;


    FUNC_11(&VAR_20);
    FUNC_2(FUNC_5(&VAR_20, VAR_9, VAR_19));
    VAR_21 = FUNC_12(VAR_9);

    FUNC_6();


    FUNC_14(VAR_0, VAR_9, VAR_19);
    FUNC_14(VAR_2, VAR_7, VAR_19);
    FUNC_14(VAR_1, &VAR_20, VAR_19);
    FUNC_0(VAR_5, (uint32_t)VAR_21);


    FUNC_0(VAR_3, (VAR_19 / 16) - 1);


    FUNC_15(VAR_4);

    FUNC_16(VAR_4);


    VAR_10 = FUNC_13(VAR_6, VAR_7, VAR_8, VAR_19, VAR_18);

    FUNC_7();

 cleanup:
    FUNC_10(&VAR_20);
    return VAR_10;
}
