
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_time_t ;
struct TYPE_7__ {TYPE_2__* conf; TYPE_1__* handshake; } ;
typedef TYPE_3__ mbedtls_ssl_context ;
struct TYPE_6__ {scalar_t__ transport; int (* f_rng ) (int ,unsigned char*,int) ;int p_rng; } ;
struct TYPE_5__ {unsigned char* randbytes; int * verify_cookie; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4( mbedtls_ssl_context *VAR_1 )
{
    int VAR_2;
    unsigned char *VAR_3 = VAR_1->handshake->randbytes;
    if( ( VAR_2 = VAR_1->conf->f_rng( VAR_1->conf->p_rng, VAR_3, 4 ) ) != 0 )
        return( VAR_2 );

    VAR_3 += 4;


    if( ( VAR_2 = VAR_1->conf->f_rng( VAR_1->conf->p_rng, VAR_3, 28 ) ) != 0 )
        return( VAR_2 );

    return( 0 );
}
