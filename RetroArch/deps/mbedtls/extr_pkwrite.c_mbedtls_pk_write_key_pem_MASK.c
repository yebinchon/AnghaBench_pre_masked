
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int output_buf ;
typedef int mbedtls_pk_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*,char const*,unsigned char*,int,unsigned char*,size_t,size_t*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;

int FUNC_3( mbedtls_pk_context *VAR_8, unsigned char *VAR_9, size_t VAR_10 )
{
    int VAR_11;
    unsigned char VAR_12[VAR_7];
    const char *VAR_13, *VAR_14;
    size_t VAR_15 = 0;

    if( ( VAR_11 = FUNC_2( VAR_8, VAR_12, sizeof(VAR_12) ) ) < 0 )
        return( VAR_11 );
        return( VAR_0 );

    if( ( VAR_11 = FUNC_0( VAR_13, VAR_14,
                                  VAR_12 + sizeof(VAR_12) - VAR_11,
                                  VAR_11, VAR_9, VAR_10, &VAR_15 ) ) != 0 )
    {
        return( VAR_11 );
    }

    return( 0 );
}
