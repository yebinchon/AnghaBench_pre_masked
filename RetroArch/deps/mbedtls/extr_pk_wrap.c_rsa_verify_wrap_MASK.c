
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
typedef scalar_t__ mbedtls_md_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int ,scalar_t__,unsigned int,unsigned char const*,unsigned char const*) ;

__attribute__((used)) static int FUNC_1( void *VAR_6, mbedtls_md_type_t VAR_7,
                   const unsigned char *VAR_8, size_t VAR_9,
                   const unsigned char *VAR_10, size_t VAR_11 )
{
    int VAR_12;






    if( VAR_11 < ((mbedtls_rsa_context *) VAR_6)->len )
        return( VAR_2 );

    if( ( VAR_12 = FUNC_0( (mbedtls_rsa_context *) VAR_6, ((void*)0), ((void*)0),
                                  VAR_4, VAR_7,
                                  (unsigned int) VAR_9, VAR_8, VAR_10 ) ) != 0 )
        return( VAR_12 );

    if( VAR_11 > ((mbedtls_rsa_context *) VAR_6)->len )
        return( VAR_1 );

    return( 0 );
}
