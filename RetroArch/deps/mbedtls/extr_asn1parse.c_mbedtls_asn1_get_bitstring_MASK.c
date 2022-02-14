
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; unsigned char unused_bits; unsigned char* p; } ;
typedef TYPE_1__ mbedtls_asn1_bitstring ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char**,unsigned char const*,int*,int ) ;

int FUNC_1( unsigned char **VAR_4, const unsigned char *VAR_5,
                        mbedtls_asn1_bitstring *VAR_6)
{
    int VAR_7;


    if( ( VAR_7 = FUNC_0( VAR_4, VAR_5, &VAR_6->len, VAR_0 ) ) != 0 )
        return( VAR_7 );


    if( VAR_6->len < 1 )
        return( VAR_3 );
    VAR_6->len -= 1;


    VAR_6->unused_bits = **VAR_4;
    if( VAR_6->unused_bits > 7 )
        return( VAR_1 );
    (*VAR_4)++;


    VAR_6->p = *VAR_4;
    *VAR_4 += VAR_6->len;

    if( *VAR_4 != VAR_5 )
        return( VAR_2 );

    return( 0 );
}
