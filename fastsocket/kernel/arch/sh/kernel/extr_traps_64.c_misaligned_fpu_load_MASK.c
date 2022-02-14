
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pt_regs {scalar_t__ pc; int sr; } ;
typedef scalar_t__ __u64 ;
typedef int __u32 ;
struct TYPE_7__ {int* fp_regs; } ;
struct TYPE_8__ {TYPE_1__ hard; } ;
struct TYPE_9__ {TYPE_2__ fpu; } ;
struct TYPE_10__ {TYPE_3__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,void const*,int) ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (char*,struct pt_regs*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct pt_regs*,int,int,int,scalar_t__*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_6 (char*,int,unsigned long) ;
 int FUNC_7 (TYPE_4__*,struct pt_regs*) ;
 scalar_t__ FUNC_8 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_9(struct pt_regs *VAR_4,
      __u32 VAR_5,
      int VAR_6,
      int VAR_7,
      int VAR_8)
{

 int VAR_9;
 int VAR_10;
 __u64 VAR_11;

 VAR_9 = FUNC_5(VAR_4, VAR_5,
   VAR_6, VAR_7, &VAR_11);
 if (VAR_9 < 0) {
  return VAR_9;
 }

 VAR_10 = (VAR_5 >> 4) & 0x3f;
 if (FUNC_8(VAR_4)) {
  __u64 VAR_12;
  __u32 VAR_13, VAR_14;

  if (!FUNC_1(VAR_1, (unsigned long) VAR_11, 1UL<<VAR_7)) {
   return -1;
  }

  if (FUNC_0(&VAR_12, (const void *)(int)VAR_11, (1 << VAR_7)) > 0) {
   return -1;
  }



  if (VAR_3 == VAR_2) {
   FUNC_4();
   FUNC_7(VAR_2, VAR_4);
   FUNC_3();
   VAR_3 = ((void*)0);
   VAR_4->sr |= VAR_0;
  }

  VAR_13 = *(__u32*) &VAR_12;
  VAR_14 = *(1 + (__u32*) &VAR_12);

  switch (VAR_7) {
  case 2:
   VAR_2->thread.fpu.hard.fp_regs[VAR_10] = VAR_13;
   break;
  case 3:
   if (VAR_8) {
    VAR_2->thread.fpu.hard.fp_regs[VAR_10] = VAR_13;
    VAR_2->thread.fpu.hard.fp_regs[VAR_10+1] = VAR_14;
   } else {




    VAR_2->thread.fpu.hard.fp_regs[VAR_10] = VAR_13;
    VAR_2->thread.fpu.hard.fp_regs[VAR_10+1] = VAR_14;

   }
   break;
  default:
   FUNC_6("Unexpected width_shift %d in misaligned_fpu_load, PC=%08lx\n",
    VAR_7, (unsigned long) VAR_4->pc);
   break;
  }
  return 0;
 } else {
  FUNC_2 ("Misaligned FPU load inside kernel", VAR_4, 0);
  return -1;
 }


}
