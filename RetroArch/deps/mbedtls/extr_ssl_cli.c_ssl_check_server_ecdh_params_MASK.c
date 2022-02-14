
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* handshake; } ;
typedef TYPE_4__ mbedtls_ssl_context ;
struct TYPE_13__ {int name; } ;
typedef TYPE_5__ mbedtls_ecp_curve_info ;
struct TYPE_10__ {int nbits; int id; } ;
struct TYPE_11__ {int Qp; TYPE_2__ grp; } ;
struct TYPE_9__ {TYPE_3__ ecdh_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int,char*) ;
 TYPE_5__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_4__ const*,int ) ;

__attribute__((used)) static int FUNC_4( const mbedtls_ssl_context *VAR_1 )
{
    const mbedtls_ecp_curve_info *VAR_2;

    VAR_2 = FUNC_2( VAR_1->handshake->ecdh_ctx.grp.id );
    if( VAR_2 == ((void*)0) )
    {
        FUNC_1( 1, ( "should never happen" ) );
        return( VAR_0 );
    }

    FUNC_1( 2, ( "ECDH curve: %s", VAR_2->name ) );




    if( VAR_1->handshake->ecdh_ctx.grp.nbits < 163 ||
        VAR_1->handshake->ecdh_ctx.grp.nbits > 521 )

        return( -1 );

    FUNC_0( 3, "ECDH: Qp", &VAR_1->handshake->ecdh_ctx.Qp );

    return( 0 );
}
