
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;

int FUNC_1( unsigned char **VAR_1, unsigned char *VAR_2,
                           const unsigned char *VAR_3, size_t VAR_4 )
{
    size_t VAR_5 = 0;

    if( *VAR_1 < VAR_2 || (size_t)( *VAR_1 - VAR_2 ) < VAR_4 )
        return( VAR_0 );

    VAR_5 = VAR_4;
    (*VAR_1) -= VAR_5;
    FUNC_0( *VAR_1, VAR_3, VAR_5 );

    return( (int) VAR_5 );
}
