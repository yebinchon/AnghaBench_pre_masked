
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi_uint ;



__attribute__((used)) static void FUNC_0( size_t VAR_0, mbedtls_mpi_uint *VAR_1, mbedtls_mpi_uint *VAR_2 )
{
    size_t VAR_3;
    mbedtls_mpi_uint VAR_4, VAR_5;

    for( VAR_3 = VAR_4 = 0; VAR_3 < VAR_0; VAR_3++, VAR_1++, VAR_2++ )
    {
        VAR_5 = ( *VAR_2 < VAR_4 ); *VAR_2 -= VAR_4;
        VAR_4 = ( *VAR_2 < *VAR_1 ) + VAR_5; *VAR_2 -= *VAR_1;
    }

    while( VAR_4 != 0 )
    {
        VAR_5 = ( *VAR_2 < VAR_4 ); *VAR_2 -= VAR_4;
        VAR_4 = VAR_5; VAR_3++; VAR_2++;
    }
}
