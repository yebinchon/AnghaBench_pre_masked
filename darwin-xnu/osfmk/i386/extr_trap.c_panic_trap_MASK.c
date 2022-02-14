
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t trapno; int err; int cs; int ss; int cpu; int rip; int rflags; int rsp; } ;
struct TYPE_6__ {TYPE_1__ isf; int cr2; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rdi; int rsi; int rbp; int rdx; int rcx; int rbx; int rax; } ;
typedef TYPE_2__ x86_saved_state64_t ;
typedef int uint32_t ;
typedef scalar_t__ pal_cr_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {TYPE_2__* cpu_fatal_trap_state; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (char*,scalar_t__,size_t,scalar_t__,...) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (char*,int ,size_t,char const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int,int ,int,int ,char*,char*,char*,char*,int ,int ) ;
 int FUNC_7 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char** VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_8(x86_saved_state64_t *VAR_12, uint32_t VAR_13, kern_return_t VAR_14)
{
 const char *VAR_15 = "Unknown";
 pal_cr_t VAR_16, VAR_17, VAR_18, VAR_19;
 boolean_t VAR_20 = VAR_0, VAR_21 = VAR_0;
 boolean_t VAR_22 = VAR_0;

 FUNC_5( &VAR_16, &VAR_17, &VAR_18, &VAR_19 );
 FUNC_0(FUNC_4() == VAR_0);
 FUNC_2()->cpu_fatal_trap_state = VAR_12;




 FUNC_7();

 FUNC_3("CPU %d panic trap number 0x%x, rip 0x%016llx\n",
     FUNC_1(), VAR_12->isf.trapno, VAR_12->isf.rip);
 FUNC_3("cr0 0x%016llx cr2 0x%016llx cr3 0x%016llx cr4 0x%016llx\n",
  VAR_16, VAR_17, VAR_18, VAR_19);

 if (VAR_12->isf.trapno < VAR_1)
         VAR_15 = VAR_10[VAR_12->isf.trapno];

 if ((VAR_12->isf.trapno == VAR_3) && (VAR_12->isf.err == (VAR_5 | VAR_4)) && (VAR_12->isf.rip == VAR_12->cr2)) {
  if (VAR_9 && (VAR_12->isf.rip < VAR_6)) {
   VAR_20 = VAR_2;
  } else if (VAR_12->isf.rip >= VAR_7) {
   VAR_21 = VAR_2;
  }
 } else if (VAR_8 &&
     VAR_12->isf.trapno == VAR_3 &&
     VAR_12->isf.err & VAR_5 &&
     VAR_12->cr2 < VAR_6 &&
     VAR_12->isf.rip >= VAR_7) {
  VAR_22 = VAR_2;
 }


 FUNC_6("Kernel trap at 0x%016llx, type %d=%s, registers:\n"
       "CR0: 0x%016llx, CR2: 0x%016llx, CR3: 0x%016llx, CR4: 0x%016llx\n"
       "RAX: 0x%016llx, RBX: 0x%016llx, RCX: 0x%016llx, RDX: 0x%016llx\n"
       "RSP: 0x%016llx, RBP: 0x%016llx, RSI: 0x%016llx, RDI: 0x%016llx\n"
       "R8:  0x%016llx, R9:  0x%016llx, R10: 0x%016llx, R11: 0x%016llx\n"
       "R12: 0x%016llx, R13: 0x%016llx, R14: 0x%016llx, R15: 0x%016llx\n"
       "RFL: 0x%016llx, RIP: 0x%016llx, CS:  0x%016llx, SS:  0x%016llx\n"
       "Fault CR2: 0x%016llx, Error code: 0x%016llx, Fault CPU: 0x%x%s%s%s%s, PL: %d, VF: %d\n",
       VAR_12->isf.rip, VAR_12->isf.trapno, VAR_15,
       VAR_16, VAR_17, VAR_18, VAR_19,
       VAR_12->rax, VAR_12->rbx, VAR_12->rcx, VAR_12->rdx,
       VAR_12->isf.rsp, VAR_12->rbp, VAR_12->rsi, VAR_12->rdi,
       VAR_12->r8, VAR_12->r9, VAR_12->r10, VAR_12->r11,
       VAR_12->r12, VAR_12->r13, VAR_12->r14, VAR_12->r15,
       VAR_12->isf.rflags, VAR_12->isf.rip, VAR_12->isf.cs & 0xFFFF,
       VAR_12->isf.ss & 0xFFFF,VAR_12->cr2, VAR_12->isf.err, VAR_12->isf.cpu,
       VAR_11 ? " VMM" : "",
       VAR_21 ? " Kernel NX fault" : "",
       VAR_20 ? " SMEP/User NX fault" : "",
       VAR_22 ? " SMAP fault" : "",
       VAR_13,
       VAR_14);





 VAR_16 = 0;
}
