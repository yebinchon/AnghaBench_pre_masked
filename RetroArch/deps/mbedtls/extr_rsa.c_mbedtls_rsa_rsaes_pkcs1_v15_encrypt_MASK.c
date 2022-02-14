
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ padding; size_t len; } ;
typedef TYPE_1__ mbedtls_rsa_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*,unsigned char*,unsigned char*) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;

int FUNC_3( mbedtls_rsa_context *VAR_7,
                                 int (*VAR_8)(void *, unsigned char *, size_t),
                                 void *VAR_9,
                                 int VAR_10, size_t VAR_11,
                                 const unsigned char *VAR_12,
                                 unsigned char *VAR_13 )
{
    size_t VAR_14, VAR_15;
    int VAR_16;
    unsigned char *VAR_17 = VAR_13;

    if( VAR_10 == VAR_4 && VAR_7->padding != VAR_3 )
        return( VAR_0 );


    if( VAR_8 == ((void*)0) || VAR_12 == ((void*)0) || VAR_13 == ((void*)0) )
        return( VAR_0 );

    VAR_15 = VAR_7->len;


    if( VAR_11 + 11 < VAR_11 || VAR_15 < VAR_11 + 11 )
        return( VAR_0 );

    VAR_14 = VAR_15 - 3 - VAR_11;

    *VAR_17++ = 0;
    if( VAR_10 == VAR_5 )
    {
        *VAR_17++ = VAR_2;

        while( VAR_14-- > 0 )
        {
            int VAR_18 = 100;

            do {
                VAR_16 = VAR_8( VAR_9, VAR_17, 1 );
            } while( *VAR_17 == 0 && --VAR_18 && VAR_16 == 0 );


            if( VAR_18 == 0 || VAR_16 != 0 )
                return( VAR_1 + VAR_16 );

            VAR_17++;
        }
    }
    else
    {
        *VAR_17++ = VAR_6;

        while( VAR_14-- > 0 )
            *VAR_17++ = 0xFF;
    }

    *VAR_17++ = 0;
    FUNC_2( VAR_17, VAR_12, VAR_11 );

    return( ( VAR_10 == VAR_5 )
            ? FUNC_1( VAR_7, VAR_13, VAR_13 )
            : FUNC_0( VAR_7, VAR_8, VAR_9, VAR_13, VAR_13 ) );
}
