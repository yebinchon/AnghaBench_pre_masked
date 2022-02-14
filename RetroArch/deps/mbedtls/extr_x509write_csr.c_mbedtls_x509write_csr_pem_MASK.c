
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int output_buf ;
typedef int mbedtls_x509write_csr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned char*,int,unsigned char*,size_t,size_t*) ;
 int FUNC_1 (int *,unsigned char*,int,int (*) (void*,unsigned char*,size_t),void*) ;

int FUNC_2( mbedtls_x509write_csr *VAR_2, unsigned char *VAR_3, size_t VAR_4,
                       int (*VAR_5)(void *, unsigned char *, size_t),
                       void *VAR_6 )
{
    int VAR_7;
    unsigned char VAR_8[4096];
    size_t VAR_9 = 0;

    if( ( VAR_7 = FUNC_1( VAR_2, VAR_8, sizeof(VAR_8),
                                   VAR_5, VAR_6 ) ) < 0 )
    {
        return( VAR_7 );
    }

    if( ( VAR_7 = FUNC_0( VAR_0, VAR_1,
                                  VAR_8 + sizeof(VAR_8) - VAR_7,
                                  VAR_7, VAR_3, VAR_4, &VAR_9 ) ) != 0 )
    {
        return( VAR_7 );
    }

    return( 0 );
}
