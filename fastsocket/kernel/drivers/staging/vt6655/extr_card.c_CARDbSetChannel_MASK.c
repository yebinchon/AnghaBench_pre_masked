
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ bValid; } ;
struct TYPE_5__ {scalar_t__ byCurrentCh; scalar_t__ eCurrentPHYType; scalar_t__ byRFType; scalar_t__ bEnablePSMode; scalar_t__ byLocalID; scalar_t__ PortOffset; int byCurPwr; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef scalar_t__ BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ,int ,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_9 (scalar_t__,int ) ;
 TYPE_2__* VAR_14 ;

BOOL FUNC_10 (PVOID VAR_15, UINT VAR_16)
{
    PSDevice VAR_17 = (PSDevice) VAR_15;
    BOOL VAR_18 = VAR_13;


    if (VAR_17->byCurrentCh == VAR_16) {
        return VAR_18;
    }

    if (VAR_14[VAR_16].bValid == VAR_1) {
        return (VAR_1);
    }

    if ((VAR_16 > VAR_0) &&
        (VAR_17->eCurrentPHYType != VAR_6)) {
        FUNC_1(VAR_17, VAR_6, 0, 0, ((void*)0), ((void*)0));
    } else if ((VAR_16 <= VAR_0) &&
        (VAR_17->eCurrentPHYType == VAR_6)) {
        FUNC_1(VAR_17, VAR_8, 0, 0, ((void*)0), ((void*)0));
    }

    FUNC_2(VAR_17->PortOffset, VAR_3, VAR_2);




    if ( VAR_17->byRFType == VAR_12 )
    {
        FUNC_5(VAR_17->PortOffset, VAR_17->byCurrentCh, (BYTE)VAR_16);
    }



    VAR_17->byCurrentCh = (BYTE)VAR_16;
    VAR_18 &= FUNC_6(VAR_17->PortOffset, VAR_17->byRFType, (BYTE)VAR_16);


    if (VAR_17->bEnablePSMode == VAR_13)
        FUNC_8(VAR_17->PortOffset, VAR_17->byRFType, VAR_16);



    FUNC_0(VAR_17->PortOffset);

    if (VAR_17->byLocalID > VAR_11) {

        FUNC_4(VAR_17->PortOffset);
        FUNC_7(VAR_17, VAR_9, VAR_17->byCurrentCh);
        FUNC_9(VAR_17->PortOffset + VAR_4, VAR_17->byCurPwr);
        FUNC_7(VAR_17, VAR_10, VAR_17->byCurrentCh);
        FUNC_9(VAR_17->PortOffset + VAR_5, VAR_17->byCurPwr);
        FUNC_3(VAR_17->PortOffset);
    }

    if (VAR_17->eCurrentPHYType == VAR_7) {



        FUNC_7(VAR_17, VAR_9, VAR_17->byCurrentCh);
    } else {



  FUNC_7(VAR_17, VAR_10, VAR_17->byCurrentCh);
    }

    return(VAR_18);
}
