
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int padding; } ;
typedef TYPE_1__ mbedtls_rsa_context ;


 int VAR_0 ;


 int FUNC_0 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*,int,int *,int ,size_t*,unsigned char const*,unsigned char*,size_t) ;
 int FUNC_1 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*,int,size_t*,unsigned char const*,unsigned char*,size_t) ;

int FUNC_2( mbedtls_rsa_context *VAR_1,
                       int (*VAR_2)(void *, unsigned char *, size_t),
                       void *VAR_3,
                       int VAR_4, size_t *VAR_5,
                       const unsigned char *VAR_6,
                       unsigned char *VAR_7,
                       size_t VAR_8)
{
    switch( VAR_1->padding )
    {
        default:
            return( VAR_0 );
    }
}
