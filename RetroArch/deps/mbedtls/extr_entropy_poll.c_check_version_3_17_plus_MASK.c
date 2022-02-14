
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* release; } ;


 int FUNC_0 (struct utsname*) ;

__attribute__((used)) static int FUNC_1( void )
{
    int VAR_0;
    struct utsname VAR_1;
    const char *VAR_2;


    FUNC_0(&VAR_1);
    VAR_2 = VAR_1.release;


    if( VAR_2[0] < '3' || VAR_2[0] > '9' || VAR_2 [1] != '.' )
        return( -1 );

    if( VAR_2[0] - '0' > 3 )
        return( 0 );



    if( VAR_2[2] < '0' || VAR_2[2] > '9' )
        return( -1 );

    VAR_0 = VAR_2[2] - '0';

    if( VAR_2[3] >= '0' && VAR_2[3] <= '9' )
        VAR_0 = 10 * VAR_0 + VAR_2[3] - '0';
    else if( VAR_2 [3] != '.' )
        return( -1 );

    if( VAR_0 < 17 )
        return( -1 );

    return( 0 );
}
