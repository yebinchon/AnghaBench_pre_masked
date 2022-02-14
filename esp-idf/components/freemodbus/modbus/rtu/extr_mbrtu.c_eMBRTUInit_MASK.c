
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int eMBParity ;
typedef int eMBErrorCode ;
typedef int USHORT ;
typedef int ULONG ;
typedef int UCHAR ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;

eMBErrorCode
FUNC_4( UCHAR VAR_3, UCHAR VAR_4, ULONG VAR_5, eMBParity VAR_6 )
{
    eMBErrorCode VAR_7 = VAR_0;
    ULONG VAR_8;

    ( void )VAR_3;
    FUNC_0( );


    if( FUNC_2( VAR_4, VAR_5, 8, VAR_6 ) != VAR_2 )
    {
        VAR_7 = VAR_1;
    }
    else
    {



        if( VAR_5 > 19200 )
        {
            VAR_8 = 35;
        }
        else
        {
            VAR_8 = ( 7UL * 220000UL ) / ( 2UL * VAR_5 );
        }
        if( FUNC_3( ( USHORT ) VAR_8 ) != VAR_2 )
        {
            VAR_7 = VAR_1;
        }
    }
    FUNC_1( );

    return VAR_7;
}
