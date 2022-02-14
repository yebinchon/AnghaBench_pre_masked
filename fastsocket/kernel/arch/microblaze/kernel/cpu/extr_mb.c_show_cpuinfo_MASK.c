
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_6__ {scalar_t__ k; int * s; } ;
struct TYPE_5__ {scalar_t__ fpga_family_code; scalar_t__ ver_code; int cpu_clock_freq; int use_instr; int use_mult; int use_fpu; int use_exc; int icache_size; int dcache_size; char* pvr_user1; char* pvr_user2; scalar_t__ hw_debug; scalar_t__ use_dcache; scalar_t__ use_icache; int mmu; } ;
struct TYPE_4__ {scalar_t__ k; int * s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_3__* VAR_17 ;
 TYPE_2__ VAR_18 ;
 TYPE_1__* VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_21, void *VAR_22)
{
 int VAR_23 = 0;
 char *VAR_24 = "Unknown";
 char *VAR_25 = "Unknown";
 int VAR_26;


 for (VAR_26 = 0; VAR_19[VAR_26].s != ((void*)0); VAR_26++) {
  if (VAR_18.fpga_family_code == VAR_19[VAR_26].k) {
   VAR_24 = (char *)VAR_19[VAR_26].s;
   break;
  }
 }


 for (VAR_26 = 0; VAR_17[VAR_26].s != ((void*)0); VAR_26++) {
  if (VAR_18.ver_code == VAR_17[VAR_26].k) {
   VAR_25 = (char *)VAR_17[VAR_26].s;
   break;
  }
 }

 VAR_23 = FUNC_0(VAR_21,
   "CPU-Family:	MicroBlaze\n"
   "FPGA-Arch:	%s\n"
   "CPU-Ver:	%s\n"
   "CPU-MHz:	%d.%02d\n"
   "BogoMips:	%lu.%02lu\n",
   VAR_24,
   VAR_25,
   VAR_18.cpu_clock_freq /
   1000000,
   VAR_18.cpu_clock_freq %
   1000000,
   VAR_20 / (500000 / VAR_0),
   (VAR_20 / (5000 / VAR_0)) % 100);

 VAR_23 += FUNC_0(VAR_21,
  "HW:\n Shift:\t\t%s\n"
  " MSR:\t\t%s\n"
  " PCMP:\t\t%s\n"
  " DIV:\t\t%s\n",
  (VAR_18.use_instr & VAR_1) ? "yes" : "no",
  (VAR_18.use_instr & VAR_14) ? "yes" : "no",
  (VAR_18.use_instr & VAR_16) ? "yes" : "no",
  (VAR_18.use_instr & VAR_2) ? "yes" : "no");

 VAR_23 += FUNC_0(VAR_21,
   " MMU:\t\t%x\n",
   VAR_18.mmu);

 VAR_23 += FUNC_0(VAR_21,
  " MUL:\t\t%s\n"
  " FPU:\t\t%s\n",
  (VAR_18.use_mult & VAR_15) ? "v2" :
   (VAR_18.use_mult & VAR_4) ? "v1" : "no",
  (VAR_18.use_fpu & VAR_12) ? "v2" :
   (VAR_18.use_fpu & VAR_3) ? "v1" : "no");

 VAR_23 += FUNC_0(VAR_21,
  " Exc:\t\t%s%s%s%s%s%s%s%s\n",
  (VAR_18.use_exc & VAR_10) ? "op0x0 " : "",
  (VAR_18.use_exc & VAR_11) ? "unal " : "",
  (VAR_18.use_exc & VAR_8) ? "ill " : "",
  (VAR_18.use_exc & VAR_9) ? "iopb " : "",
  (VAR_18.use_exc & VAR_6) ? "dopb " : "",
  (VAR_18.use_exc & VAR_5) ? "zero " : "",
  (VAR_18.use_exc & VAR_7) ? "fpu " : "",
  (VAR_18.use_exc & VAR_13) ? "fsl " : "");

 if (VAR_18.use_icache)
  VAR_23 += FUNC_0(VAR_21,
    "Icache:\t\t%ukB\n",
    VAR_18.icache_size >> 10);
 else
  VAR_23 += FUNC_0(VAR_21, "Icache:\t\tno\n");

 if (VAR_18.use_dcache)
  VAR_23 += FUNC_0(VAR_21,
    "Dcache:\t\t%ukB\n",
    VAR_18.dcache_size >> 10);
 else
  VAR_23 += FUNC_0(VAR_21, "Dcache:\t\tno\n");

 VAR_23 += FUNC_0(VAR_21,
   "HW-Debug:\t%s\n",
   VAR_18.hw_debug ? "yes" : "no");

 VAR_23 += FUNC_0(VAR_21,
   "PVR-USR1:\t%02x\n"
   "PVR-USR2:\t%08x\n",
   VAR_18.pvr_user1,
   VAR_18.pvr_user2);

 return 0;
}
