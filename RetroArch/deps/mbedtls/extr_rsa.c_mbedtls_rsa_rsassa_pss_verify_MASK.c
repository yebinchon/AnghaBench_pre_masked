
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hash_id; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
typedef int mbedtls_md_type_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*,int,int ,unsigned int,unsigned char const*,int ,int ,unsigned char const*) ;

int FUNC_1( mbedtls_rsa_context *VAR_2,
                           int (*VAR_3)(void *, unsigned char *, size_t),
                           void *VAR_4,
                           int VAR_5,
                           mbedtls_md_type_t VAR_6,
                           unsigned int VAR_7,
                           const unsigned char *VAR_8,
                           const unsigned char *VAR_9 )
{
    mbedtls_md_type_t VAR_10 = ( VAR_2->hash_id != VAR_0 )
                             ? (mbedtls_md_type_t) VAR_2->hash_id
                             : VAR_6;

    return( FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5,
                                       VAR_6, VAR_7, VAR_8,
                                       VAR_10, VAR_1,
                                       VAR_9 ) );

}
