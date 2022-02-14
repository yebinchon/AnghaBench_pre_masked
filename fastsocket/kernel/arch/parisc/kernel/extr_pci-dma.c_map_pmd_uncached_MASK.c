
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (int *,unsigned long,unsigned long,unsigned long*) ;
 int * FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(pmd_t * VAR_5, unsigned long VAR_6,
  unsigned long VAR_7, unsigned long *VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10 = VAR_6;

 VAR_6 &= ~VAR_1;
 VAR_9 = VAR_6 + VAR_7;
 if (VAR_9 > VAR_2)
  VAR_9 = VAR_2;
 do {
  pte_t * VAR_11 = FUNC_1(VAR_5, VAR_6);
  if (!VAR_11)
   return -VAR_0;
  if (FUNC_0(VAR_11, VAR_10, VAR_9 - VAR_6, VAR_8))
   return -VAR_0;
  VAR_6 = (VAR_6 + VAR_4) & VAR_3;
  VAR_10 += VAR_4;
  VAR_5++;
 } while (VAR_6 < VAR_9);
 return 0;
}
