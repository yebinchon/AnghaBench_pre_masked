
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RP; int P; int X; int Vf; int Vi; int pX; } ;
typedef TYPE_1__ mbedtls_dhm_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *,int ,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12( mbedtls_dhm_context *VAR_1,
                    int (*VAR_2)(void *, unsigned char *, size_t), void *VAR_3 )
{
    int VAR_4, VAR_5;





    if( FUNC_2( &VAR_1->X, &VAR_1->pX ) != 0 )
    {
        FUNC_0( FUNC_3( &VAR_1->pX, &VAR_1->X ) );
        FUNC_0( FUNC_7( &VAR_1->Vi, 1 ) );
        FUNC_0( FUNC_7( &VAR_1->Vf, 1 ) );

        return( 0 );
    }





    if( FUNC_1( &VAR_1->Vi, 1 ) != 0 )
    {
        FUNC_0( FUNC_9( &VAR_1->Vi, &VAR_1->Vi, &VAR_1->Vi ) );
        FUNC_0( FUNC_8( &VAR_1->Vi, &VAR_1->Vi, &VAR_1->P ) );

        FUNC_0( FUNC_9( &VAR_1->Vf, &VAR_1->Vf, &VAR_1->Vf ) );
        FUNC_0( FUNC_8( &VAR_1->Vf, &VAR_1->Vf, &VAR_1->P ) );

        return( 0 );
    }






    VAR_5 = 0;
    do
    {
        FUNC_0( FUNC_5( &VAR_1->Vi, FUNC_11( &VAR_1->P ), VAR_2, VAR_3 ) );

        while( FUNC_2( &VAR_1->Vi, &VAR_1->P ) >= 0 )
            FUNC_0( FUNC_10( &VAR_1->Vi, 1 ) );

        if( VAR_5++ > 10 )
            return( VAR_0 );
    }
    while( FUNC_1( &VAR_1->Vi, 1 ) <= 0 );


    FUNC_0( FUNC_6( &VAR_1->Vf, &VAR_1->Vi, &VAR_1->P ) );
    FUNC_0( FUNC_4( &VAR_1->Vf, &VAR_1->Vf, &VAR_1->X, &VAR_1->P, &VAR_1->RP ) );

cleanup:
    return( VAR_4 );
}
