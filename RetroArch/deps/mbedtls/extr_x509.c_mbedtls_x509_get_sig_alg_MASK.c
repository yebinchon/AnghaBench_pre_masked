
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tag; scalar_t__ len; } ;
typedef TYPE_1__ mbedtls_x509_buf ;
typedef scalar_t__ mbedtls_pk_type_t ;
struct TYPE_10__ {int expected_salt_len; int mgf1_hash_id; } ;
typedef TYPE_2__ mbedtls_pk_rsassa_pss_options ;
typedef int mbedtls_md_type_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__ const*,int *,scalar_t__*) ;
 int FUNC_3 (TYPE_1__ const*,int *,int *,int *) ;

int FUNC_4( const mbedtls_x509_buf *VAR_6, const mbedtls_x509_buf *VAR_7,
                      mbedtls_md_type_t *VAR_8, mbedtls_pk_type_t *VAR_9,
                      void **VAR_10 )
{
    int VAR_11;

    if( *VAR_10 != ((void*)0) )
        return( VAR_2 );

    if( ( VAR_11 = FUNC_2( VAR_6, VAR_8, VAR_9 ) ) != 0 )
        return( VAR_4 + VAR_11 );
    {

        if( ( VAR_7->tag != VAR_0 && VAR_7->tag != 0 ) ||
              VAR_7->len != 0 )
        return( VAR_3 );
    }

    return( 0 );
}
