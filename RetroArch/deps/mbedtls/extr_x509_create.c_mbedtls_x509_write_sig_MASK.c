
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char**,unsigned char*,char const*,size_t,int ) ;
 int FUNC_2 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char**,unsigned char*,int ) ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;

int FUNC_5( unsigned char **VAR_2, unsigned char *VAR_3,
                    const char *VAR_4, size_t VAR_5,
                    unsigned char *VAR_6, size_t VAR_7 )
{
    int VAR_8;
    size_t VAR_9 = 0;

    if( *VAR_2 < VAR_3 || (size_t)( *VAR_2 - VAR_3 ) < VAR_7 )
        return( VAR_1 );

    VAR_9 = VAR_7;
    (*VAR_2) -= VAR_9;
    FUNC_4( *VAR_2, VAR_6, VAR_9 );

    if( *VAR_2 - VAR_3 < 1 )
        return( VAR_1 );

    *--(*VAR_2) = 0;
    VAR_9 += 1;

    FUNC_0( VAR_9, FUNC_2( VAR_2, VAR_3, VAR_9 ) );
    FUNC_0( VAR_9, FUNC_3( VAR_2, VAR_3, VAR_0 ) );


    FUNC_0( VAR_9, FUNC_1( VAR_2, VAR_3, VAR_4,
                                                        VAR_5, 0 ) );

    return( (int) VAR_9 );
}
