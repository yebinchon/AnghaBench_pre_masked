
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mbedtls_x509_buf ;
typedef scalar_t__ mbedtls_pk_type_t ;
struct TYPE_2__ {int expected_salt_len; scalar_t__ mgf1_hash_id; } ;
typedef TYPE_1__ mbedtls_pk_rsassa_pss_options ;
typedef scalar_t__ mbedtls_md_type_t ;
typedef int mbedtls_md_info_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int const*) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int const*,char const**) ;
 int FUNC_3 (char*,size_t,char*,...) ;

int FUNC_4( char *VAR_2, size_t VAR_3, const mbedtls_x509_buf *VAR_4,
                       mbedtls_pk_type_t VAR_5, mbedtls_md_type_t VAR_6,
                       const void *VAR_7 )
{
    int VAR_8;
    char *VAR_9 = VAR_2;
    size_t VAR_10 = VAR_3;
    const char *VAR_11 = ((void*)0);

    VAR_8 = FUNC_2( VAR_4, &VAR_11 );
    if( VAR_8 != 0 )
        VAR_8 = FUNC_3( VAR_9, VAR_10, "???" );
    else
        VAR_8 = FUNC_3( VAR_9, VAR_10, "%s", VAR_11 );
    VAR_1;
    ((void) VAR_5);
    ((void) VAR_6);
    ((void) VAR_7);


    return( (int)( VAR_3 - VAR_10 ) );
}
