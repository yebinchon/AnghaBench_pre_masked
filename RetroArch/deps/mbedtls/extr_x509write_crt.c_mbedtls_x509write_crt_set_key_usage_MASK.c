
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_x509write_cert ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char**,unsigned char*,unsigned char*,int) ;
 int FUNC_2 (int *,int ,int ,int,unsigned char*,int) ;

int FUNC_3( mbedtls_x509write_cert *VAR_2,
                                         unsigned int VAR_3 )
{
    unsigned char VAR_4[4], VAR_5;
    unsigned char *VAR_6;
    int VAR_7;


    if( ( VAR_3 & ~0xfe ) != 0 )
        return( VAR_0 );

    VAR_6 = VAR_4 + 4;
    VAR_5 = (unsigned char) VAR_3;

    if( ( VAR_7 = FUNC_1( &VAR_6, VAR_4, &VAR_5, 7 ) ) != 4 )
        return( VAR_7 );

    VAR_7 = FUNC_2( VAR_2, VAR_1,
                                       FUNC_0( VAR_1 ),
                                       1, VAR_4, 4 );
    if( VAR_7 != 0 )
        return( VAR_7 );

    return( 0 );
}
