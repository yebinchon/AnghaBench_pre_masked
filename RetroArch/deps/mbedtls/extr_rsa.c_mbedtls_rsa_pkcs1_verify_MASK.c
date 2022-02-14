
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int padding; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
typedef int mbedtls_md_type_t ;


 int VAR_0 ;


 int FUNC_0 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*,int,int ,unsigned int,unsigned char const*,unsigned char const*) ;
 int FUNC_1 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*,int,int ,unsigned int,unsigned char const*,unsigned char const*) ;

int FUNC_2( mbedtls_rsa_context *VAR_1,
                      int (*VAR_2)(void *, unsigned char *, size_t),
                      void *VAR_3,
                      int VAR_4,
                      mbedtls_md_type_t VAR_5,
                      unsigned int VAR_6,
                      const unsigned char *VAR_7,
                      const unsigned char *VAR_8 )
{
    switch( VAR_1->padding )
    {
        default:
            return( VAR_0 );
    }
}
