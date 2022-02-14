
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
typedef scalar_t__ mbedtls_md_type_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*,int ,scalar_t__,unsigned int,unsigned char const*,unsigned char*) ;

__attribute__((used)) static int FUNC_1( void *VAR_4, mbedtls_md_type_t VAR_5,
                   const unsigned char *VAR_6, size_t VAR_7,
                   unsigned char *VAR_8, size_t *VAR_9,
                   int (*VAR_10)(void *, unsigned char *, size_t), void *VAR_11 )
{





    *VAR_9 = ((mbedtls_rsa_context *) VAR_4)->len;

    return( FUNC_0( (mbedtls_rsa_context *) VAR_4, VAR_10, VAR_11, VAR_2,
                VAR_5, (unsigned int) VAR_7, VAR_6, VAR_8 ) );
}
