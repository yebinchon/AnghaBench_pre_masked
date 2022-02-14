
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int fpscr; unsigned int* fp_regs; } ;
struct TYPE_4__ {TYPE_3__ hard; } ;
struct TYPE_5__ {TYPE_1__ fpu; } ;
struct task_struct {TYPE_2__ thread; } ;
struct pt_regs {int pc; int pr; int sr; unsigned long* regs; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 long long FUNC_0 (long long,long long) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 long long FUNC_2 (long long,long long) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (TYPE_3__*,unsigned short) ;

__attribute__((used)) static int
FUNC_5 (struct pt_regs *VAR_2)
{
 unsigned short VAR_3 = *(unsigned short *) VAR_2->pc;
 unsigned short VAR_4;
 unsigned long VAR_5;
 int VAR_6[4] = {
  (VAR_3 >> 12) & 0xf,
  (VAR_3 >> 8) & 0xf,
  (VAR_3 >> 4) & 0xf,
  VAR_3 & 0xf};

 if (VAR_6[0] == 0xb ||
     (VAR_6[0] == 0x4 && VAR_6[2] == 0x0 && VAR_6[3] == 0xb))
  VAR_2->pr = VAR_2->pc + 4;
 if (VAR_6[0] == 0xa || VAR_6[0] == 0xb) {
  VAR_5 = VAR_2->pc + 4 + ((short) ((VAR_3 & 0xfff) << 4) >> 3);
  VAR_4 = *(unsigned short *) (VAR_2->pc + 2);
 } else if (VAR_6[0] == 0x8 && VAR_6[1] == 0xd) {
  if (VAR_2->sr & 1)
   VAR_5 = VAR_2->pc + 4 + ((char) (VAR_3 & 0xff) << 1);
  else
   VAR_5 = VAR_2->pc + 4;
  VAR_4 = *(unsigned short *) (VAR_2->pc + 2);
 } else if (VAR_6[0] == 0x8 && VAR_6[1] == 0xf) {
  if (VAR_2->sr & 1)
   VAR_5 = VAR_2->pc + 4;
  else
   VAR_5 = VAR_2->pc + 4 + ((char) (VAR_3 & 0xff) << 1);
  VAR_4 = *(unsigned short *) (VAR_2->pc + 2);
 } else if (VAR_6[0] == 0x4 && VAR_6[3] == 0xb &&
   (VAR_6[2] == 0x0 || VAR_6[2] == 0x2)) {
  VAR_5 = VAR_2->regs[VAR_6[1]];
  VAR_4 = *(unsigned short *) (VAR_2->pc + 2);
 } else if (VAR_6[0] == 0x0 && VAR_6[3] == 0x3 &&
   (VAR_6[2] == 0x0 || VAR_6[2] == 0x2)) {
  VAR_5 = VAR_2->pc + 4 + VAR_2->regs[VAR_6[1]];
  VAR_4 = *(unsigned short *) (VAR_2->pc + 2);
 } else if (VAR_3 == 0x000b) {
  VAR_5 = VAR_2->pr;
  VAR_4 = *(unsigned short *) (VAR_2->pc + 2);
 } else {
  VAR_5 = VAR_2->pc + 2;
  VAR_4 = VAR_3;
 }



 if ((VAR_4 & 0xf1ff) == 0xf0ad) {
  struct task_struct *VAR_7 = VAR_1;

  if ((VAR_7->thread.fpu.hard.fpscr & (1 << 17))) {

   FUNC_4 (&VAR_7->thread.fpu.hard,
         (VAR_4 >> 8) & 0xf);
  } else
   return 0;

  VAR_2->pc = VAR_5;
  return 1;
 } else if ((VAR_4 & 0xf00f) == 0xf002) {
  struct task_struct *VAR_8 = VAR_1;
  int VAR_9;
  int VAR_10, VAR_11, VAR_12;
  unsigned int VAR_13, VAR_14;

  VAR_10 = (VAR_4 >> 8) & 0xf;
  VAR_11 = (VAR_4 >> 4) & 0xf;
  VAR_13 = VAR_8->thread.fpu.hard.fp_regs[VAR_10];
  VAR_14 = VAR_8->thread.fpu.hard.fp_regs[VAR_11];
  VAR_9 = VAR_8->thread.fpu.hard.fpscr;
  VAR_12 = VAR_9 & (1 << 19);

  if ((VAR_9 & (1 << 17))
       && (VAR_12 && ((VAR_13 & 0x7fffffff) < 0x00100000
       || (VAR_14 & 0x7fffffff) < 0x00100000))) {
   long long VAR_15, VAR_16;


   VAR_15 = ((long long) VAR_13 << 32)
          | VAR_8->thread.fpu.hard.fp_regs[VAR_10+1];
   VAR_16 = ((long long) VAR_14 << 32)
          | VAR_8->thread.fpu.hard.fp_regs[VAR_11+1];
   if ((VAR_13 & 0x7fffffff) >= 0x00100000)
    VAR_15 = FUNC_2(VAR_16, VAR_15);
   else
    VAR_15 = FUNC_2(VAR_15, VAR_16);
   VAR_8->thread.fpu.hard.fp_regs[VAR_10] = VAR_15 >> 32;
   VAR_8->thread.fpu.hard.fp_regs[VAR_10+1] = VAR_15 & 0xffffffff;
  } else if ((VAR_9 & (1 << 17))
       && (!VAR_12 && ((VAR_13 & 0x7fffffff) < 0x00800000
       || (VAR_14 & 0x7fffffff) < 0x00800000))) {

   if ((VAR_13 & 0x7fffffff) >= 0x00800000)
    VAR_13 = FUNC_3(VAR_14, VAR_13);
   else
    VAR_13 = FUNC_3(VAR_13, VAR_14);
   VAR_8->thread.fpu.hard.fp_regs[VAR_10] = VAR_13;
  } else
   return 0;

  VAR_2->pc = VAR_5;
  return 1;
 } else if ((VAR_4 & 0xf00e) == 0xf000) {
  struct task_struct *VAR_17 = VAR_1;
  int VAR_18;
  int VAR_19, VAR_20, VAR_21;
  unsigned int VAR_22, VAR_23;

  VAR_19 = (VAR_4 >> 8) & 0xf;
  VAR_20 = (VAR_4 >> 4) & 0xf;
  VAR_22 = VAR_17->thread.fpu.hard.fp_regs[VAR_19];
  VAR_23 = VAR_17->thread.fpu.hard.fp_regs[VAR_20];
  VAR_18 = VAR_17->thread.fpu.hard.fpscr;
  VAR_21 = VAR_18 & (1 << 19);

  if ((VAR_18 & (1 << 17))
       && (VAR_21 && ((VAR_22 & 0x7fffffff) < 0x00100000
       || (VAR_23 & 0x7fffffff) < 0x00100000))) {
   long long VAR_24, VAR_25;


   VAR_24 = ((long long) VAR_22 << 32)
          | VAR_17->thread.fpu.hard.fp_regs[VAR_19+1];
   VAR_25 = ((long long) VAR_23 << 32)
          | VAR_17->thread.fpu.hard.fp_regs[VAR_20+1];
   if ((VAR_4 & 0xf00f) == 0xf000)
    VAR_24 = FUNC_0(VAR_24, VAR_25);
   else
    VAR_24 = FUNC_0(VAR_24, VAR_25 ^ (1LL << 63));
   VAR_17->thread.fpu.hard.fp_regs[VAR_19] = VAR_24 >> 32;
   VAR_17->thread.fpu.hard.fp_regs[VAR_19+1] = VAR_24 & 0xffffffff;
  } else if ((VAR_18 & (1 << 17))
       && (!VAR_21 && ((VAR_22 & 0x7fffffff) < 0x00800000
       || (VAR_23 & 0x7fffffff) < 0x00800000))) {

   if ((VAR_4 & 0xf00f) == 0xf000)
    VAR_22 = FUNC_1(VAR_22, VAR_23);
   else
    VAR_22 = FUNC_1(VAR_22, VAR_23 ^ 0x80000000);
   VAR_17->thread.fpu.hard.fp_regs[VAR_19] = VAR_22;
  } else
   return 0;

  VAR_2->pc = VAR_5;
  return 1;
 }

 return 0;
}
