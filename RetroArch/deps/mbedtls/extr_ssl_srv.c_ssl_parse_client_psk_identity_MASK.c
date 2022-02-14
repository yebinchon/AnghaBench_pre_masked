
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_6__ {scalar_t__ (* f_psk ) (int ,TYPE_2__*,unsigned char*,size_t) ;size_t psk_identity_len; scalar_t__ psk_len; int * psk_identity; int p_psk; int * psk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,unsigned char*,size_t) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,size_t) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5( mbedtls_ssl_context *VAR_5, unsigned char **VAR_6,
                                          const unsigned char *VAR_7 )
{
    int VAR_8 = 0;
    size_t VAR_9;

    if( VAR_5->conf->f_psk == ((void*)0) &&
        ( VAR_5->conf->psk == ((void*)0) || VAR_5->conf->psk_identity == ((void*)0) ||
          VAR_5->conf->psk_identity_len == 0 || VAR_5->conf->psk_len == 0 ) )
    {
        FUNC_1( 1, ( "got no pre-shared key" ) );
        return( VAR_1 );
    }




    if( *VAR_6 + 2 > VAR_7 )
    {
        FUNC_1( 1, ( "bad client key exchange message" ) );
        return( VAR_0 );
    }

    VAR_9 = ( (*VAR_6)[0] << 8 ) | (*VAR_6)[1];
    *VAR_6 += 2;

    if( VAR_9 < 1 || VAR_9 > 65535 || *VAR_6 + VAR_9 > VAR_7 )
    {
        FUNC_1( 1, ( "bad client key exchange message" ) );
        return( VAR_0 );
    }

    if( VAR_5->conf->f_psk != ((void*)0) )
    {
        if( VAR_5->conf->f_psk( VAR_5->conf->p_psk, VAR_5, *VAR_6, VAR_9 ) != 0 )
            VAR_8 = VAR_2;
    }
    else
    {


        if( VAR_9 != VAR_5->conf->psk_identity_len ||
            FUNC_2( VAR_5->conf->psk_identity, *VAR_6, VAR_9 ) != 0 )
        {
            VAR_8 = VAR_2;
        }
    }

    if( VAR_8 == VAR_2 )
    {
        FUNC_0( 3, "Unknown PSK identity", *VAR_6, VAR_9 );
        FUNC_3( VAR_5, VAR_3,
                                        VAR_4 );
        return( VAR_2 );
    }

    *VAR_6 += VAR_9;

    return( 0 );
}
