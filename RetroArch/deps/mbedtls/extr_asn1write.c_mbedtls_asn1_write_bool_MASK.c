
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char**,unsigned char*,int ) ;

int FUNC_3( unsigned char **VAR_2, unsigned char *VAR_3, int VAR_4 )
{
    int VAR_5;
    size_t VAR_6 = 0;

    if( *VAR_2 - VAR_3 < 1 )
        return( VAR_1 );

    *--(*VAR_2) = (VAR_4) ? 255 : 0;
    VAR_6++;

    FUNC_0( VAR_6, FUNC_1( VAR_2, VAR_3, VAR_6 ) );
    FUNC_0( VAR_6, FUNC_2( VAR_2, VAR_3, VAR_0 ) );

    return( (int) VAR_6 );
}
