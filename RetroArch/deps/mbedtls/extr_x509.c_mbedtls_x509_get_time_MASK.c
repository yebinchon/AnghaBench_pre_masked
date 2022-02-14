
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_x509_time ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*) ;
 int FUNC_1 (unsigned char**,size_t,size_t,int *) ;

int FUNC_2( unsigned char **VAR_5, const unsigned char *VAR_6,
                   mbedtls_x509_time *VAR_7 )
{
    int VAR_8;
    size_t VAR_9, VAR_10;
    unsigned char VAR_11;

    if( ( VAR_6 - *VAR_5 ) < 1 )
        return( VAR_4 +
                VAR_2 );

    VAR_11 = **VAR_5;

    if( VAR_11 == VAR_1 )
        VAR_10 = 2;
    else if( VAR_11 == VAR_0 )
        VAR_10 = 4;
    else
        return( VAR_4 +
                VAR_3 );

    (*VAR_5)++;
    VAR_8 = FUNC_0( VAR_5, VAR_6, &VAR_9 );

    if( VAR_8 != 0 )
        return( VAR_4 + VAR_8 );

    return FUNC_1( VAR_5, VAR_9, VAR_10, VAR_7 );
}
