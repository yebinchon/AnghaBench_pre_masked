
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ChanNum; scalar_t__ ChanStat; TYPE_1__* CtlP; } ;
struct TYPE_4__ {scalar_t__ boardType; scalar_t__* AiopIO; scalar_t__ AltChanRingIndicator; scalar_t__ UPCIRingInd; } ;
typedef TYPE_1__ CONTROLLER_t ;
typedef TYPE_2__ CHANNEL_T ;
typedef scalar_t__ ByteIO_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(CHANNEL_T * VAR_3)
{
 CONTROLLER_t *VAR_4 = VAR_3->CtlP;
 int VAR_5 = VAR_3->ChanNum;
 int VAR_6 = 0;

 if (VAR_4->UPCIRingInd)
  VAR_6 = !(FUNC_0(VAR_4->UPCIRingInd) & VAR_2[VAR_5]);
 else if (VAR_4->AltChanRingIndicator)
  VAR_6 = FUNC_0((ByteIO_t) (VAR_3->ChanStat + 8)) & VAR_0;
 else if (VAR_4->boardType == VAR_1)
  VAR_6 = !(FUNC_0(VAR_4->AiopIO[3]) & VAR_2[VAR_5]);

 return VAR_6;
}
