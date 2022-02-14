
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char**,unsigned char*) ;
 int FUNC_3 (unsigned char**,unsigned char*,char const*,size_t) ;
 int FUNC_4 (unsigned char**,unsigned char*,int) ;

int FUNC_5( unsigned char **VAR_2, unsigned char *VAR_3,
                                     const char *VAR_4, size_t VAR_5,
                                     size_t VAR_6 )
{
    int VAR_7;
    size_t VAR_8 = 0;

    if( VAR_6 == 0 )
        FUNC_0( VAR_8, FUNC_2( VAR_2, VAR_3 ) );
    else
        VAR_8 += VAR_6;

    FUNC_0( VAR_8, FUNC_3( VAR_2, VAR_3, VAR_4, VAR_5 ) );

    FUNC_0( VAR_8, FUNC_1( VAR_2, VAR_3, VAR_8 ) );
    FUNC_0( VAR_8, FUNC_4( VAR_2, VAR_3,
                                       VAR_0 | VAR_1 ) );

    return( (int) VAR_8 );
}
