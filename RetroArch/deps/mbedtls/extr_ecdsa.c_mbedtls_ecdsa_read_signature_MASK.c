
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_3__ {int Q; int grp; } ;
typedef TYPE_1__ mbedtls_ecdsa_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char**,unsigned char const*,int *) ;
 int FUNC_1 (unsigned char**,unsigned char const*,size_t*,int) ;
 int FUNC_2 (int *,unsigned char const*,size_t,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5( mbedtls_ecdsa_context *VAR_5,
                          const unsigned char *VAR_6, size_t VAR_7,
                          const unsigned char *VAR_8, size_t VAR_9 )
{
    int VAR_10;
    unsigned char *VAR_11 = (unsigned char *) VAR_8;
    const unsigned char *VAR_12 = VAR_8 + VAR_9;
    size_t VAR_13;
    mbedtls_mpi VAR_14, VAR_15;

    FUNC_4( &VAR_14 );
    FUNC_4( &VAR_15 );

    if( ( VAR_10 = FUNC_1( &VAR_11, VAR_12, &VAR_13,
                    VAR_0 | VAR_1 ) ) != 0 )
    {
        VAR_10 += VAR_3;
        goto cleanup;
    }

    if( VAR_11 + VAR_13 != VAR_12 )
    {
        VAR_10 = VAR_3 +
              VAR_2;
        goto cleanup;
    }

    if( ( VAR_10 = FUNC_0( &VAR_11, VAR_12, &VAR_14 ) ) != 0 ||
        ( VAR_10 = FUNC_0( &VAR_11, VAR_12, &VAR_15 ) ) != 0 )
    {
        VAR_10 += VAR_3;
        goto cleanup;
    }

    if( ( VAR_10 = FUNC_2( &VAR_5->grp, VAR_6, VAR_7,
                              &VAR_5->Q, &VAR_14, &VAR_15 ) ) != 0 )
        goto cleanup;

    if( VAR_11 != VAR_12 )
        VAR_10 = VAR_4;

cleanup:
    FUNC_3( &VAR_14 );
    FUNC_3( &VAR_15 );

    return( VAR_10 );
}
