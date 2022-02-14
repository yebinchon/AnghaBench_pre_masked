
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {unsigned char* name; int ctx; scalar_t__ generation_time; } ;
typedef TYPE_1__ mbedtls_ssl_ticket_key ;
struct TYPE_5__ {int (* f_rng ) (int ,unsigned char*,int) ;int p_rng; TYPE_1__* keys; } ;
typedef TYPE_2__ mbedtls_ssl_ticket_context ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_ticket_context *VAR_2,
                               unsigned char VAR_3 )
{
    int VAR_4;
    unsigned char VAR_5[VAR_0];
    mbedtls_ssl_ticket_key *VAR_6 = VAR_2->keys + VAR_3;





    if( ( VAR_4 = VAR_2->f_rng( VAR_2->p_rng, VAR_6->name, sizeof( VAR_6->name ) ) ) != 0 )
        return( VAR_4 );

    if( ( VAR_4 = VAR_2->f_rng( VAR_2->p_rng, VAR_5, sizeof( VAR_5 ) ) ) != 0 )
        return( VAR_4 );


    VAR_4 = FUNC_1( &VAR_6->ctx, VAR_5,
                                 FUNC_0( &VAR_6->ctx ),
                                 VAR_1 );

    FUNC_3( VAR_5, sizeof( VAR_5 ) );

    return( VAR_4 );
}
