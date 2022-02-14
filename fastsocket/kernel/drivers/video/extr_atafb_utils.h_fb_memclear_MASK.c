
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void *FUNC_0(void *VAR_0, size_t VAR_1)
{
 if (!VAR_1)
  return 0;

 if (VAR_1 < 16) {
  asm volatile ("\n"
   "	lsr.l	#1,%1 ; jcc 1f ; clr.b (%0)+\n"
   "1:	lsr.l	#1,%1 ; jcc 1f ; clr.w (%0)+\n"
   "1:	lsr.l	#1,%1 ; jcc 1f ; clr.l (%0)+\n"
   "1:	lsr.l	#1,%1 ; jcc 1f ; clr.l (%0)+ ; clr.l (%0)+\n"
   "1:"
   : "=a" (VAR_0), "=d" (VAR_1)
   : "0" (VAR_0), "1" (VAR_1));
 } else {
  long VAR_2;
  asm volatile ("\n"
   "	move.l	%1,%2\n"
   "	lsr.l	#1,%2 ; jcc 1f ; clr.b (%0)+ ; subq.w #1,%1\n"
   "	lsr.l	#1,%2 ; jcs 2f\n"
   "	clr.w	(%0)+  ; subq.w  #2,%1 ; jra 2f\n"
   "1:	lsr.l	#1,%2 ; jcc 2f\n"
   "	clr.w	(%0)+  ; subq.w  #2,%1\n"
   "2:	move.w	%1,%2; lsr.l #2,%1 ; jeq 6f\n"
   "	lsr.l	#1,%1 ; jcc 3f ; clr.l (%0)+\n"
   "3:	lsr.l	#1,%1 ; jcc 4f ; clr.l (%0)+ ; clr.l (%0)+\n"
   "4:	subq.l	#1,%1 ; jcs 6f\n"
   "5:	clr.l	(%0)+; clr.l (%0)+ ; clr.l (%0)+ ; clr.l (%0)+\n"
   "	dbra	%1,5b ; clr.w %1; subq.l #1,%1; jcc 5b\n"
   "6:	move.w	%2,%1; btst #1,%1 ; jeq 7f ; clr.w (%0)+\n"
   "7:	btst	#0,%1 ; jeq 8f ; clr.b (%0)+\n"
   "8:"
   : "=a" (VAR_0), "=d" (VAR_1), "=d" (VAR_2)
   : "0" (VAR_0), "1" (VAR_1));
 }

 return 0;
}
