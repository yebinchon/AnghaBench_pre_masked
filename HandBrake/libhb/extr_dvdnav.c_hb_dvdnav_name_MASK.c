
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unused ;
typedef int name ;
typedef int dvd_reader_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*,int,unsigned char*,int) ;

__attribute__((used)) static char * FUNC_3( char * VAR_0 )
{
    static char VAR_1[1024];
    unsigned char VAR_2[1024];
    dvd_reader_t * VAR_3;

    VAR_3 = FUNC_1( VAR_0 );
    if( !VAR_3 )
    {
        return ((void*)0);
    }

    if( FUNC_2( VAR_3, VAR_1, sizeof( VAR_1 ),
                          VAR_2, sizeof( VAR_2 ) ) )
    {
        FUNC_0( VAR_3 );
        return ((void*)0);
    }

    FUNC_0( VAR_3 );
    return VAR_1;
}
