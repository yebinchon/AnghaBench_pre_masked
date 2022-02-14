
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mmc_command {int flags; unsigned int opcode; int arg; } ;
struct imxmci_host {scalar_t__ actual_bus_width; unsigned int imask; int mmc; int lock; scalar_t__ base; int pending_events; int stuck_timeout; struct mmc_command* cmd; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (struct imxmci_host*) ;
 int FUNC_4 (struct imxmci_host*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mmc_command*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct imxmci_host *VAR_23, struct mmc_command *VAR_24, unsigned int VAR_25)
{
 unsigned long VAR_26;
 u32 VAR_27;

 FUNC_0(VAR_23->cmd != ((void*)0));
 VAR_23->cmd = VAR_24;


 FUNC_4(VAR_23);

 if (VAR_24->flags & VAR_22)
  VAR_25 |= VAR_0;

 switch (FUNC_6(VAR_24)) {
 case 131:
 case 130:
  VAR_25 |= VAR_4;
  break;
 case 129:
  VAR_25 |= VAR_5;
  break;
 case 128:
  VAR_25 |= VAR_6;
  break;
 default:
  break;
 }

 if (FUNC_10(VAR_10, &VAR_23->pending_events))
  VAR_25 |= VAR_3;

 if (VAR_23->actual_bus_width == VAR_16)
  VAR_25 |= VAR_1;

 FUNC_12(VAR_24->opcode, VAR_23->base + VAR_19);
 FUNC_12(VAR_24->arg >> 16, VAR_23->base + VAR_17);
 FUNC_12(VAR_24->arg & 0xffff, VAR_23->base + VAR_18);
 FUNC_12(VAR_25, VAR_23->base + VAR_20);

 FUNC_1(&VAR_23->stuck_timeout, 0);
 FUNC_7(VAR_11, &VAR_23->pending_events);


 VAR_27 = VAR_8;
 VAR_27 &= ~VAR_14;
 if (VAR_25 & VAR_2) {

  VAR_27 &= ~VAR_13;
  if (VAR_25 & VAR_7)
   VAR_27 &= ~VAR_15;
  if (FUNC_11(VAR_9, &VAR_23->pending_events))
   VAR_27 &= ~VAR_12;
 }

 FUNC_8(&VAR_23->lock, VAR_26);
 VAR_23->imask = VAR_27;
 FUNC_12(VAR_23->imask, VAR_23->base + VAR_21);
 FUNC_9(&VAR_23->lock, VAR_26);

 FUNC_2(FUNC_5(VAR_23->mmc), "CMD%02d (0x%02x) mask set to 0x%04x\n",
  VAR_24->opcode, VAR_24->opcode, VAR_27);

 FUNC_3(VAR_23);
}
