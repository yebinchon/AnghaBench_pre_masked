
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char mbedtls_mpi_uint ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0( mbedtls_mpi_uint *VAR_1, int VAR_2, char VAR_3 )
{
    *VAR_1 = 255;

    if( VAR_3 >= 0x30 && VAR_3 <= 0x39 ) *VAR_1 = VAR_3 - 0x30;
    if( VAR_3 >= 0x41 && VAR_3 <= 0x46 ) *VAR_1 = VAR_3 - 0x37;
    if( VAR_3 >= 0x61 && VAR_3 <= 0x66 ) *VAR_1 = VAR_3 - 0x57;

    if( *VAR_1 >= (mbedtls_mpi_uint) VAR_2 )
        return( VAR_0 );

    return( 0 );
}
