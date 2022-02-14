
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_mpi ;
typedef int mbedtls_md_type_t ;
struct TYPE_3__ {int d; int grp; } ;
typedef TYPE_1__ mbedtls_ecdsa_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,unsigned char*,size_t*) ;
 int FUNC_2 (int *,int *,int *,int *,unsigned char const*,size_t,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_3 (int *,int *,int *,int *,unsigned char const*,size_t,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6( mbedtls_ecdsa_context *VAR_0, mbedtls_md_type_t VAR_1,
                           const unsigned char *VAR_2, size_t VAR_3,
                           unsigned char *VAR_4, size_t *VAR_5,
                           int (*VAR_6)(void *, unsigned char *, size_t),
                           void *VAR_7 )
{
    int VAR_8;
    mbedtls_mpi VAR_9, VAR_10;

    FUNC_5( &VAR_9 );
    FUNC_5( &VAR_10 );
    (void) VAR_1;

    FUNC_0( FUNC_2( &VAR_0->grp, &VAR_9, &VAR_10, &VAR_0->d,
                         VAR_2, VAR_3, VAR_6, VAR_7 ) );


    FUNC_0( FUNC_1( &VAR_9, &VAR_10, VAR_4, VAR_5 ) );

cleanup:
    FUNC_4( &VAR_9 );
    FUNC_4( &VAR_10 );

    return( VAR_8 );
}
