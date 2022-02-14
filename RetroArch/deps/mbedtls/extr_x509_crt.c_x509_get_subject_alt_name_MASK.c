
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* p; unsigned char tag; size_t len; } ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_3__ buf; } ;
typedef TYPE_1__ mbedtls_x509_sequence ;
typedef TYPE_1__ mbedtls_asn1_sequence ;
typedef TYPE_3__ mbedtls_asn1_buf ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*) ;
 int FUNC_1 (unsigned char**,unsigned char const*,size_t*,int) ;
 TYPE_1__* FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3( unsigned char **VAR_8,
                                      const unsigned char *VAR_9,
                                      mbedtls_x509_sequence *VAR_10 )
{
    int VAR_11;
    size_t VAR_12, VAR_13;
    mbedtls_asn1_buf *VAR_14;
    unsigned char VAR_15;
    mbedtls_asn1_sequence *VAR_16 = VAR_10;


    if( ( VAR_11 = FUNC_1( VAR_8, VAR_9, &VAR_12,
            VAR_0 | VAR_2 ) ) != 0 )
        return( VAR_7 + VAR_11 );

    if( *VAR_8 + VAR_12 != VAR_9 )
        return( VAR_7 +
                VAR_4 );

    while( *VAR_8 < VAR_9 )
    {
        if( ( VAR_9 - *VAR_8 ) < 1 )
            return( VAR_7 +
                    VAR_5 );

        VAR_15 = **VAR_8;
        (*VAR_8)++;
        if( ( VAR_11 = FUNC_0( VAR_8, VAR_9, &VAR_13 ) ) != 0 )
            return( VAR_7 + VAR_11 );

        if( ( VAR_15 & VAR_1 ) != VAR_1 )
            return( VAR_7 +
                    VAR_6 );


        if( VAR_15 != ( VAR_1 | 2 ) )
        {
            *VAR_8 += VAR_13;
            continue;
        }


        if( VAR_16->buf.p != ((void*)0) )
        {
            if( VAR_16->next != ((void*)0) )
                return( VAR_7 );

            VAR_16->next = FUNC_2( 1, sizeof( mbedtls_asn1_sequence ) );

            if( VAR_16->next == ((void*)0) )
                return( VAR_7 +
                        VAR_3 );

            VAR_16 = VAR_16->next;
        }

        VAR_14 = &(VAR_16->buf);
        VAR_14->tag = VAR_15;
        VAR_14->p = *VAR_8;
        VAR_14->len = VAR_13;
        *VAR_8 += VAR_14->len;
    }


    VAR_16->next = ((void*)0);

    if( *VAR_8 != VAR_9 )
        return( VAR_7 +
                VAR_4 );

    return( 0 );
}
