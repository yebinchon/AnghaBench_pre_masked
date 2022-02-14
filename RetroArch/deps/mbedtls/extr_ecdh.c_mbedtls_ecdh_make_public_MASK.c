
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pbits; } ;
struct TYPE_5__ {int point_format; int Q; TYPE_2__ grp; int d; } ;
typedef TYPE_1__ mbedtls_ecdh_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int *,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_1 (TYPE_2__*,int *,int ,size_t*,unsigned char*,size_t) ;

int FUNC_2( mbedtls_ecdh_context *VAR_1, size_t *VAR_2,
                      unsigned char *VAR_3, size_t VAR_4,
                      int (*VAR_5)(void *, unsigned char *, size_t),
                      void *VAR_6 )
{
    int VAR_7;

    if( VAR_1 == ((void*)0) || VAR_1->grp.pbits == 0 )
        return( VAR_0 );

    if( ( VAR_7 = FUNC_0( &VAR_1->grp, &VAR_1->d, &VAR_1->Q, VAR_5, VAR_6 ) )
                != 0 )
        return( VAR_7 );

    return FUNC_1( &VAR_1->grp, &VAR_1->Q, VAR_1->point_format,
                                VAR_2, VAR_3, VAR_4 );
}
