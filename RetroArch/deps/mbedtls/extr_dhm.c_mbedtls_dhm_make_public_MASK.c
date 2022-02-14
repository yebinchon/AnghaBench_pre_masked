
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int GX; int P; int RP; int X; int G; } ;
typedef TYPE_1__ mbedtls_dhm_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *,int,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,unsigned char*,size_t) ;

int FUNC_8( mbedtls_dhm_context *VAR_2, int VAR_3,
                     unsigned char *VAR_4, size_t VAR_5,
                     int (*VAR_6)(void *, unsigned char *, size_t),
                     void *VAR_7 )
{
    int VAR_8, VAR_9 = 0;

    if( VAR_2 == ((void*)0) || VAR_5 < 1 || VAR_5 > VAR_2->len )
        return( VAR_0 );

    if( FUNC_2( &VAR_2->P, 0 ) == 0 )
        return( VAR_0 );




    do
    {
        FUNC_0( FUNC_5( &VAR_2->X, VAR_3, VAR_6, VAR_7 ) );

        while( FUNC_3( &VAR_2->X, &VAR_2->P ) >= 0 )
            FUNC_0( FUNC_6( &VAR_2->X, 1 ) );

        if( VAR_9++ > 10 )
            return( VAR_1 );
    }
    while( FUNC_1( &VAR_2->X, &VAR_2->P ) != 0 );

    FUNC_0( FUNC_4( &VAR_2->GX, &VAR_2->G, &VAR_2->X,
                          &VAR_2->P , &VAR_2->RP ) );

    if( ( VAR_8 = FUNC_1( &VAR_2->GX, &VAR_2->P ) ) != 0 )
        return( VAR_8 );

    FUNC_0( FUNC_7( &VAR_2->GX, VAR_4, VAR_5 ) );

cleanup:

    if( VAR_8 != 0 )
        return( VAR_1 + VAR_8 );

    return( 0 );
}
