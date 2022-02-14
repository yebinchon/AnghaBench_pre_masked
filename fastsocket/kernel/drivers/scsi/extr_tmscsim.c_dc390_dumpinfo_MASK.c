
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct dc390_srb {int SRBStatus; int AdaptStatus; int ScsiPhase; int SRBState; int SGToBeXferLen; int TotalXferredLen; } ;
struct dc390_dcb {struct dc390_srb* pActiveSRB; } ;
struct dc390_acb {struct pci_dev* pdev; struct dc390_dcb* pActiveDCB; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (struct pci_dev*,int ,int *) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5 (struct dc390_acb* VAR_24, struct dc390_dcb* VAR_25, struct dc390_srb* VAR_26)
{
    struct pci_dev *VAR_27;
    u16 VAR_28;

    if (!VAR_25) VAR_25 = VAR_24->pActiveDCB;
    if (!VAR_26 && VAR_25) VAR_26 = VAR_25->pActiveSRB;

    if (VAR_26)
    {
 FUNC_4 ("DC390: SRB: Xferred %08lx, Remain %08lx, State %08x, Phase %02x\n",
  VAR_26->TotalXferredLen, VAR_26->SGToBeXferLen, VAR_26->SRBState,
  VAR_26->ScsiPhase);
 FUNC_4 ("DC390: AdpaterStatus: %02x, SRB Status %02x\n", VAR_26->AdaptStatus, VAR_26->SRBStatus);
    }
    FUNC_4 ("DC390: Status of last IRQ (DMA/SC/Int/IRQ): %08x\n", VAR_23);
    FUNC_4 ("DC390: Register dump: SCSI block:\n");
    FUNC_4 ("DC390: XferCnt  Cmd Stat IntS IRQS FFIS Ctl1 Ctl2 Ctl3 Ctl4\n");
    FUNC_4 ("DC390:  %06x   %02x   %02x   %02x",
     FUNC_1(VAR_1) + (FUNC_1(VAR_2) << 8) + (FUNC_1(VAR_0) << 16),
     FUNC_1(VAR_19), FUNC_1(VAR_21), FUNC_1(VAR_17));
    FUNC_4 ("   %02x   %02x   %02x   %02x   %02x   %02x\n",
     FUNC_1(VAR_16), FUNC_1(VAR_7), FUNC_1(VAR_3),
     FUNC_1(VAR_4), FUNC_1(VAR_5), FUNC_1(VAR_6));
    FUNC_2 (VAR_9, VAR_22 | VAR_15);
    if (FUNC_1(VAR_7) & 0x1f)
      {
 FUNC_4 ("DC390: FIFO:");
 while (FUNC_1(VAR_7) & 0x1f) FUNC_4 (" %02x", FUNC_1(VAR_20));
 FUNC_4 ("\n");
      }
    FUNC_4 ("DC390: Register dump: DMA engine:\n");
    FUNC_4 ("DC390: Cmd   STrCnt    SBusA    WrkBC    WrkAC Stat SBusCtrl\n");
    FUNC_4 ("DC390:  %02x %08x %08x %08x %08x   %02x %08x\n",
     FUNC_1(VAR_8), FUNC_0(VAR_14), FUNC_0(VAR_13),
     FUNC_0(VAR_12), FUNC_0(VAR_11),
     FUNC_1(VAR_10), FUNC_0(VAR_9));
    FUNC_2 (VAR_9, VAR_15);

    VAR_27 = VAR_24->pdev;
    FUNC_3(VAR_27, VAR_18, &VAR_28);
    FUNC_4 ("DC390: Register dump: PCI Status: %04x\n", VAR_28);
    FUNC_4 ("DC390: In case of driver trouble read Documentation/scsi/tmscsim.txt\n");
}
