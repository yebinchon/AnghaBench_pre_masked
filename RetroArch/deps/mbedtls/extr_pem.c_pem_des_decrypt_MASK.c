
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_des_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,size_t,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int,unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static void FUNC_6( unsigned char VAR_1[8],
                               unsigned char *VAR_2, size_t VAR_3,
                               const unsigned char *VAR_4, size_t VAR_5 )
{
    mbedtls_des_context VAR_6;
    unsigned char VAR_7[8];

    FUNC_2( &VAR_6 );

    FUNC_5( VAR_7, 8, VAR_1, VAR_4, VAR_5 );

    FUNC_3( &VAR_6, VAR_7 );
    FUNC_0( &VAR_6, VAR_0, VAR_3,
                     VAR_1, VAR_2, VAR_2 );

    FUNC_1( &VAR_6 );
    FUNC_4( VAR_7, 8 );
}
