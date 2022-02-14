
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (unsigned char*,int,size_t,int *) ;
 int FUNC_4 (unsigned char*,size_t,int ) ;
 int VAR_1 ;

int FUNC_5( void *VAR_2,
                           unsigned char *VAR_3, size_t VAR_4, size_t *VAR_5 )
{
    FILE *VAR_6;
    size_t VAR_7;
    ((void) VAR_2);
    *VAR_5 = 0;

    VAR_6 = FUNC_2( "/dev/urandom", "rb" );
    if( VAR_6 == ((void*)0) )
        return( VAR_0 );

    VAR_7 = FUNC_3( VAR_3, 1, VAR_4, VAR_6 );
    if( VAR_7 != VAR_4 )
    {
        FUNC_1( VAR_6 );
        return( VAR_0 );
    }

    FUNC_1( VAR_6 );
    *VAR_5 = VAR_4;

    return( 0 );
}
