
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t buflen; unsigned char* buf; } ;
typedef TYPE_1__ mbedtls_pem_context ;
typedef int mbedtls_mpi ;
struct TYPE_9__ {int P; int len; int G; } ;
typedef TYPE_2__ mbedtls_dhm_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char**,unsigned char*,int *) ;
 int FUNC_1 (unsigned char**,unsigned char*,size_t*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*,char*,unsigned char const*,int *,int ,size_t*) ;

int FUNC_9( mbedtls_dhm_context *VAR_5, const unsigned char *VAR_6,
                   size_t VAR_7 )
{
    int VAR_8;
    size_t VAR_9;
    unsigned char *VAR_10, *VAR_11;
    VAR_10 = (unsigned char *) VAR_6;

    VAR_11 = VAR_10 + VAR_7;
    if( ( VAR_8 = FUNC_1( &VAR_10, VAR_11, &VAR_9,
            VAR_0 | VAR_1 ) ) != 0 )
    {
        VAR_8 = VAR_3 + VAR_8;
        goto exit;
    }

    VAR_11 = VAR_10 + VAR_9;

    if( ( VAR_8 = FUNC_0( &VAR_10, VAR_11, &VAR_5->P ) ) != 0 ||
        ( VAR_8 = FUNC_0( &VAR_10, VAR_11, &VAR_5->G ) ) != 0 )
    {
        VAR_8 = VAR_3 + VAR_8;
        goto exit;
    }

    if( VAR_10 != VAR_11 )
    {


        mbedtls_mpi VAR_12;
        FUNC_4( &VAR_12 );
        VAR_8 = FUNC_0( &VAR_10, VAR_11, &VAR_12 );
        FUNC_3( &VAR_12 );
        if ( VAR_8 != 0 )
        {
            VAR_8 = VAR_3 + VAR_8;
            goto exit;
        }
        if ( VAR_10 != VAR_11 )
        {
            VAR_8 = VAR_3 +
                VAR_2;
            goto exit;
        }
    }

    VAR_8 = 0;

    VAR_5->len = FUNC_5( &VAR_5->P );

exit:



    if( VAR_8 != 0 )
        FUNC_2( VAR_5 );

    return( VAR_8 );
}
