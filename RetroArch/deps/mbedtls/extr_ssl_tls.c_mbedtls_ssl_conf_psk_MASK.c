
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* psk; unsigned char* psk_identity; size_t psk_len; size_t psk_identity_len; } ;
typedef TYPE_1__ mbedtls_ssl_config ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;

int FUNC_3( mbedtls_ssl_config *VAR_4,
                const unsigned char *VAR_5, size_t VAR_6,
                const unsigned char *VAR_7, size_t VAR_8 )
{
    if( VAR_5 == ((void*)0) || VAR_7 == ((void*)0) )
        return( VAR_1 );

    if( VAR_6 > VAR_2 )
        return( VAR_1 );


    if( ( VAR_8 >> 16 ) != 0 ||
        VAR_8 > VAR_3 )
    {
        return( VAR_1 );
    }

    if( VAR_4->psk != ((void*)0) || VAR_4->psk_identity != ((void*)0) )
    {
        FUNC_1( VAR_4->psk );
        FUNC_1( VAR_4->psk_identity );
        VAR_4->psk = ((void*)0);
        VAR_4->psk_identity = ((void*)0);
    }

    if( ( VAR_4->psk = (unsigned char*)FUNC_0( 1, VAR_6 ) ) == ((void*)0) ||
        ( VAR_4->psk_identity = (unsigned char*)FUNC_0( 1, VAR_8 ) ) == ((void*)0) )
    {
        FUNC_1( VAR_4->psk );
        FUNC_1( VAR_4->psk_identity );
        VAR_4->psk = ((void*)0);
        VAR_4->psk_identity = ((void*)0);
        return( VAR_0 );
    }

    VAR_4->psk_len = VAR_6;
    VAR_4->psk_identity_len = VAR_8;

    FUNC_2( VAR_4->psk, VAR_5, VAR_4->psk_len );
    FUNC_2( VAR_4->psk_identity, VAR_7, VAR_4->psk_identity_len );

    return( 0 );
}
