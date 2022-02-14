
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi_uint ;



__attribute__((used)) static void FUNC_0( mbedtls_mpi_uint *VAR_0, mbedtls_mpi_uint *VAR_1 )
{
    unsigned char VAR_2;
    for( VAR_2 = 0; VAR_2 < 8 / sizeof( mbedtls_mpi_uint ); VAR_2++, VAR_0++ )
    {
        *VAR_0 += *VAR_1;
        *VAR_1 = ( *VAR_0 < *VAR_1 );
    }
}
