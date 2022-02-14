
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;

__attribute__((used)) static int
FUNC_1( void )
{
    unsigned char VAR_6;

    VAR_6 = FUNC_0( VAR_0 );

    if ( VAR_6 & (VAR_3 | VAR_5 | VAR_4) )
    {
        FUNC_0( VAR_1 );
        return 0;
    }

    return (VAR_6 & VAR_2);
}
