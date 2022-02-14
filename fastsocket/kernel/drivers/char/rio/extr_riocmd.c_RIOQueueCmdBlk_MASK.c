
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned short uint ;
struct UnixRup {int RupLock; struct CmdBlk* CmdsWaitingP; TYPE_1__* RupP; struct CmdBlk* CmdPendingP; } ;
struct PKT {int dummy; } ;
struct Host {int Caddr; int (* Copy ) (TYPE_2__*,int ,int) ;struct UnixRup* UnixRups; } ;
struct TYPE_4__ {int * data; } ;
struct CmdBlk {int (* PreFuncP ) (int ,struct CmdBlk*) ;struct CmdBlk* NextP; TYPE_2__ Packet; int PreArg; } ;
struct TYPE_3__ {int txcontrol; int txpkt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct CmdBlk*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,struct CmdBlk*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(struct Host *VAR_6, uint VAR_7, struct CmdBlk *VAR_8)
{
 struct CmdBlk **VAR_9;
 struct UnixRup *VAR_10;
 unsigned long VAR_11;

 if (VAR_7 >= (unsigned short) (VAR_1 + VAR_0)) {
  FUNC_3(VAR_2, "Illegal rup number %d in RIOQueueCmdBlk\n", VAR_7);
  FUNC_0(VAR_8);
  return VAR_3;
 }

 VAR_10 = &VAR_6->UnixRups[VAR_7];

 FUNC_4(&VAR_10->RupLock, VAR_11);





 if ((VAR_10->CmdsWaitingP == ((void*)0)) && (VAR_10->CmdPendingP == ((void*)0)) && (FUNC_2(&VAR_10->RupP->txcontrol) == VAR_5) && (VAR_8->PreFuncP ? (*VAR_8->PreFuncP) (VAR_8->PreArg, VAR_8)
                      : 1)) {
  FUNC_3(VAR_2, "RUP inactive-placing command straight on. Cmd byte is 0x%x\n", VAR_8->Packet.data[0]);




  VAR_6->Copy(&VAR_8->Packet, FUNC_1(VAR_6->Caddr, FUNC_2(&VAR_10->RupP->txpkt)), sizeof(struct PKT));




  VAR_10->CmdPendingP = VAR_8;




  FUNC_8(VAR_4, &VAR_10->RupP->txcontrol);

  FUNC_5(&VAR_10->RupLock, VAR_11);

  return 0;
 }
 FUNC_3(VAR_2, "RUP active - en-queing\n");

 if (VAR_10->CmdsWaitingP != ((void*)0))
  FUNC_3(VAR_2, "Rup active - command waiting\n");
 if (VAR_10->CmdPendingP != ((void*)0))
  FUNC_3(VAR_2, "Rup active - command pending\n");
 if (FUNC_2(&VAR_10->RupP->txcontrol) != VAR_5)
  FUNC_3(VAR_2, "Rup active - command rup not ready\n");

 VAR_9 = &VAR_10->CmdsWaitingP;

 FUNC_3(VAR_2, "First try to queue cmdblk %p at %p\n", VAR_8, VAR_9);

 while (*VAR_9) {
  FUNC_3(VAR_2, "Command cmdblk %p here\n", *VAR_9);
  VAR_9 = &((*VAR_9)->NextP);
  FUNC_3(VAR_2, "Now try to queue cmd cmdblk %p at %p\n", VAR_8, VAR_9);
 }

 FUNC_3(VAR_2, "Will queue cmdblk %p at %p\n", VAR_8, VAR_9);

 *VAR_9 = VAR_8;

 VAR_8->NextP = ((void*)0);

 FUNC_5(&VAR_10->RupLock, VAR_11);

 return 0;
}
