
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char tag; unsigned char* p; int len; } ;
typedef TYPE_1__ mbedtls_asn1_buf ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char**,unsigned char const*,int *,int) ;

__attribute__((used)) static int FUNC_1( unsigned char **VAR_6, const unsigned char *VAR_7,
                            mbedtls_asn1_buf *VAR_8 )
{
    int VAR_9;


    VAR_8->tag = **VAR_6;
    if( VAR_8->tag != VAR_1



            )
    {
        return( VAR_5 +
                VAR_4 );
    }

    if( ( VAR_9 = FUNC_0( VAR_6, VAR_7, &VAR_8->len, VAR_8->tag ) ) != 0 )
    {
        return( VAR_5 + VAR_9 );
    }

    VAR_8->p = *VAR_6;
    *VAR_6 += VAR_8->len;

    if( *VAR_6 != VAR_7 )
        return( VAR_5 +
                VAR_3 );

    return( 0 );
}
