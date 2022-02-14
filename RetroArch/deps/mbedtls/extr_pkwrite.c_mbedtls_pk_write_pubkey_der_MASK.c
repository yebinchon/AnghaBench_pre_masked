
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_pk_context ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (unsigned char**,unsigned char*,char const*,size_t,size_t) ;
 int FUNC_2 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char**,unsigned char*,int) ;
 int FUNC_4 (scalar_t__,char const**,size_t*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (unsigned char**,unsigned char*,int *) ;
 int FUNC_8 (unsigned char**,unsigned char*,int ) ;

int FUNC_9( mbedtls_pk_context *VAR_5, unsigned char *VAR_6, size_t VAR_7 )
{
    int VAR_8;
    unsigned char *VAR_9;
    size_t VAR_10 = 0, VAR_11 = 0, VAR_12;
    const char *VAR_13;

    VAR_9 = VAR_6 + VAR_7;

    FUNC_0( VAR_10, FUNC_7( &VAR_9, VAR_6, VAR_5 ) );

    if( VAR_9 - VAR_6 < 1 )
        return( VAR_3 );






    *--VAR_9 = 0;
    VAR_10 += 1;

    FUNC_0( VAR_10, FUNC_2( &VAR_9, VAR_6, VAR_10 ) );
    FUNC_0( VAR_10, FUNC_3( &VAR_9, VAR_6, VAR_0 ) );

    if( ( VAR_8 = FUNC_4( FUNC_6( VAR_5 ),
                                       &VAR_13, &VAR_12 ) ) != 0 )
    {
        return( VAR_8 );
    }
    FUNC_0( VAR_10, FUNC_1( &VAR_9, VAR_6, VAR_13, VAR_12,
                                                        VAR_11 ) );

    FUNC_0( VAR_10, FUNC_2( &VAR_9, VAR_6, VAR_10 ) );
    FUNC_0( VAR_10, FUNC_3( &VAR_9, VAR_6, VAR_1 |
                                                VAR_2 ) );

    return( (int) VAR_10 );
}
