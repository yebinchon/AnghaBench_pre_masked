
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

BOOL
FUNC_3( void )
{
    BOOL VAR_7 = VAR_0;
    UCHAR VAR_8;

    FUNC_0( VAR_4 == VAR_2 );


    ( void )FUNC_2( ( CHAR * ) & VAR_8 );

    switch ( VAR_3 )
    {



    case 129:
        FUNC_1( );
        break;




    case 131:
        FUNC_1( );
        break;





    case 130:
        VAR_6 = 0;
        VAR_5[VAR_6++] = VAR_8;
        VAR_3 = 128;


        FUNC_1( );
        break;






    case 128:
        if( VAR_6 < VAR_1 )
        {
            VAR_5[VAR_6++] = VAR_8;
        }
        else
        {
            VAR_3 = 131;
        }
        FUNC_1( );
        break;
    }
    return VAR_7;
}
