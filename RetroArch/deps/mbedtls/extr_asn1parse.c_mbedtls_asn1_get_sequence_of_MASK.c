
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned char tag; size_t len; unsigned char* p; } ;
struct TYPE_4__ {struct TYPE_4__* next; TYPE_2__ buf; } ;
typedef TYPE_1__ mbedtls_asn1_sequence ;
typedef TYPE_2__ mbedtls_asn1_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*,int) ;
 scalar_t__ FUNC_1 (int,int) ;

int FUNC_2( unsigned char **VAR_4,
                          const unsigned char *VAR_5,
                          mbedtls_asn1_sequence *VAR_6,
                          int VAR_7)
{
    int VAR_8;
    size_t VAR_9;
    mbedtls_asn1_buf *VAR_10;


    if( ( VAR_8 = FUNC_0( VAR_4, VAR_5, &VAR_9,
            VAR_0 | VAR_1 ) ) != 0 )
        return( VAR_8 );

    if( *VAR_4 + VAR_9 != VAR_5 )
        return( VAR_3 );

    while( *VAR_4 < VAR_5 )
    {
        VAR_10 = &(VAR_6->buf);
        VAR_10->tag = **VAR_4;

        if( ( VAR_8 = FUNC_0( VAR_4, VAR_5, &VAR_10->len, VAR_7 ) ) != 0 )
            return( VAR_8 );

        VAR_10->p = *VAR_4;
        *VAR_4 += VAR_10->len;


        if( *VAR_4 < VAR_5 )
        {
            VAR_6->next = (mbedtls_asn1_sequence*)FUNC_1( 1,
                                            sizeof( mbedtls_asn1_sequence ) );

            if( VAR_6->next == ((void*)0) )
                return( VAR_2 );

            VAR_6 = VAR_6->next;
        }
    }


    VAR_6->next = ((void*)0);

    if( *VAR_4 != VAR_5 )
        return( VAR_3 );

    return( 0 );
}
