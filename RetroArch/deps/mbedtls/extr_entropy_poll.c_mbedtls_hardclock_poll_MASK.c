
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned char*,unsigned long*,int) ;

int FUNC_2( void *VAR_0,
                    unsigned char *VAR_1, size_t VAR_2, size_t *VAR_3 )
{
    unsigned long VAR_4 = FUNC_0();
    ((void) VAR_0);
    *VAR_3 = 0;

    if( VAR_2 < sizeof(unsigned long) )
        return( 0 );

    FUNC_1( VAR_1, &VAR_4, sizeof(unsigned long) );
    *VAR_3 = sizeof(unsigned long);

    return( 0 );
}
