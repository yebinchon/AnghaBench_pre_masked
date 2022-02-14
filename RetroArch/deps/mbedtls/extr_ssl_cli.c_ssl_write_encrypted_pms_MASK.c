
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ minor_ver; unsigned char* out_msg; TYPE_4__* conf; TYPE_3__* handshake; TYPE_2__* session_negotiate; } ;
typedef TYPE_5__ mbedtls_ssl_context ;
struct TYPE_10__ {int (* f_rng ) (int ,unsigned char*,int) ;int p_rng; int transport; int max_minor_ver; int max_major_ver; } ;
struct TYPE_9__ {unsigned char* premaster; int pmslen; } ;
struct TYPE_8__ {TYPE_1__* peer_cert; } ;
struct TYPE_7__ {int pk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned char*,int,unsigned char*,size_t*,size_t,int (*) (int ,unsigned char*,int),int ) ;
 int FUNC_4 (int ,int ,int ,unsigned char*) ;
 int FUNC_5 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_context *VAR_6,
                                    size_t VAR_7, size_t *VAR_8,
                                    size_t VAR_9 )
{
    int VAR_10;
    size_t VAR_11 = VAR_6->minor_ver == VAR_5 ? 0 : 2;
    unsigned char *VAR_12 = VAR_6->handshake->premaster + VAR_9;

    if( VAR_7 + VAR_11 > VAR_4 )
    {
        FUNC_0( 1, ( "buffer too small for encrypted pms" ) );
        return( VAR_0 );
    }
    FUNC_4( VAR_6->conf->max_major_ver, VAR_6->conf->max_minor_ver,
                       VAR_6->conf->transport, VAR_12 );

    if( ( VAR_10 = VAR_6->conf->f_rng( VAR_6->conf->p_rng, VAR_12 + 2, 46 ) ) != 0 )
    {
        FUNC_1( 1, "f_rng", VAR_10 );
        return( VAR_10 );
    }

    VAR_6->handshake->pmslen = 48;

    if( VAR_6->session_negotiate->peer_cert == ((void*)0) )
    {
        FUNC_0( 2, ( "certificate required" ) );
        return( VAR_2 );
    }




    if( ! FUNC_2( &VAR_6->session_negotiate->peer_cert->pk,
                VAR_3 ) )
    {
        FUNC_0( 1, ( "certificate key type mismatch" ) );
        return( VAR_1 );
    }

    if( ( VAR_10 = FUNC_3( &VAR_6->session_negotiate->peer_cert->pk,
                            VAR_12, VAR_6->handshake->pmslen,
                            VAR_6->out_msg + VAR_7 + VAR_11, VAR_8,
                            VAR_4 - VAR_7 - VAR_11,
                            VAR_6->conf->f_rng, VAR_6->conf->p_rng ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_rsa_pkcs1_encrypt", VAR_10 );
        return( VAR_10 );
    }
    return( 0 );
}
