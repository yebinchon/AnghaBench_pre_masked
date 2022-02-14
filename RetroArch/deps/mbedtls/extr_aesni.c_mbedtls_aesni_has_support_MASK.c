
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0( unsigned int VAR_0 )
{
    static int VAR_1 = 0;
    static unsigned int VAR_2 = 0;

    if( ! VAR_1 )
    {
        asm( "movl  $1, %%eax   \n\t"
             "cpuid             \n\t"
             : "=c" (VAR_2)
             :
             : "eax", "ebx", "edx" );
        VAR_1 = 1;
    }

    return( ( VAR_2 & VAR_0 ) != 0 );
}
