
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __wsum ;



__wsum
FUNC_0(const void *VAR_0, void *VAR_1, int VAR_2, __wsum VAR_3)
{
 unsigned long VAR_4, VAR_5;
 __asm__("movel %2,%4\n\t"
  "btst #1,%4\n\t"
  "jeq 2f\n\t"
  "subql #2,%1\n\t"
  "jgt 1f\n\t"
  "addql #2,%1\n\t"
  "jra 4f\n"
      "1:\t"
  "movew %2@+,%4\n\t"
  "addw %4,%0\n\t"
  "movew %4,%3@+\n\t"
  "clrl %4\n\t"
  "addxl %4,%0\n"
      "2:\t"

  "movel %1,%4\n\t"
  "lsrl #5,%1\n\t"
  "jeq 2f\n\t"
  "subql #1,%1\n"
      "1:\t"
  "movel %2@+,%5\n\t"
  "addxl %5,%0\n\t"
  "movel %5,%3@+\n\t"
  "movel %2@+,%5\n\t"
  "addxl %5,%0\n\t"
  "movel %5,%3@+\n\t"
  "movel %2@+,%5\n\t"
  "addxl %5,%0\n\t"
  "movel %5,%3@+\n\t"
  "movel %2@+,%5\n\t"
  "addxl %5,%0\n\t"
  "movel %5,%3@+\n\t"
  "movel %2@+,%5\n\t"
  "addxl %5,%0\n\t"
  "movel %5,%3@+\n\t"
  "movel %2@+,%5\n\t"
  "addxl %5,%0\n\t"
  "movel %5,%3@+\n\t"
  "movel %2@+,%5\n\t"
  "addxl %5,%0\n\t"
  "movel %5,%3@+\n\t"
  "movel %2@+,%5\n\t"
  "addxl %5,%0\n\t"
  "movel %5,%3@+\n\t"
  "dbra %1,1b\n\t"
  "clrl %5\n\t"
  "addxl %5,%0\n\t"
  "clrw %1\n\t"
  "subql #1,%1\n\t"
  "jcc 1b\n"
      "2:\t"
  "movel %4,%1\n\t"
  "andw #0x1c,%4\n\t"
  "jeq 4f\n\t"
  "lsrw #2,%4\n\t"
  "subqw #1,%4\n"
      "3:\t"

  "movel %2@+,%5\n\t"
  "addxl %5,%0\n\t"
  "movel %5,%3@+\n\t"
  "dbra %4,3b\n\t"
  "clrl %5\n\t"
  "addxl %5,%0\n"
      "4:\t"

  "andw #3,%1\n\t"
  "jeq 7f\n\t"
  "clrl %5\n\t"
  "subqw #2,%1\n\t"
  "jlt 5f\n\t"
  "movew %2@+,%5\n\t"
  "movew %5,%3@+\n\t"
  "swap %5\n\t"
  "tstw %1\n\t"
  "jeq 6f\n"
      "5:\t"
  "moveb %2@,%5\n\t"
  "moveb %5,%3@+\n\t"
  "lslw #8,%5\n"
      "6:\t"
  "addl %5,%0\n\t"
  "clrl %5\n\t"
  "addxl %5,%0\n"
      "7:\t"
  : "=d" (VAR_3), "=d" (VAR_2), "=a" (VAR_0), "=a" (VAR_1),
    "=&d" (VAR_4), "=&d" (VAR_5)
  : "0" (VAR_3), "1" (VAR_2), "2" (VAR_0), "3" (VAR_1)
     );
    return(VAR_3);
}
