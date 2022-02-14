
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int mutex; int RN; int N; int E; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
typedef int mbedtls_mpi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char const*,size_t) ;
 int FUNC_6 (int *,unsigned char*,size_t) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

int FUNC_9( mbedtls_rsa_context *VAR_3,
                const unsigned char *VAR_4,
                unsigned char *VAR_5 )
{
    int VAR_6;
    size_t VAR_7;
    mbedtls_mpi VAR_8;

    FUNC_4( &VAR_8 );






    FUNC_0( FUNC_5( &VAR_8, VAR_4, VAR_3->len ) );

    if( FUNC_1( &VAR_8, &VAR_3->N ) >= 0 )
    {
        VAR_6 = VAR_0;
        goto cleanup;
    }

    VAR_7 = VAR_3->len;
    FUNC_0( FUNC_2( &VAR_8, &VAR_8, &VAR_3->E, &VAR_3->N, &VAR_3->RN ) );
    FUNC_0( FUNC_6( &VAR_8, VAR_5, VAR_7 ) );

cleanup:





    FUNC_3( &VAR_8 );

    if( VAR_6 != 0 )
        return( VAR_1 + VAR_6 );

    return( 0 );
}
