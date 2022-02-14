
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0( unsigned char *VAR_2, size_t VAR_3,
        size_t *VAR_4 )
{
    size_t VAR_5, VAR_6;
    unsigned char VAR_7, VAR_8 = 0;

    if( ((void*)0) == VAR_2 || ((void*)0) == VAR_4 )
        return( VAR_0 );

    VAR_7 = VAR_2[VAR_3 - 1];
    *VAR_4 = VAR_3 - VAR_7;


    VAR_8 |= VAR_7 > VAR_3;
    VAR_8 |= VAR_7 == 0;



    VAR_6 = VAR_3 - VAR_7;
    for( VAR_5 = 0; VAR_5 < VAR_3; VAR_5++ )
        VAR_8 |= ( VAR_2[VAR_5] ^ VAR_7 ) * ( VAR_5 >= VAR_6 );

    return( VAR_1 * ( VAR_8 != 0 ) );
}
