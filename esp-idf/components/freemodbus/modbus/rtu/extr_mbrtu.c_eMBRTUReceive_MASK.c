
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int eMBErrorCode ;
typedef scalar_t__ USHORT ;
typedef int UCHAR ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int * VAR_7 ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 scalar_t__ VAR_8 ;

eMBErrorCode
FUNC_4( UCHAR * VAR_9, UCHAR ** VAR_10, USHORT * VAR_11 )
{
    eMBErrorCode VAR_12 = VAR_1;

    FUNC_0( );
    FUNC_2( VAR_8 < VAR_5 );


    if( ( VAR_8 >= VAR_6 )
        && ( FUNC_3( ( UCHAR * ) VAR_7, VAR_8 ) == 0 ) )
    {



        *VAR_9 = VAR_7[VAR_2];




        *VAR_11 = ( USHORT )( VAR_8 - VAR_3 - VAR_4 );


        *VAR_10 = ( UCHAR * ) & VAR_7[VAR_3];
    }
    else
    {
        VAR_12 = VAR_0;
    }

    FUNC_1( );
    return VAR_12;
}
