
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int N; int len; int QP; int DQ; int DP; int Q; int P; int D; int E; int ver; } ;
typedef TYPE_1__ mbedtls_rsa_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char**,unsigned char*,int *) ;
 int FUNC_1 (unsigned char**,unsigned char*,int *) ;
 int FUNC_2 (unsigned char**,unsigned char*,size_t*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6( mbedtls_rsa_context *VAR_5,
                                   const unsigned char *VAR_6,
                                   size_t VAR_7 )
{
    int VAR_8;
    size_t VAR_9;
    unsigned char *VAR_10, *VAR_11;

    VAR_10 = (unsigned char *) VAR_6;
    VAR_11 = VAR_10 + VAR_7;
    if( ( VAR_8 = FUNC_2( &VAR_10, VAR_11, &VAR_9,
            VAR_0 | VAR_1 ) ) != 0 )
    {
        return( VAR_3 + VAR_8 );
    }

    VAR_11 = VAR_10 + VAR_9;

    if( ( VAR_8 = FUNC_0( &VAR_10, VAR_11, &VAR_5->ver ) ) != 0 )
    {
        return( VAR_3 + VAR_8 );
    }

    if( VAR_5->ver != 0 )
    {
        return( VAR_4 );
    }

    if( ( VAR_8 = FUNC_1( &VAR_10, VAR_11, &VAR_5->N ) ) != 0 ||
        ( VAR_8 = FUNC_1( &VAR_10, VAR_11, &VAR_5->E ) ) != 0 ||
        ( VAR_8 = FUNC_1( &VAR_10, VAR_11, &VAR_5->D ) ) != 0 ||
        ( VAR_8 = FUNC_1( &VAR_10, VAR_11, &VAR_5->P ) ) != 0 ||
        ( VAR_8 = FUNC_1( &VAR_10, VAR_11, &VAR_5->Q ) ) != 0 ||
        ( VAR_8 = FUNC_1( &VAR_10, VAR_11, &VAR_5->DP ) ) != 0 ||
        ( VAR_8 = FUNC_1( &VAR_10, VAR_11, &VAR_5->DQ ) ) != 0 ||
        ( VAR_8 = FUNC_1( &VAR_10, VAR_11, &VAR_5->QP ) ) != 0 )
    {
        FUNC_5( VAR_5 );
        return( VAR_3 + VAR_8 );
    }

    VAR_5->len = FUNC_3( &VAR_5->N );

    if( VAR_10 != VAR_11 )
    {
        FUNC_5( VAR_5 );
        return( VAR_3 +
                VAR_2 );
    }

    if( ( VAR_8 = FUNC_4( VAR_5 ) ) != 0 )
    {
        FUNC_5( VAR_5 );
        return( VAR_8 );
    }

    return( 0 );
}
