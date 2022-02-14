
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_x509write_csr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char**,unsigned char*,unsigned char*,int) ;
 int FUNC_2 (int *,int ,int ,unsigned char*,int) ;

int FUNC_3( mbedtls_x509write_csr *VAR_1,
                                    unsigned char VAR_2 )
{
    unsigned char VAR_3[4];
    unsigned char *VAR_4;
    int VAR_5;

    VAR_4 = VAR_3 + 4;

    if( ( VAR_5 = FUNC_1( &VAR_4, VAR_3, &VAR_2, 8 ) ) != 4 )
        return( VAR_5 );

    VAR_5 = FUNC_2( VAR_1, VAR_0,
                                       FUNC_0( VAR_0 ),
                                       VAR_3, 4 );
    if( VAR_5 != 0 )
        return( VAR_5 );

    return( 0 );
}
