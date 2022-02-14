
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

BOOL
FUNC_4( void )
{
    BOOL VAR_8 = VAR_1;

    FUNC_0( VAR_4 == VAR_2 );

    switch ( VAR_5 )
    {


    case 129:
        break;

    case 128:

        if( VAR_7 != 0 )
        {
            FUNC_3( ( CHAR )*VAR_6 );
            VAR_6++;
            VAR_7--;
        }
        else
        {
            FUNC_2( VAR_0 );
            VAR_8 = VAR_3;
            VAR_5 = 129;
            FUNC_1( );
        }
        break;
    }

    return VAR_8;
}
