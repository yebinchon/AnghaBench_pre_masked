
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_md_context_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,unsigned char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_4( mbedtls_md_context_t *VAR_4,
                            const unsigned char VAR_5[4],
                            unsigned char **VAR_6, unsigned char *VAR_7,
                            const unsigned char *VAR_8, size_t VAR_9 )
{
    unsigned char VAR_10[VAR_1];

    if( (size_t)( VAR_7 - *VAR_6 ) < VAR_0 )
        return( VAR_2 );

    if( FUNC_1( VAR_4 ) != 0 ||
        FUNC_2( VAR_4, VAR_5, 4 ) != 0 ||
        FUNC_2( VAR_4, VAR_8, VAR_9 ) != 0 ||
        FUNC_0( VAR_4, VAR_10 ) != 0 )
    {
        return( VAR_3 );
    }

    FUNC_3( *VAR_6, VAR_10, VAR_0 );
    *VAR_6 += VAR_0;

    return( 0 );
}
