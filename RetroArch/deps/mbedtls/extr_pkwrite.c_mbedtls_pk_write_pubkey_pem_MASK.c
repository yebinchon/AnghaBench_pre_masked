
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int output_buf ;
typedef int mbedtls_pk_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned char*,int,unsigned char*,size_t,size_t*) ;
 int FUNC_1 (int *,unsigned char*,int) ;

int FUNC_2( mbedtls_pk_context *VAR_3, unsigned char *VAR_4, size_t VAR_5 )
{
    int VAR_6;
    unsigned char VAR_7[VAR_2];
    size_t VAR_8 = 0;

    if( ( VAR_6 = FUNC_1( VAR_3, VAR_7,
                                     sizeof(VAR_7) ) ) < 0 )
    {
        return( VAR_6 );
    }

    if( ( VAR_6 = FUNC_0( VAR_0, VAR_1,
                                  VAR_7 + sizeof(VAR_7) - VAR_6,
                                  VAR_6, VAR_4, VAR_5, &VAR_8 ) ) != 0 )
    {
        return( VAR_6 );
    }

    return( 0 );
}
