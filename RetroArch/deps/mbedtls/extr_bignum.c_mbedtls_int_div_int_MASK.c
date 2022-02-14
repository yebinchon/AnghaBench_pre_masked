
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_t_udbl ;
typedef int mbedtls_mpi_uint ;
typedef int mbedtls_mpi_sint ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int) ;

__attribute__((used)) static mbedtls_mpi_uint FUNC_1( mbedtls_mpi_uint VAR_2,
            mbedtls_mpi_uint VAR_3, mbedtls_mpi_uint VAR_4, mbedtls_mpi_uint *VAR_5 )
{



    const mbedtls_mpi_uint VAR_6 = (mbedtls_mpi_uint) 1 << VAR_0;
    const mbedtls_mpi_uint VAR_7 = ( (mbedtls_mpi_uint) 1 << VAR_0 ) - 1;
    mbedtls_mpi_uint VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    mbedtls_mpi_uint VAR_15, VAR_16;
    size_t VAR_17;





    if( 0 == VAR_4 || VAR_2 >= VAR_4 )
    {
        if (VAR_5 != ((void*)0)) *VAR_5 = ~0;

        return ( ~0 );
    }
    VAR_17 = FUNC_0( VAR_4 );
    VAR_4 = VAR_4 << VAR_17;

    VAR_2 = VAR_2 << VAR_17;
    VAR_2 |= ( VAR_3 >> ( VAR_1 - VAR_17 ) ) & ( -(mbedtls_mpi_sint)VAR_17 >> ( VAR_1 - 1 ) );
    VAR_3 = VAR_3 << VAR_17;

    VAR_9 = VAR_4 >> VAR_0;
    VAR_8 = VAR_4 & VAR_7;

    VAR_15 = VAR_3 >> VAR_0;
    VAR_16 = VAR_3 & VAR_7;




    VAR_11 = VAR_2 / VAR_9;
    VAR_13 = VAR_2 - VAR_9 * VAR_11;

    while( VAR_11 >= VAR_6 || ( VAR_11 * VAR_8 > VAR_6 * VAR_13 + VAR_15 ) )
    {
        VAR_11 -= 1;
        VAR_13 += VAR_9;

        if ( VAR_13 >= VAR_6 ) break;
    }

    VAR_12 = ( VAR_2 * VAR_6 ) + ( VAR_15 - VAR_11 * VAR_4 );
    VAR_10 = VAR_12 / VAR_9;
    VAR_13 = VAR_12 - VAR_10 * VAR_9;

    while( VAR_10 >= VAR_6 || ( VAR_10 * VAR_8 > VAR_6 * VAR_13 + VAR_16 ) )
    {
        VAR_10 -= 1;
        VAR_13 += VAR_9;

        if ( VAR_13 >= VAR_6 ) break;
    }

    if (VAR_5 != ((void*)0))
        *VAR_5 = ( VAR_12 * VAR_6 + VAR_16 - VAR_10 * VAR_4 ) >> VAR_17;

    VAR_14 = VAR_11 * VAR_6 + VAR_10;

    return VAR_14;

}
