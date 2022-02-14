
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ mbedtls_pk_type_t ;
struct TYPE_8__ {int expected_salt_len; int mgf1_hash_id; } ;
typedef TYPE_1__ mbedtls_pk_rsassa_pss_options ;
struct TYPE_9__ {int * pk_info; } ;
typedef TYPE_2__ mbedtls_pk_context ;
typedef scalar_t__ mbedtls_md_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 size_t FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,unsigned char const*,size_t,unsigned char const*,size_t) ;
 int FUNC_4 (int ,int *,int *,int ,scalar_t__,unsigned int,unsigned char const*,int ,int ,unsigned char const*) ;

int FUNC_5( mbedtls_pk_type_t VAR_9, const void *VAR_10,
                   mbedtls_pk_context *VAR_11, mbedtls_md_type_t VAR_12,
                   const unsigned char *VAR_13, size_t VAR_14,
                   const unsigned char *VAR_15, size_t VAR_16 )
{
    if( VAR_11 == ((void*)0) || VAR_11->pk_info == ((void*)0) )
        return( VAR_0 );

    if( ! FUNC_0( VAR_11, VAR_9 ) )
        return( VAR_3 );

    if( VAR_9 == VAR_6 )
    {
        return( VAR_1 );

    }


    if( VAR_10 != ((void*)0) )
        return( VAR_0 );

    return( FUNC_3( VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 ) );
}
