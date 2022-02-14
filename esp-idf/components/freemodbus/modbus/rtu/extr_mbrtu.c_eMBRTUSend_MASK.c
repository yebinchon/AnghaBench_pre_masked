
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int eMBErrorCode ;
typedef int USHORT ;
typedef void* UCHAR ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 void** VAR_9 ;
 void** VAR_10 ;
 int FUNC_2 (void**,int) ;
 int VAR_11 ;
 int FUNC_3 (int ,int ) ;

eMBErrorCode
FUNC_4( UCHAR VAR_12, const UCHAR * VAR_13, USHORT VAR_14 )
{
    eMBErrorCode VAR_15 = VAR_2;
    USHORT VAR_16;

    FUNC_0( );





    if( VAR_7 == VAR_4 )
    {

        VAR_9 = ( UCHAR * ) VAR_13 - 1;
        VAR_11 = 1;


        VAR_9[VAR_3] = VAR_12;
        VAR_11 += VAR_14;


        VAR_16 = FUNC_2( ( UCHAR * ) VAR_9, VAR_11 );
        VAR_10[VAR_11++] = ( UCHAR )( VAR_16 & 0xFF );
        VAR_10[VAR_11++] = ( UCHAR )( VAR_16 >> 8 );


        VAR_8 = VAR_5;
        FUNC_3( VAR_0, VAR_6 );
    }
    else
    {
        VAR_15 = VAR_1;
    }
    FUNC_1( );
    return VAR_15;
}
