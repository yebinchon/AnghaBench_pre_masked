
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi_uint ;


 int VAR_0 ;

__attribute__((used)) static size_t FUNC_0( const mbedtls_mpi_uint VAR_1 )
{
    size_t VAR_2;
    mbedtls_mpi_uint VAR_3 = (mbedtls_mpi_uint) 1 << (VAR_0 - 1);

    for( VAR_2 = 0; VAR_2 < VAR_0; VAR_2++ )
    {
        if( VAR_1 & VAR_3 ) break;

        VAR_3 >>= 1;
    }

    return VAR_2;
}
