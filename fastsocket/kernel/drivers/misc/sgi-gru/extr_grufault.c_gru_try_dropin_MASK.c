
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gru_tlb_fault_handle {scalar_t__ status; unsigned long state; int cause; unsigned long missvaddr; int missasid; int indexway; } ;
struct TYPE_4__ {int tlbdropin; } ;
struct gru_thread_state {unsigned char ts_tlb_preload_count; int ts_sizeavail; int ts_force_cch_reload; TYPE_2__ ustats; TYPE_1__* ts_gms; } ;
struct gru_state {int gs_gid; } ;
struct gru_instruction_bits {scalar_t__ status; unsigned long state; int cause; unsigned long missvaddr; int missasid; int indexway; } ;
struct gru_control_block_extended {int dummy; } ;
struct TYPE_3__ {int ms_range_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct gru_tlb_fault_handle*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct gru_tlb_fault_handle*) ;
 int FUNC_7 (struct gru_control_block_extended*) ;
 int FUNC_8 (struct gru_state*,struct gru_thread_state*,int,unsigned long,int,int,unsigned char,struct gru_tlb_fault_handle*,struct gru_control_block_extended*) ;
 struct gru_control_block_extended* FUNC_9 (struct gru_tlb_fault_handle*) ;
 int FUNC_10 (struct gru_thread_state*) ;
 int FUNC_11 (struct gru_thread_state*,unsigned long,int,int,unsigned long*,int*) ;
 int VAR_10 ;
 int FUNC_12 (struct gru_control_block_extended*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct gru_tlb_fault_handle*) ;
 int VAR_11 ;
 int FUNC_16 (struct gru_tlb_fault_handle*) ;
 int FUNC_17 (struct gru_tlb_fault_handle*,unsigned long,int ,unsigned long,int,int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_18 (unsigned char) ;

__attribute__((used)) static int FUNC_19(struct gru_state *VAR_20,
     struct gru_thread_state *VAR_21,
     struct gru_tlb_fault_handle *VAR_22,
     struct gru_instruction_bits *VAR_23)
{
 struct gru_control_block_extended *VAR_24 = ((void*)0);
 unsigned char VAR_25 = VAR_21->ts_tlb_preload_count;
 int VAR_26 = 0, VAR_27, VAR_28, VAR_29, VAR_30 = !VAR_23, VAR_31;
 unsigned long VAR_32 = 0, VAR_33 = 0;
 if (FUNC_18(VAR_25)) {
  VAR_24 = FUNC_9(VAR_22);
  FUNC_12(VAR_24);
 }






 if (VAR_22->status != VAR_7) {
  FUNC_6(VAR_22);
  FUNC_14();
  if (VAR_22->status != VAR_7)
   goto failnoexception;
  FUNC_2(VAR_11);
 }
 if (VAR_22->state == VAR_5)
  goto failidle;
 if (VAR_22->state == VAR_6 && VAR_23)
  goto failfmm;

 VAR_28 = (VAR_22->cause & VAR_4) != 0;
 VAR_33 = VAR_22->missvaddr;
 VAR_27 = VAR_22->missasid;
 VAR_31 = VAR_22->indexway;
 if (VAR_27 == 0)
  goto failnoasid;

 FUNC_13();





 if (FUNC_3(&VAR_21->ts_gms->ms_range_active))
  goto failactive;

 VAR_29 = FUNC_11(VAR_21, VAR_33, VAR_28, VAR_30, &VAR_32, &VAR_26);
 if (VAR_29 == VAR_8)
  goto failinval;
 if (VAR_29 == VAR_9)
  goto failupm;

 if (!(VAR_21->ts_sizeavail & FUNC_1(VAR_26))) {
  VAR_21->ts_sizeavail |= FUNC_1(VAR_26);
  if (VAR_30 || !FUNC_10(VAR_21)) {
   VAR_21->ts_force_cch_reload = 1;
   goto failupm;
  }
 }

 if (FUNC_18(VAR_24) && VAR_26 == VAR_3) {
  FUNC_8(VAR_20, VAR_21, VAR_30, VAR_33, VAR_27, VAR_28, VAR_25, VAR_22, VAR_24);
  FUNC_7(VAR_24);
 }

 FUNC_4(VAR_23);
 VAR_21->ustats.tlbdropin++;
 FUNC_17(VAR_22, VAR_32, VAR_2, VAR_33, VAR_27, VAR_28,
     FUNC_0(VAR_26));
 FUNC_5(VAR_10,
  "%s: gid %d, gts 0x%p, tfh 0x%p, vaddr 0x%lx, asid 0x%x, indexway 0x%x,"
  " rw %d, ps %d, gpa 0x%lx\n",
  VAR_30 ? "atomic" : "non-atomic", VAR_20->gs_gid, VAR_21, VAR_22, VAR_33, VAR_27,
  VAR_31, VAR_28, VAR_26, VAR_32);
 FUNC_2(VAR_12);
 return 0;

failnoasid:

 FUNC_2(VAR_16);
 FUNC_5(VAR_10, "FAILED no_asid tfh: 0x%p, vaddr 0x%lx\n", VAR_22, VAR_33);
 if (!VAR_23)
  FUNC_16(VAR_22);
 else
  FUNC_6(VAR_22);
 FUNC_7(VAR_24);
 return -VAR_0;

failupm:

 FUNC_16(VAR_22);
 FUNC_7(VAR_24);
 FUNC_2(VAR_19);
 FUNC_5(VAR_10, "FAILED upm tfh: 0x%p, vaddr 0x%lx\n", VAR_22, VAR_33);
 return 1;

failfmm:

 FUNC_6(VAR_22);
 FUNC_7(VAR_24);
 FUNC_2(VAR_13);
 FUNC_5(VAR_10, "FAILED fmm tfh: 0x%p, state %d\n", VAR_22, VAR_22->state);
 return 0;

failnoexception:

 FUNC_6(VAR_22);
 FUNC_7(VAR_24);
 if (VAR_23)
  FUNC_6(VAR_23);
 FUNC_2(VAR_17);
 FUNC_5(VAR_10, "FAILED non-exception tfh: 0x%p, status %d, state %d\n",
  VAR_22, VAR_22->status, VAR_22->state);
 return 0;

failidle:

 FUNC_6(VAR_22);
 FUNC_7(VAR_24);
 if (VAR_23)
  FUNC_6(VAR_23);
 FUNC_2(VAR_14);
 FUNC_5(VAR_10, "FAILED idle tfh: 0x%p, state %d\n", VAR_22, VAR_22->state);
 return 0;

failinval:

 FUNC_15(VAR_22);
 FUNC_7(VAR_24);
 FUNC_2(VAR_15);
 FUNC_5(VAR_10, "FAILED inval tfh: 0x%p, vaddr 0x%lx\n", VAR_22, VAR_33);
 return -VAR_1;

failactive:

 if (!VAR_23)
  FUNC_16(VAR_22);
 else
  FUNC_6(VAR_22);
 FUNC_7(VAR_24);
 FUNC_2(VAR_18);
 FUNC_5(VAR_10, "FAILED range active: tfh 0x%p, vaddr 0x%lx\n",
  VAR_22, VAR_33);
 return 1;
}
