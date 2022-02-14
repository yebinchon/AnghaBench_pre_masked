
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct CommandControlBlock {scalar_t__ startdone; TYPE_1__* pcmd; } ;
struct AdapterControlBlock {struct CommandControlBlock** pccb_pool; int ccboutstandingcount; int acb_flags; int eternal_timer; } ;
struct TYPE_2__ {int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct CommandControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 int FUNC_5 (struct AdapterControlBlock*) ;
 int FUNC_6 (struct AdapterControlBlock*) ;
 int FUNC_7 (struct AdapterControlBlock*) ;
 int FUNC_8 (struct AdapterControlBlock*) ;
 int FUNC_9 (struct AdapterControlBlock*) ;
 int FUNC_10 (struct AdapterControlBlock*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,struct AdapterControlBlock*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,int *) ;
 int FUNC_20 (struct Scsi_Host*) ;
 int FUNC_21 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_22(struct pci_dev *VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_17(VAR_7);
 struct AdapterControlBlock *VAR_9 =
  (struct AdapterControlBlock *) VAR_8->hostdata;
 int VAR_10 = 0;
 FUNC_7(VAR_9);
 FUNC_21(VAR_8);
 FUNC_13();
 FUNC_12(&VAR_9->eternal_timer);
 FUNC_2(VAR_9);
 FUNC_9(VAR_9);
 FUNC_4(VAR_9);
 VAR_9->acb_flags |= VAR_1;
 VAR_9->acb_flags &= ~VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++){
  if (!FUNC_11(&VAR_9->ccboutstandingcount))
   break;
  FUNC_8(VAR_9);
  FUNC_15(25);
 }

 if (FUNC_11(&VAR_9->ccboutstandingcount)) {
  int VAR_11;

  FUNC_0(VAR_9);
  FUNC_3(VAR_9);
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   struct CommandControlBlock *VAR_12 = VAR_9->pccb_pool[VAR_11];
   if (VAR_12->startdone == VAR_3) {
    VAR_12->startdone = VAR_2;
    VAR_12->pcmd->result = VAR_6 << 16;
    FUNC_1(VAR_12);
   }
  }
 }
 FUNC_14(VAR_7->irq, VAR_9);
 FUNC_5(VAR_9);
 FUNC_6(VAR_9);
 FUNC_10(VAR_9);
 FUNC_18(VAR_7);
 FUNC_20(VAR_8);
 FUNC_16(VAR_7);
 FUNC_19(VAR_7, ((void*)0));
}
