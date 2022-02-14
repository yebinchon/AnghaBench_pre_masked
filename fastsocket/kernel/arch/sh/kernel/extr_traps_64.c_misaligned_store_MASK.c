
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ pc; scalar_t__* regs; } ;
typedef scalar_t__ __u64 ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,scalar_t__*,int) ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;
 int FUNC_2 (struct pt_regs*,int,int,int,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,int,unsigned long) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_6(struct pt_regs *VAR_1,
       __u32 VAR_2,
       int VAR_3,
       int VAR_4)
{

 int VAR_5;
 int VAR_6;
 __u64 VAR_7;

 VAR_5 = FUNC_2(VAR_1, VAR_2,
   VAR_3, VAR_4, &VAR_7);
 if (VAR_5 < 0) {
  return VAR_5;
 }

 VAR_6 = (VAR_2 >> 4) & 0x3f;
 if (FUNC_5(VAR_1)) {
  __u64 VAR_8;

  if (!FUNC_1(VAR_0, (unsigned long) VAR_7, 1UL<<VAR_4)) {
   return -1;
  }

  switch (VAR_4) {
  case 1:
   *(__u16 *) &VAR_8 = (__u16) VAR_1->regs[VAR_6];
   break;
  case 2:
   *(__u32 *) &VAR_8 = (__u32) VAR_1->regs[VAR_6];
   break;
  case 3:
   VAR_8 = VAR_1->regs[VAR_6];
   break;
  default:
   FUNC_4("Unexpected width_shift %d in misaligned_store, PC=%08lx\n",
    VAR_4, (unsigned long) VAR_1->pc);
   break;
  }

  if (FUNC_0((void *)(int)VAR_7, &VAR_8, (1 << VAR_4)) > 0) {
   return -1;
  }
 } else {

  __u64 VAR_9 = VAR_1->regs[VAR_6];

  switch (VAR_4) {
  case 1:
   FUNC_3(VAR_7, VAR_9);
   break;
  case 2:
   asm ("stlo.l %1, 0, %0" : : "r" (VAR_9), "r" (VAR_7));
   asm ("sthi.l %1, 3, %0" : : "r" (VAR_9), "r" (VAR_7));
   break;
  case 3:
   asm ("stlo.q %1, 0, %0" : : "r" (VAR_9), "r" (VAR_7));
   asm ("sthi.q %1, 7, %0" : : "r" (VAR_9), "r" (VAR_7));
   break;

  default:
   FUNC_4("Unexpected width_shift %d in misaligned_store, PC=%08lx\n",
    VAR_4, (unsigned long) VAR_1->pc);
   break;
  }
 }

 return 0;

}
