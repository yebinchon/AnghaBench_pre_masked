
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct sk_buff {int dummy; } ;
struct TYPE_12__ {scalar_t__ nReadyRecv; int UnfinishedReceives; int RecvList; } ;
struct TYPE_8__ {int ipackets; } ;
struct et131x_adapter {int Flags; TYPE_5__ RxRing; TYPE_4__* regs; TYPE_2__* pdev; TYPE_1__ Stats; int PacketFilter; } ;
struct TYPE_13__ {scalar_t__ PacketSize; struct sk_buff* Packet; } ;
struct TYPE_10__ {int watchdog_timer; } ;
struct TYPE_11__ {TYPE_3__ global; } ;
struct TYPE_9__ {int dev; } ;
typedef TYPE_6__* PMP_RFD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_6__* FUNC_3 (struct et131x_adapter*) ;
 int FUNC_4 (int,int *) ;

void FUNC_5(struct et131x_adapter *VAR_5)
{
 PMP_RFD VAR_6 = ((void*)0);
 struct sk_buff *VAR_7[VAR_1];
 PMP_RFD VAR_8[VAR_1];
 uint32_t VAR_9 = 0;
 uint32_t VAR_10;
 uint32_t VAR_11 = 0;
 bool VAR_12 = 0;

 VAR_10 = VAR_1;


 while (VAR_9 < VAR_10) {
  if (FUNC_2(&VAR_5->RxRing.RecvList)) {
   FUNC_0(VAR_5->RxRing.nReadyRecv != 0);
   VAR_12 = 1;
   break;
  }

  VAR_6 = FUNC_3(VAR_5);

  if (VAR_6 == ((void*)0))
   break;






  if (!VAR_5->PacketFilter ||
      !(VAR_5->Flags & VAR_4) ||
      VAR_6->PacketSize == 0) {
   continue;
  }


  VAR_5->Stats.ipackets++;


  if (VAR_5->RxRing.nReadyRecv >= VAR_3) {
  } else {
   VAR_8[VAR_11] = VAR_6;
   VAR_11++;

   FUNC_1(&VAR_5->pdev->dev,
        "RFD's are running out\n");
  }

  VAR_7[VAR_9] = VAR_6->Packet;
  VAR_9++;
 }

 if ((VAR_9 == VAR_1) || VAR_12) {
  VAR_5->RxRing.UnfinishedReceives = 1;
  FUNC_4(VAR_2 * VAR_0,
         &VAR_5->regs->global.watchdog_timer);
 } else {

  VAR_5->RxRing.UnfinishedReceives = 0;
 }
}
