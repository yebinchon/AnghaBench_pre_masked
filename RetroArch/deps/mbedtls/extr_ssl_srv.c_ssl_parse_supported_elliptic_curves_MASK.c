
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* handshake; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
typedef int mbedtls_ecp_curve_info ;
struct TYPE_5__ {int const** curves; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int ** FUNC_1 (size_t,int) ;
 int * FUNC_2 (unsigned char const) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_6,
                                                const unsigned char *VAR_7,
                                                size_t VAR_8 )
{
    size_t VAR_9, VAR_10;
    const unsigned char *VAR_11;
    const mbedtls_ecp_curve_info *VAR_12, **VAR_13;

    VAR_9 = ( ( VAR_7[0] << 8 ) | ( VAR_7[1] ) );
    if( VAR_9 + 2 != VAR_8 ||
        VAR_9 % 2 != 0 )
    {
        FUNC_0( 1, ( "bad client hello message" ) );
        FUNC_3( VAR_6, VAR_3,
                                        VAR_4 );
        return( VAR_2 );
    }


    if( VAR_6->handshake->curves != ((void*)0) )
    {
        FUNC_0( 1, ( "bad client hello message" ) );
        FUNC_3( VAR_6, VAR_3,
                                        VAR_4 );
        return( VAR_2 );
    }



    VAR_10 = VAR_9 / 2 + 1;
    if( VAR_10 > VAR_0 )
        VAR_10 = VAR_0;

    if( ( VAR_13 = FUNC_1( VAR_10, sizeof( *VAR_13 ) ) ) == ((void*)0) )
    {
        FUNC_3( VAR_6, VAR_3,
                                        VAR_5 );
        return( VAR_1 );
    }

    VAR_6->handshake->curves = VAR_13;

    VAR_11 = VAR_7 + 2;
    while( VAR_9 > 0 && VAR_10 > 1 )
    {
        VAR_12 = FUNC_2( ( VAR_11[0] << 8 ) | VAR_11[1] );

        if( VAR_12 != ((void*)0) )
        {
            *VAR_13++ = VAR_12;
            VAR_10--;
        }

        VAR_9 -= 2;
        VAR_11 += 2;
    }

    return( 0 );
}
