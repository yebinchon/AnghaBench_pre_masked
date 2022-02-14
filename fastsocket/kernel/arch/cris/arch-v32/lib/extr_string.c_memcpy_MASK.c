
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

void *
FUNC_0(void *VAR_1, const void *VAR_2, size_t VAR_3)
{







  register void *VAR_4 __asm__ ("r10") = VAR_1;
  register unsigned char *VAR_5 __asm__ ("r13") = VAR_1;
  register unsigned const char *VAR_6 __asm__ ("r11") = VAR_2;
  register int VAR_7 __asm__ ("r12") = VAR_3;




  if (((unsigned long) VAR_5 & 3) != 0


      && VAR_7 >= 3)
  {
    if ((unsigned long) VAR_5 & 1)
      {
 VAR_7--;
 *VAR_5 = *VAR_6;
 VAR_6++;
 VAR_5++;
      }

    if ((unsigned long) VAR_5 & 2)
      {
 VAR_7 -= 2;
 *(short *) VAR_5 = *(short *) VAR_6;
 VAR_6 += 2;
 VAR_5 += 2;
      }
  }


  if (VAR_7 >= VAR_0)
    {




      __asm__ volatile
 ("	 ;; GCC does promise correct register allocations, but let's	\n	 ;; make sure it keeps its promises.				\n	 .ifnc %0-%1-%2,$r13-$r11-$r12					\n	 .error \"GCC reg alloc bug: %0-%1-%4 != $r13-$r12-$r11\"	\n	 .endif								\n									\n	 ;; Save the registers we'll use in the movem process		\n	 ;; on the stack.						\n	 subq	11*4,sp							\n	 movem	r10,[sp]						\n									\n	 ;; Now we've got this:						\n	 ;; r11 - src							\n	 ;; r13 - dst							\n	 ;; r12 - n							\n									\n	 ;; Update n for the first loop.				\n	 subq	 44,r12							\n0:									\n"
"	 movem	[r11+],r10						\n	 subq	44,r12							\n	 bge	 0b							\n	 movem	r10,[r13+]						\n									\n	 ;; Compensate for last loop underflowing n.			\n	 addq	44,r12							\n									\n	 ;; Restore registers from stack.				\n	 movem [sp+],r10"
  : "=r" (VAR_5), "=r" (VAR_6), "=r" (VAR_7)


  : "0" (VAR_5), "1" (VAR_6), "2" (VAR_7));
    }

  while (VAR_7 >= 16)
    {
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;

      VAR_7 -= 16;
    }

  switch (VAR_7)
    {
    case 0:
      break;

    case 1:
      *VAR_5 = *VAR_6;
      break;

    case 2:
      *(short *) VAR_5 = *(short *) VAR_6;
      break;

    case 3:
      *(short *) VAR_5 = *(short *) VAR_6; VAR_5 += 2; VAR_6 += 2;
      *VAR_5 = *VAR_6;
      break;

    case 4:
      *(long *) VAR_5 = *(long *) VAR_6;
      break;

    case 5:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *VAR_5 = *VAR_6;
      break;

    case 6:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(short *) VAR_5 = *(short *) VAR_6;
      break;

    case 7:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(short *) VAR_5 = *(short *) VAR_6; VAR_5 += 2; VAR_6 += 2;
      *VAR_5 = *VAR_6;
      break;

    case 8:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6;
      break;

    case 9:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *VAR_5 = *VAR_6;
      break;

    case 10:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(short *) VAR_5 = *(short *) VAR_6;
      break;

    case 11:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(short *) VAR_5 = *(short *) VAR_6; VAR_5 += 2; VAR_6 += 2;
      *VAR_5 = *VAR_6;
      break;

    case 12:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6;
      break;

    case 13:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *VAR_5 = *VAR_6;
      break;

    case 14:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(short *) VAR_5 = *(short *) VAR_6;
      break;

    case 15:
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(long *) VAR_5 = *(long *) VAR_6; VAR_5 += 4; VAR_6 += 4;
      *(short *) VAR_5 = *(short *) VAR_6; VAR_5 += 2; VAR_6 += 2;
      *VAR_5 = *VAR_6;
      break;
    }

  return VAR_4;
}
