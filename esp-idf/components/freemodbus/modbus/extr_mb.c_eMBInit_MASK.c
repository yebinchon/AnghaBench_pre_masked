
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int eMBParity ;
typedef int eMBMode ;
typedef scalar_t__ eMBErrorCode ;
typedef int ULONG ;
typedef scalar_t__ UCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int * VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 () ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;

eMBErrorCode
FUNC_3( eMBMode VAR_34, UCHAR VAR_35, UCHAR VAR_36, ULONG VAR_37, eMBParity VAR_38 )
{
    eMBErrorCode VAR_39 = VAR_4;


    if( ( VAR_35 == VAR_0 ) ||
        ( VAR_35 < VAR_2 ) || ( VAR_35 > VAR_1 ) )
    {
        VAR_39 = VAR_3;
    }
    else
    {
        VAR_26 = VAR_35;

        switch ( VAR_34 )
        {
        default:
            VAR_39 = VAR_3;
        }

        if( VAR_39 == VAR_4 )
        {
            if( !FUNC_2( ) )
            {

                VAR_39 = VAR_5;
            }
            else
            {
                VAR_12 = VAR_34;
                VAR_17 = VAR_7;
            }
        }
    }
    return VAR_39;
}
