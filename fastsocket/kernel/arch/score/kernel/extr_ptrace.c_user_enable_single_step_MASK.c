
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int single_step; int ss_nextcnt; int insn1_type; unsigned int addr1; short insn1; int insn2_type; unsigned int addr2; short insn2; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {unsigned int cp0_epc; unsigned int* regs; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct task_struct*,unsigned int,unsigned long*) ;
 struct pt_regs* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,unsigned int,int ) ;
 int FUNC_4 (struct task_struct*,unsigned int,int ) ;

void FUNC_5(struct task_struct *VAR_14)
{

 unsigned int VAR_15, VAR_16 = 0;
 unsigned long VAR_17, VAR_18;
 int VAR_19;
 unsigned int VAR_20, VAR_21;
 struct pt_regs *VAR_22 = FUNC_2(VAR_14);
 VAR_14->thread.single_step = 1;
 VAR_14->thread.ss_nextcnt = 1;
 VAR_15 = VAR_22->cp0_epc;

 FUNC_1(VAR_14, VAR_15, &VAR_17);

 if (FUNC_0(VAR_17)) {
  if ((VAR_17 & VAR_9) == VAR_8) {
   VAR_20 = VAR_17 & 0xFFE;
   VAR_15 = (VAR_15 & 0xFFFFF000) | VAR_20;
  } else if ((VAR_17 & VAR_1) == VAR_0) {
   VAR_14->thread.ss_nextcnt = 2;
   VAR_20 = (VAR_17 & 0xFF) << 1;
   VAR_20 = VAR_20 << 23;
   VAR_20 = (unsigned int)((int) VAR_20 >> 23);
   VAR_16 = VAR_15 + VAR_20;
   VAR_15 += 2;
  } else if ((VAR_17 & VAR_5) == VAR_4) {
   VAR_14->thread.ss_nextcnt = 2;
   VAR_20 = (VAR_17 >> 4) & 0xF;
   VAR_16 = VAR_22->regs[VAR_20];
   VAR_15 += 2;
  } else
   VAR_15 += 2;
 } else {
  if ((VAR_17 & VAR_11) == VAR_10) {
   VAR_20 = VAR_17 & 0x03FFFFFE;
   VAR_21 = VAR_20 & 0x7FFF;
   VAR_20 = (((VAR_20 >> 16) & 0x3FF) << 15) | VAR_21;
   VAR_15 = (VAR_15 & 0xFFC00000) | VAR_20;
  } else if ((VAR_17 & VAR_3) == VAR_2) {
   VAR_14->thread.ss_nextcnt = 2;
   VAR_20 = VAR_17 & 0x03FFFFFE;
   VAR_21 = VAR_20 & 0x3FF;
   VAR_20 = (((VAR_20 >> 16) & 0x3FF) << 10) | VAR_21;
   VAR_20 = VAR_20 << 12;
   VAR_20 = (unsigned int)((int) VAR_20 >> 12);
   VAR_16 = VAR_15 + VAR_20;
   VAR_15 += 4;
  } else if ((VAR_17 & VAR_7) == VAR_6) {
   VAR_14->thread.ss_nextcnt = 2;
   VAR_20 = (VAR_17 >> 16) & 0x1F;
   VAR_16 = VAR_22->regs[VAR_20];
   VAR_15 += 4;
  } else
   VAR_15 += 4;
 }

 if (VAR_14->thread.ss_nextcnt == 1) {
  FUNC_1(VAR_14, VAR_15, &VAR_17);

  if (FUNC_0(VAR_17)) {
   FUNC_4(VAR_14, VAR_15, VAR_12);
   VAR_19 = 0;
  } else {
   FUNC_3(VAR_14, VAR_15, VAR_13);
   VAR_19 = 1;
  }

  if (VAR_19 == 0) {
   VAR_14->thread.insn1_type = 0;
   VAR_14->thread.addr1 = VAR_15;

   VAR_14->thread.insn1 = (short)VAR_17;
  } else {
   VAR_14->thread.insn1_type = 1;
   VAR_14->thread.addr1 = VAR_15;
   VAR_14->thread.insn1 = VAR_17;
  }
 } else {

  FUNC_1(VAR_14, VAR_15, &VAR_17);
  FUNC_1(VAR_14, VAR_16, &VAR_18);
  if (FUNC_0(VAR_17)) {
   FUNC_4(VAR_14, VAR_15, VAR_12);
   VAR_19 = 0;
  } else {
   FUNC_3(VAR_14, VAR_15, VAR_13);
   VAR_19 = 1;
  }

  if (VAR_19 == 0) {
   VAR_14->thread.insn1_type = 0;
   VAR_14->thread.addr1 = VAR_15;

   VAR_14->thread.insn1 = (short)VAR_17;
  } else {
   VAR_14->thread.insn1_type = 1;
   VAR_14->thread.addr1 = VAR_15;
   VAR_14->thread.insn1 = VAR_17;
  }

  if (FUNC_0(VAR_18)) {
   FUNC_4(VAR_14, VAR_16, VAR_12);
   VAR_19 = 0;
  } else {
   FUNC_3(VAR_14, VAR_16, VAR_13);
   VAR_19 = 1;
  }

  if (VAR_19 == 0) {
   VAR_14->thread.insn2_type = 0;
   VAR_14->thread.addr2 = VAR_16;

   VAR_14->thread.insn2 = (short)VAR_18;
  } else {
   VAR_14->thread.insn2_type = 1;
   VAR_14->thread.addr2 = VAR_16;
   VAR_14->thread.insn2 = VAR_18;
  }
 }
}
