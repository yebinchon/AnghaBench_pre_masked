
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char**,unsigned char const*,int*) ;
 int FUNC_1 (unsigned char**,unsigned char const*,size_t*,int) ;

__attribute__((used)) static int FUNC_2( unsigned char **VAR_5,
                             const unsigned char *VAR_6,
                             int *VAR_7 )
{
    int VAR_8;
    size_t VAR_9;

    if( ( VAR_8 = FUNC_1( VAR_5, VAR_6, &VAR_9,
            VAR_1 | VAR_0 | 0 ) ) != 0 )
    {
        if( VAR_8 == VAR_3 )
        {
            *VAR_7 = 0;
            return( 0 );
        }

        return( VAR_8 );
    }

    VAR_6 = *VAR_5 + VAR_9;

    if( ( VAR_8 = FUNC_0( VAR_5, VAR_6, VAR_7 ) ) != 0 )
        return( VAR_4 + VAR_8 );

    if( *VAR_5 != VAR_6 )
        return( VAR_4 +
                VAR_2 );

    return( 0 );
}
