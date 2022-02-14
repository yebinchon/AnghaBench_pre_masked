
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_3( int VAR_5 )
{
    VAR_2 = VAR_0;
    if( VAR_1 == 0 )
    {
        VAR_1 = 1;
        VAR_3 = FUNC_2();
        FUNC_1( VAR_4, "Signal %d received, terminating - do it "
                 "again in case it gets stuck\n", VAR_5 );
    }
    else if( VAR_3 + 500 < FUNC_2() )
    {
        FUNC_1( VAR_4, "Dying badly, files might remain in your /tmp\n" );
        FUNC_0( VAR_2 );
    }
}
