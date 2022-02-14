
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; } ;
typedef TYPE_1__ mbedtls_rsa_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*,int ,size_t*,unsigned char const*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_1( void *VAR_2,
                    const unsigned char *VAR_3, size_t VAR_4,
                    unsigned char *VAR_5, size_t *VAR_6, size_t VAR_7,
                    int (*VAR_8)(void *, unsigned char *, size_t), void *VAR_9 )
{
    if( VAR_4 != ((mbedtls_rsa_context *) VAR_2)->len )
        return( VAR_0 );

    return( FUNC_0( (mbedtls_rsa_context *) VAR_2, VAR_8, VAR_9,
                VAR_1, VAR_6, VAR_3, VAR_5, VAR_7 ) );
}
