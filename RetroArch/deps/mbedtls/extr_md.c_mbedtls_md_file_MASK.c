
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* finish_func ) (int ,unsigned char*) ;int (* update_func ) (int ,unsigned char*,size_t) ;int (* starts_func ) (int ) ;} ;
typedef TYPE_1__ mbedtls_md_info_t ;
struct TYPE_9__ {int md_ctx; } ;
typedef TYPE_2__ mbedtls_md_context_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (unsigned char*,int,int,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__ const*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned char*,size_t) ;
 int FUNC_9 (int ,unsigned char*) ;

int FUNC_10( const mbedtls_md_info_t *VAR_2, const char *VAR_3, unsigned char *VAR_4 )
{
    int VAR_5;
    FILE *VAR_6;
    size_t VAR_7;
    mbedtls_md_context_t VAR_8;
    unsigned char VAR_9[1024];

    if( VAR_2 == ((void*)0) )
        return( VAR_0 );

    if( ( VAR_6 = FUNC_2( VAR_3, "rb" ) ) == ((void*)0) )
        return( VAR_1 );

    FUNC_5( &VAR_8 );

    if( ( VAR_5 = FUNC_6( &VAR_8, VAR_2, 0 ) ) != 0 )
        goto cleanup;

    VAR_2->starts_func( VAR_8.md_ctx );

    while( ( VAR_7 = FUNC_3( VAR_9, 1, sizeof( VAR_9 ), VAR_6 ) ) > 0 )
        VAR_2->update_func( VAR_8.md_ctx, VAR_9, VAR_7 );

    if( FUNC_1( VAR_6 ) != 0 )
    {
        VAR_5 = VAR_1;
        goto cleanup;
    }

    VAR_2->finish_func( VAR_8.md_ctx, VAR_4 );

cleanup:
    FUNC_0( VAR_6 );
    FUNC_4( &VAR_8 );

    return( VAR_5 );
}
