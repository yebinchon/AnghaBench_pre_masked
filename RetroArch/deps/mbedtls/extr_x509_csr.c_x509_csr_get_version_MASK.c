
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,unsigned char const*,int*) ;

__attribute__((used)) static int FUNC_1( unsigned char **VAR_2,
                             const unsigned char *VAR_3,
                             int *VAR_4 )
{
    int VAR_5;

    if( ( VAR_5 = FUNC_0( VAR_2, VAR_3, VAR_4 ) ) != 0 )
    {
        if( VAR_5 == VAR_0 )
        {
            *VAR_4 = 0;
            return( 0 );
        }

        return( VAR_1 + VAR_5 );
    }

    return( 0 );
}
