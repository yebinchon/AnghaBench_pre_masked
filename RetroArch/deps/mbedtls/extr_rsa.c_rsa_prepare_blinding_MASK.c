
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int * p; } ;
struct TYPE_16__ {int RN; int N; int E; TYPE_3__ Vi; TYPE_3__ Vf; scalar_t__ len; } ;
typedef TYPE_1__ mbedtls_rsa_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int *,int *,int *) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_8( mbedtls_rsa_context *VAR_1,
                 int (*VAR_2)(void *, unsigned char *, size_t), void *VAR_3 )
{
    int VAR_4, VAR_5 = 0;

    if( VAR_1->Vf.p != ((void*)0) )
    {

        FUNC_0( FUNC_7( &VAR_1->Vi, &VAR_1->Vi, &VAR_1->Vi ) );
        FUNC_0( FUNC_6( &VAR_1->Vi, &VAR_1->Vi, &VAR_1->N ) );
        FUNC_0( FUNC_7( &VAR_1->Vf, &VAR_1->Vf, &VAR_1->Vf ) );
        FUNC_0( FUNC_6( &VAR_1->Vf, &VAR_1->Vf, &VAR_1->N ) );

        goto cleanup;
    }


    do {
        if( VAR_5++ > 10 )
            return( VAR_0 );

        FUNC_0( FUNC_3( &VAR_1->Vf, VAR_1->len - 1, VAR_2, VAR_3 ) );
        FUNC_0( FUNC_4( &VAR_1->Vi, &VAR_1->Vf, &VAR_1->N ) );
    } while( FUNC_1( &VAR_1->Vi, 1 ) != 0 );


    FUNC_0( FUNC_5( &VAR_1->Vi, &VAR_1->Vf, &VAR_1->N ) );
    FUNC_0( FUNC_2( &VAR_1->Vi, &VAR_1->Vi, &VAR_1->E, &VAR_1->N, &VAR_1->RN ) );


cleanup:
    return( VAR_4 );
}
