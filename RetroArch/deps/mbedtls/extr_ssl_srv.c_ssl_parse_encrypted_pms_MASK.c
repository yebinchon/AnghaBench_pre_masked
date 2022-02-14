
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int peer_pms ;
struct TYPE_8__ {scalar_t__ minor_ver; TYPE_2__* handshake; TYPE_1__* conf; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
typedef int len ;
typedef int fake_pms ;
struct TYPE_7__ {unsigned char* premaster; int pmslen; int max_minor_ver; int max_major_ver; } ;
struct TYPE_6__ {int (* f_rng ) (int ,unsigned char*,int) ;int p_rng; int transport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned char const*,size_t,unsigned char*,size_t*,int,int (*) (int ,unsigned char*,int),int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ,int ,unsigned char*) ;
 int FUNC_6 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_7( mbedtls_ssl_context *VAR_5,
                                    const unsigned char *VAR_6,
                                    const unsigned char *VAR_7,
                                    size_t VAR_8 )
{
    int VAR_9;
    size_t VAR_10 = FUNC_3( FUNC_4( VAR_5 ) );
    unsigned char *VAR_11 = VAR_5->handshake->premaster + VAR_8;
    unsigned char VAR_12[2];
    unsigned char VAR_13[48], VAR_14[48];
    unsigned char VAR_15;
    size_t VAR_16, VAR_17;
    unsigned int VAR_18;

    if( ! FUNC_1( FUNC_4( VAR_5 ), VAR_3 ) )
    {
        FUNC_0( 1, ( "got no RSA private key" ) );
        return( VAR_2 );
    }
    if( VAR_6 + VAR_10 != VAR_7 )
    {
        FUNC_0( 1, ( "bad client key exchange message" ) );
        return( VAR_0 );
    }

    FUNC_5( VAR_5->handshake->max_major_ver,
                       VAR_5->handshake->max_minor_ver,
                       VAR_5->conf->transport, VAR_12 );
    VAR_9 = VAR_5->conf->f_rng( VAR_5->conf->p_rng, VAR_13, sizeof( VAR_13 ) );
    if( VAR_9 != 0 )
        return( VAR_9 );

    VAR_9 = FUNC_2( FUNC_4( VAR_5 ), VAR_6, VAR_10,
                      VAR_14, &VAR_17,
                      sizeof( VAR_14 ),
                      VAR_5->conf->f_rng, VAR_5->conf->p_rng );

    VAR_18 = (unsigned int) VAR_9;
    VAR_18 |= VAR_17 ^ 48;
    VAR_18 |= VAR_14[0] ^ VAR_12[0];
    VAR_18 |= VAR_14[1] ^ VAR_12[1];






    if( sizeof( VAR_5->handshake->premaster ) < VAR_8 ||
        sizeof( VAR_5->handshake->premaster ) - VAR_8 < 48 )
    {
        FUNC_0( 1, ( "should never happen" ) );
        return( VAR_1 );
    }
    VAR_5->handshake->pmslen = 48;
    VAR_15 = - ( ( VAR_18 | - VAR_18 ) >> ( sizeof( unsigned int ) * 8 - 1 ) );




    for( VAR_16 = 0; VAR_16 < VAR_5->handshake->pmslen; VAR_16++ )
        VAR_11[VAR_16] = ( VAR_15 & VAR_13[VAR_16] ) | ( (~VAR_15) & VAR_14[VAR_16] );

    return( 0 );
}
