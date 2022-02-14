
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int eMBException ;
typedef int eMBEventType ;
typedef int eMBErrorCode ;
typedef int USHORT ;
typedef int UCHAR ;
struct TYPE_2__ {int ucFunctionCode; int (* pxHandler ) (int*,int *) ;} ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int*,int**,int *) ;
 int FUNC_1 (int,int*,int ) ;
 int FUNC_2 (int*,int *) ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_15 ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int) ;

eMBErrorCode
FUNC_6( void )
{
    static UCHAR *VAR_16;
    static UCHAR VAR_17;
    static UCHAR VAR_18;
    static USHORT VAR_19;
    static eMBException VAR_20;

    int VAR_21;
    eMBErrorCode VAR_22 = VAR_4;
    eMBEventType VAR_23;


    if( VAR_13 != VAR_10 )
    {
        return VAR_3;
    }



    if( FUNC_4( &VAR_23 ) == VAR_11 )
    {
        switch ( VAR_23 )
        {
        case 128:
            break;

        case 130:
            VAR_22 = FUNC_0( &VAR_17, &VAR_16, &VAR_19 );
            if( VAR_22 == VAR_4 )
            {

                if( ( VAR_17 == VAR_14 ) || ( VAR_17 == VAR_0 ) )
                {
                    ( void )FUNC_5( 131 );
                }
            }
            break;

        case 131:
            VAR_18 = VAR_16[VAR_9];
            VAR_20 = VAR_5;
            for( VAR_21 = 0; VAR_21 < VAR_8; VAR_21++ )
            {

                if( VAR_15[VAR_21].ucFunctionCode == 0 )
                {
                    break;
                }
                else if( VAR_15[VAR_21].ucFunctionCode == VAR_18 )
                {
                    VAR_20 = VAR_15[VAR_21].pxHandler( VAR_16, &VAR_19 );
                    break;
                }
            }



            if( VAR_17 != VAR_0 )
            {
                if( VAR_20 != VAR_6 )
                {

                    VAR_19 = 0;
                    VAR_16[VAR_19++] = ( UCHAR )( VAR_18 | VAR_7 );
                    VAR_16[VAR_19++] = VAR_20;
                }
                if( ( VAR_12 == VAR_1 ) && VAR_2 )
                {
                    FUNC_3( VAR_2 );
                }
                VAR_22 = FUNC_1( VAR_14, VAR_16, VAR_19 );
            }
            break;

        case 129:
            break;
        }
    }
    return VAR_4;
}
