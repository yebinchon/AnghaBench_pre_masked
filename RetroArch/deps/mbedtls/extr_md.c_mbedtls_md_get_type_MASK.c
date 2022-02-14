
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_md_type_t ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ mbedtls_md_info_t ;


 int VAR_0 ;

mbedtls_md_type_t FUNC_0( const mbedtls_md_info_t *VAR_1 )
{
    if( VAR_1 == ((void*)0) )
        return( VAR_0 );

    return VAR_1->type;
}
