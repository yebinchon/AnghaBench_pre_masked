
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_pk_info_t ;
typedef int mbedtls_pk_context ;
struct TYPE_5__ {unsigned char const* buf; size_t buflen; } ;
typedef TYPE_1__ mbedtls_pem_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,char*,unsigned char const*,unsigned char const*,size_t,size_t*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int const*) ;
 int FUNC_8 (int ,unsigned char const*,size_t) ;
 int FUNC_9 (int *,unsigned char const*,size_t,unsigned char const*,size_t) ;
 int FUNC_10 (int *,unsigned char const*,size_t) ;
 int FUNC_11 (int ,unsigned char const*,size_t) ;

int FUNC_12( mbedtls_pk_context *VAR_9,
                  const unsigned char *VAR_10, size_t VAR_11,
                  const unsigned char *VAR_12, size_t VAR_13 )
{
    int VAR_14;
    const mbedtls_pk_info_t *VAR_15;
    ((void) VAR_14);
    ((void) VAR_12);
    ((void) VAR_13);
    if( ( VAR_14 = FUNC_10( VAR_9, VAR_10, VAR_11 ) ) == 0 )
        return( 0 );

    FUNC_4( VAR_9 );
    return( VAR_3 );
}
