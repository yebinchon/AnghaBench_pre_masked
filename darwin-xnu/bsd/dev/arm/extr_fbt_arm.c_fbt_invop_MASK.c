
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct arm_vfpsaved_state {int dummy; } ;
struct arm_saved_state {int sp; int cpsr; uintptr_t* r; scalar_t__ lr; } ;
struct TYPE_4__ {scalar_t__ fbtp_roffset; int fbtp_savedval; int fbtp_id; scalar_t__ fbtp_patchpoint; struct TYPE_4__* fbtp_hashnext; } ;
typedef TYPE_1__ fbt_probe_t ;
struct TYPE_5__ {int cpu_dtrace_invop_underway; scalar_t__ cpu_dtrace_caller; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (uintptr_t) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;
 TYPE_1__** VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,unsigned int) ;

int
FUNC_8(uintptr_t VAR_6, uintptr_t * VAR_7, uintptr_t VAR_8)
{
 fbt_probe_t *VAR_9 = VAR_5[FUNC_0(VAR_6)];

 for (; VAR_9 != ((void*)0); VAR_9 = VAR_9->fbtp_hashnext) {
  if ((uintptr_t) VAR_9->fbtp_patchpoint == VAR_6) {
   if (0 == VAR_0->cpu_dtrace_invop_underway) {
    VAR_0->cpu_dtrace_invop_underway = 1;


    struct arm_saved_state* VAR_10 = (struct arm_saved_state*) VAR_7;
    uintptr_t VAR_11 = *((uintptr_t*) VAR_10->sp);

    if ((VAR_10->cpsr & VAR_3) == VAR_2) {






     FUNC_7("dtrace: fbt: The probe at %08x was called from FIQ_MODE",(unsigned) VAR_6);
    }





    uint32_t VAR_12 = FUNC_6(VAR_10->cpsr);
    if ((VAR_12 & 0x7) != 0) {
     FUNC_7("dtrace: fbt: Instruction stream error: Middle of IT block at %08x",(unsigned) VAR_6);
    }

    if (VAR_9->fbtp_roffset == 0) {
     uint32_t VAR_13 = ((uint32_t) VAR_10) + sizeof(struct arm_saved_state);





     if (FUNC_1(VAR_9->fbtp_savedval))
      *((uint32_t*) VAR_13) = VAR_10->sp + FUNC_2(VAR_9->fbtp_savedval);
     else
      *((uint32_t*) VAR_13) = VAR_10->sp;

     VAR_0->cpu_dtrace_caller = VAR_10->lr;
     FUNC_5(VAR_9->fbtp_id, VAR_10->r[0], VAR_10->r[1], VAR_10->r[2], VAR_10->r[3], VAR_11);
     VAR_0->cpu_dtrace_caller = 0;
    } else {

     if (VAR_12 != 0) {




      int VAR_14 = (VAR_12 & 0xF0) >> 4;

      if (FUNC_4(VAR_14, VAR_10->cpsr) == 0) {

       FUNC_3(&VAR_10->cpsr);
       VAR_0->cpu_dtrace_invop_underway = 0;
       return VAR_1;
      }
     }

     FUNC_5(VAR_9->fbtp_id, VAR_9->fbtp_roffset, VAR_8, 0, 0, 0);
     VAR_0->cpu_dtrace_caller = 0;


     FUNC_3(&VAR_10->cpsr);
    }
    VAR_0->cpu_dtrace_invop_underway = 0;
   }






   return (VAR_9->fbtp_savedval);
  }
 }

 return (0);
}
