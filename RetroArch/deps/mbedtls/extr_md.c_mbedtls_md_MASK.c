
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* digest_func ) (unsigned char const*,size_t,unsigned char*) ;} ;
typedef TYPE_1__ mbedtls_md_info_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,size_t,unsigned char*) ;

int FUNC_1( const mbedtls_md_info_t *VAR_1, const unsigned char *VAR_2, size_t VAR_3,
            unsigned char *VAR_4 )
{
    if( VAR_1 == ((void*)0) )
        return( VAR_0 );

    VAR_1->digest_func( VAR_2, VAR_3, VAR_4 );

    return( 0 );
}
