
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int GX; int G; int P; int RP; int X; } ;
typedef TYPE_1__ mbedtls_dhm_context ;


 int FUNC_0 (int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *,int *) ;
 int FUNC_6 (int *,int,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_7 (int *,int) ;
 size_t FUNC_8 (int *) ;

int FUNC_9( mbedtls_dhm_context *VAR_2, int VAR_3,
                     unsigned char *VAR_4, size_t *VAR_5,
                     int (*VAR_6)(void *, unsigned char *, size_t),
                     void *VAR_7 )
{
    int VAR_8, VAR_9 = 0;
    size_t VAR_10, VAR_11, VAR_12;
    unsigned char *VAR_13;

    if( FUNC_3( &VAR_2->P, 0 ) == 0 )
        return( VAR_0 );




    do
    {
        FUNC_1( FUNC_6( &VAR_2->X, VAR_3, VAR_6, VAR_7 ) );

        while( FUNC_4( &VAR_2->X, &VAR_2->P ) >= 0 )
            FUNC_1( FUNC_7( &VAR_2->X, 1 ) );

        if( VAR_9++ > 10 )
            return( VAR_1 );
    }
    while( FUNC_2( &VAR_2->X, &VAR_2->P ) != 0 );




    FUNC_1( FUNC_5( &VAR_2->GX, &VAR_2->G, &VAR_2->X,
                          &VAR_2->P , &VAR_2->RP ) );

    if( ( VAR_8 = FUNC_2( &VAR_2->GX, &VAR_2->P ) ) != 0 )
        return( VAR_8 );
    VAR_10 = FUNC_8( &VAR_2->P );
    VAR_11 = FUNC_8( &VAR_2->G );
    VAR_12 = FUNC_8( &VAR_2->GX );

    VAR_13 = VAR_4;
    FUNC_1( FUNC_0( &VAR_2->P, VAR_13 + 2, VAR_10 ) ); *VAR_13++ = (unsigned char)( VAR_10 >> 8 ); *VAR_13++ = (unsigned char)( VAR_10 ); VAR_13 += VAR_10;;
    FUNC_1( FUNC_0( &VAR_2->G, VAR_13 + 2, VAR_11 ) ); *VAR_13++ = (unsigned char)( VAR_11 >> 8 ); *VAR_13++ = (unsigned char)( VAR_11 ); VAR_13 += VAR_11;;
    FUNC_1( FUNC_0( &VAR_2->GX, VAR_13 + 2, VAR_12 ) ); *VAR_13++ = (unsigned char)( VAR_12 >> 8 ); *VAR_13++ = (unsigned char)( VAR_12 ); VAR_13 += VAR_12;;

    *VAR_5 = VAR_13 - VAR_4;

    VAR_2->len = VAR_10;

cleanup:

    if( VAR_8 != 0 )
        return( VAR_1 + VAR_8 );

    return( 0 );
}
