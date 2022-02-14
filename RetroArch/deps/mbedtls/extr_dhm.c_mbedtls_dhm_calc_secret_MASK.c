
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_4__ {size_t len; int K; int P; int Vf; int RP; int X; int GY; int Vi; } ;
typedef TYPE_1__ mbedtls_dhm_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned char*,size_t) ;

int FUNC_11( mbedtls_dhm_context *VAR_2,
                     unsigned char *VAR_3, size_t VAR_4, size_t *VAR_5,
                     int (*VAR_6)(void *, unsigned char *, size_t),
                     void *VAR_7 )
{
    int VAR_8;
    mbedtls_mpi VAR_9;

    if( VAR_2 == ((void*)0) || VAR_4 < VAR_2->len )
        return( VAR_0 );

    if( ( VAR_8 = FUNC_1( &VAR_2->GY, &VAR_2->P ) ) != 0 )
        return( VAR_8 );

    FUNC_6( &VAR_9 );


    if( VAR_6 != ((void*)0) )
    {
        FUNC_0( FUNC_2( VAR_2, VAR_6, VAR_7 ) );
        FUNC_0( FUNC_8( &VAR_9, &VAR_2->GY, &VAR_2->Vi ) );
        FUNC_0( FUNC_7( &VAR_9, &VAR_9, &VAR_2->P ) );
    }
    else
        FUNC_0( FUNC_3( &VAR_9, &VAR_2->GY ) );


    FUNC_0( FUNC_4( &VAR_2->K, &VAR_9, &VAR_2->X,
                          &VAR_2->P, &VAR_2->RP ) );


    if( VAR_6 != ((void*)0) )
    {
        FUNC_0( FUNC_8( &VAR_2->K, &VAR_2->K, &VAR_2->Vf ) );
        FUNC_0( FUNC_7( &VAR_2->K, &VAR_2->K, &VAR_2->P ) );
    }

    *VAR_5 = FUNC_9( &VAR_2->K );

    FUNC_0( FUNC_10( &VAR_2->K, VAR_3, *VAR_5 ) );

cleanup:
    FUNC_5( &VAR_9 );

    if( VAR_8 != 0 )
        return( VAR_1 + VAR_8 );

    return( 0 );
}
