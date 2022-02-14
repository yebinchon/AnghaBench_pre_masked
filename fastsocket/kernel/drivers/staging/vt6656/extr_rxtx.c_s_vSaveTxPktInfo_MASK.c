
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* WORD ;
typedef int VOID ;
struct TYPE_6__ {TYPE_1__* abyTxPktInfo; } ;
struct TYPE_7__ {TYPE_2__ scStatistic; } ;
struct TYPE_5__ {int abyDestAddr; void* wFIFOCtl; void* wLength; int byBroadMultiUni; } ;
typedef TYPE_2__* PSStatCounter ;
typedef TYPE_3__* PSDevice ;
typedef int PBYTE ;
typedef size_t BYTE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static
VOID
FUNC_3(PSDevice VAR_4, BYTE VAR_5, PBYTE VAR_6, WORD VAR_7, WORD VAR_8)
{
    PSStatCounter VAR_9=&(VAR_4->scStatistic);


    if (FUNC_0(VAR_6))
        VAR_9->abyTxPktInfo[VAR_5].byBroadMultiUni = VAR_0;
    else if (FUNC_1(VAR_6))
        VAR_9->abyTxPktInfo[VAR_5].byBroadMultiUni = VAR_1;
    else
        VAR_9->abyTxPktInfo[VAR_5].byBroadMultiUni = VAR_2;

    VAR_9->abyTxPktInfo[VAR_5].wLength = VAR_7;
    VAR_9->abyTxPktInfo[VAR_5].wFIFOCtl = VAR_8;
    FUNC_2(VAR_9->abyTxPktInfo[VAR_5].abyDestAddr, VAR_6, VAR_3);
}
