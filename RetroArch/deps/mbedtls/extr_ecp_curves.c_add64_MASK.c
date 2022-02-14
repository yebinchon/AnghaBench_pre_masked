
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mbedtls_mpi_uint ;



__attribute__((used)) static void FUNC_0( mbedtls_mpi_uint *VAR_0, mbedtls_mpi_uint *VAR_1, mbedtls_mpi_uint *VAR_2 )
{
    unsigned char VAR_3;
    mbedtls_mpi_uint VAR_4 = 0;
    for( VAR_3 = 0; VAR_3 < 8 / sizeof( mbedtls_mpi_uint ); VAR_3++, VAR_0++, VAR_1++ )
    {
        *VAR_0 += VAR_4; VAR_4 = ( *VAR_0 < VAR_4 );
        *VAR_0 += *VAR_1; VAR_4 += ( *VAR_0 < *VAR_1 );
    }
    *VAR_2 += VAR_4;
}
