
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_pk_type_t ;





 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;

unsigned char FUNC_0( mbedtls_pk_type_t VAR_3 )
{
    switch( VAR_3 ) {
        case 128:
            return( VAR_2 );
        case 130:
        case 129:
            return( VAR_1 );
        default:
            return( VAR_0 );
    }
}
