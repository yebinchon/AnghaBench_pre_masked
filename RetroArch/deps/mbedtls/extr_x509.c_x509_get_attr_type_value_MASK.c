
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned char tag; size_t len; unsigned char* p; } ;
struct TYPE_4__ {int * next; TYPE_2__ val; TYPE_2__ oid; } ;
typedef TYPE_1__ mbedtls_x509_name ;
typedef TYPE_2__ mbedtls_x509_buf ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*) ;
 int FUNC_1 (unsigned char**,unsigned char const*,size_t*,int) ;

__attribute__((used)) static int FUNC_2( unsigned char **VAR_13,
                                     const unsigned char *VAR_14,
                                     mbedtls_x509_name *VAR_15 )
{
    int VAR_16;
    size_t VAR_17;
    mbedtls_x509_buf *VAR_18;
    mbedtls_x509_buf *VAR_19;

    if( ( VAR_16 = FUNC_1( VAR_13, VAR_14, &VAR_17,
            VAR_2 | VAR_6 ) ) != 0 )
        return( VAR_12 + VAR_16 );

    if( ( VAR_14 - *VAR_13 ) < 1 )
        return( VAR_12 +
                VAR_10 );

    VAR_18 = &VAR_15->oid;
    VAR_18->tag = **VAR_13;

    if( ( VAR_16 = FUNC_1( VAR_13, VAR_14, &VAR_18->len, VAR_4 ) ) != 0 )
        return( VAR_12 + VAR_16 );

    VAR_18->p = *VAR_13;
    *VAR_13 += VAR_18->len;

    if( ( VAR_14 - *VAR_13 ) < 1 )
        return( VAR_12 +
                VAR_10 );

    if( **VAR_13 != VAR_1 && **VAR_13 != VAR_9 &&
        **VAR_13 != VAR_7 && **VAR_13 != VAR_5 &&
        **VAR_13 != VAR_3 && **VAR_13 != VAR_8 &&
        **VAR_13 != VAR_0 )
        return( VAR_12 +
                VAR_11 );

    VAR_19 = &VAR_15->val;
    VAR_19->tag = *(*VAR_13)++;

    if( ( VAR_16 = FUNC_0( VAR_13, VAR_14, &VAR_19->len ) ) != 0 )
        return( VAR_12 + VAR_16 );

    VAR_19->p = *VAR_13;
    *VAR_13 += VAR_19->len;

    VAR_15->next = ((void*)0);

    return( 0 );
}
