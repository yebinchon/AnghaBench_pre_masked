
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tag; scalar_t__ len; } ;
typedef TYPE_1__ mbedtls_asn1_buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,unsigned char const*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

int FUNC_2( unsigned char **VAR_2,
                       const unsigned char *VAR_3,
                       mbedtls_asn1_buf *VAR_4 )
{
    int VAR_5;
    mbedtls_asn1_buf VAR_6;

    FUNC_1( &VAR_6, 0, sizeof(mbedtls_asn1_buf) );

    if( ( VAR_5 = FUNC_0( VAR_2, VAR_3, VAR_4, &VAR_6 ) ) != 0 )
        return( VAR_5 );

    if( ( VAR_6.tag != VAR_0 && VAR_6.tag != 0 ) || VAR_6.len != 0 )
        return( VAR_1 );

    return( 0 );
}
