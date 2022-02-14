
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pbits; } ;
struct TYPE_4__ {int z; TYPE_2__ grp; int d; int Qp; } ;
typedef TYPE_1__ mbedtls_ecdh_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int *,int *,int (*) (void*,unsigned char*,size_t),void*) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,size_t) ;

int FUNC_3( mbedtls_ecdh_context *VAR_1, size_t *VAR_2,
                      unsigned char *VAR_3, size_t VAR_4,
                      int (*VAR_5)(void *, unsigned char *, size_t),
                      void *VAR_6 )
{
    int VAR_7;

    if( VAR_1 == ((void*)0) )
        return( VAR_0 );

    if( ( VAR_7 = FUNC_0( &VAR_1->grp, &VAR_1->z, &VAR_1->Qp, &VAR_1->d,
                                     VAR_5, VAR_6 ) ) != 0 )
    {
        return( VAR_7 );
    }

    if( FUNC_1( &VAR_1->z ) > VAR_4 )
        return( VAR_0 );

    *VAR_2 = VAR_1->grp.pbits / 8 + ( ( VAR_1->grp.pbits % 8 ) != 0 );
    return FUNC_2( &VAR_1->z, VAR_3, *VAR_2 );
}
