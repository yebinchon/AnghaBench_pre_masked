
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char size; } ;
typedef TYPE_1__ mbedtls_md_info_t ;



unsigned char FUNC_0( const mbedtls_md_info_t *VAR_0 )
{
    if( VAR_0 == ((void*)0) )
        return( 0 );

    return VAR_0->size;
}
