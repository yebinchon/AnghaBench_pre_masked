
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * pxMBFunctionHandler ;
typedef int eMBErrorCode ;
typedef int UCHAR ;
struct TYPE_2__ {int ucFunctionCode; int * pxHandler; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

eMBErrorCode
FUNC_2( UCHAR VAR_5, pxMBFunctionHandler VAR_6 )
{
    int VAR_7;
    eMBErrorCode VAR_8;

    if( ( 0 < VAR_5 ) && ( VAR_5 <= 127 ) )
    {
        FUNC_0( );
        if( VAR_6 != ((void*)0) )
        {
            for( VAR_7 = 0; VAR_7 < VAR_3; VAR_7++ )
            {
                if( ( VAR_4[VAR_7].pxHandler == ((void*)0) ) ||
                    ( VAR_4[VAR_7].pxHandler == VAR_6 ) )
                {
                    VAR_4[VAR_7].ucFunctionCode = VAR_5;
                    VAR_4[VAR_7].pxHandler = VAR_6;
                    break;
                }
            }
            VAR_8 = ( VAR_7 != VAR_3 ) ? VAR_1 : VAR_2;
        }
        else
        {
            for( VAR_7 = 0; VAR_7 < VAR_3; VAR_7++ )
            {
                if( VAR_4[VAR_7].ucFunctionCode == VAR_5 )
                {
                    VAR_4[VAR_7].ucFunctionCode = 0;
                    VAR_4[VAR_7].pxHandler = ((void*)0);
                    break;
                }
            }

            VAR_8 = VAR_1;
        }
        FUNC_1( );
    }
    else
    {
        VAR_8 = VAR_0;
    }
    return VAR_8;
}
