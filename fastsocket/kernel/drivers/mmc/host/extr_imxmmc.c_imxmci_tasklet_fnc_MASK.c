
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct imxmci_host {int status_reg; int prev_cmd_code; int actual_bus_width; scalar_t__ dma_dir; int mmc; scalar_t__ req; scalar_t__ data; TYPE_1__* cmd; int pending_events; scalar_t__ base; int present; int dma_size; int dma; int stuck_timeout; } ;
struct TYPE_2__ {int opcode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct imxmci_host*,int*,int,int,char*) ;
 int FUNC_6 (struct imxmci_host*,int) ;
 scalar_t__ FUNC_7 (struct imxmci_host*,int*) ;
 int FUNC_8 (struct imxmci_host*,int) ;
 int FUNC_9 (struct imxmci_host*,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(unsigned long VAR_22)
{
 struct imxmci_host *VAR_23 = (struct imxmci_host *)VAR_22;
 u32 VAR_24;
 unsigned int VAR_25 = 0;
 int VAR_26 = 0;

 if (FUNC_2(&VAR_23->stuck_timeout) > 4) {
  char *VAR_27;
  VAR_26 = 1;
  VAR_24 = FUNC_13(VAR_23->base + VAR_13);
  VAR_23->status_reg = VAR_24;
  if (FUNC_15(VAR_8, &VAR_23->pending_events))
   if (FUNC_15(VAR_4, &VAR_23->pending_events))
    VAR_27 = "RESP+DMA";
   else
    VAR_27 = "RESP";
  else
   if (FUNC_15(VAR_4, &VAR_23->pending_events))
    if (FUNC_15(VAR_5, &VAR_23->pending_events))
     VAR_27 = "DATA";
    else
     VAR_27 = "DMA";
   else
    VAR_27 = "???";

  FUNC_4(FUNC_11(VAR_23->mmc),
   "%s TIMEOUT, hardware stucked STATUS = 0x%04x IMASK = 0x%04x\n",
   VAR_27, VAR_24,
   FUNC_13(VAR_23->base + VAR_11));
  FUNC_4(FUNC_11(VAR_23->mmc),
   "CMD_DAT_CONT = 0x%04x, MMC_BLK_LEN = 0x%04x, MMC_NOB = 0x%04x, DMA_CCR = 0x%08x\n",
   FUNC_13(VAR_23->base + VAR_10),
   FUNC_13(VAR_23->base + VAR_9),
   FUNC_13(VAR_23->base + VAR_12),
   FUNC_0(VAR_23->dma));
  FUNC_4(FUNC_11(VAR_23->mmc), "CMD%d, prevCMD%d, bus %d-bit, dma_size = 0x%x\n",
   VAR_23->cmd ? VAR_23->cmd->opcode : 0,
   VAR_23->prev_cmd_code,
   1 << VAR_23->actual_bus_width, VAR_23->dma_size);
 }

 if (!VAR_23->present || VAR_26)
  VAR_23->status_reg = VAR_20 | VAR_19 |
   VAR_14 | VAR_15;

 if (FUNC_15(VAR_6, &VAR_23->pending_events) || VAR_26) {
  FUNC_3(VAR_6, &VAR_23->pending_events);

  VAR_24 = FUNC_13(VAR_23->base + VAR_13);





  VAR_24 |= VAR_23->status_reg;

  if (FUNC_15(VAR_2, &VAR_23->pending_events))
   VAR_24 &= ~VAR_14;

  if (FUNC_15(VAR_8, &VAR_23->pending_events)) {
   FUNC_5(VAR_23, &VAR_24,
          VAR_17 | VAR_18,
          20, "imxmci_tasklet_fnc resp (ERRATUM #4)");
  }

  if (VAR_24 & (VAR_17 | VAR_18)) {
   if (FUNC_14(VAR_8, &VAR_23->pending_events))
    FUNC_6(VAR_23, VAR_24);
   if (VAR_23->data && (VAR_24 & VAR_18))
    FUNC_8(VAR_23, VAR_24);
  }

  if (FUNC_15(VAR_2, &VAR_23->pending_events)) {
   VAR_24 |= FUNC_13(VAR_23->base + VAR_13);
   if (FUNC_7(VAR_23, &VAR_24)) {
    if (FUNC_14(VAR_8, &VAR_23->pending_events))
     FUNC_6(VAR_23, VAR_24);
    FUNC_1(VAR_7|VAR_3,
        &VAR_23->pending_events);
    FUNC_8(VAR_23, VAR_24);
   }
  }
 }

 if (FUNC_15(VAR_5, &VAR_23->pending_events) &&
     !FUNC_15(VAR_8, &VAR_23->pending_events)) {

  VAR_24 = FUNC_13(VAR_23->base + VAR_13);

  VAR_24 |= VAR_23->status_reg;

  if (VAR_23->dma_dir == VAR_0)
   VAR_25 = VAR_21;
  else
   VAR_25 = VAR_16;

  if (VAR_24 & VAR_25) {
   FUNC_3(VAR_5, &VAR_23->pending_events);
   FUNC_8(VAR_23, VAR_24);
  }
 }

 if (FUNC_14(VAR_1, &VAR_23->pending_events)) {

  if (VAR_23->cmd)
   FUNC_6(VAR_23, VAR_20);

  if (VAR_23->data)
   FUNC_8(VAR_23, VAR_19 |
      VAR_14 | VAR_15);

  if (VAR_23->req)
   FUNC_9(VAR_23, VAR_23->req);

  FUNC_10(VAR_23->mmc, FUNC_12(100));

 }
}
