
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct mm_struct*,int *,unsigned long,unsigned long,unsigned long,int ,int) ;
 int * FUNC_1 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct mm_struct *VAR_5, pmd_t * VAR_6, unsigned long VAR_7, unsigned long VAR_8,
 unsigned long VAR_9, pgprot_t VAR_10, int VAR_11)
{
 unsigned long VAR_12;

 VAR_7 &= ~VAR_1;
 VAR_12 = VAR_7 + VAR_8;
 if (VAR_12 > VAR_2)
  VAR_12 = VAR_2;
 VAR_9 -= VAR_7;
 do {
  pte_t * VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_7);
  if (!VAR_13)
   return -VAR_0;
  FUNC_0(VAR_5, VAR_13, VAR_7, VAR_12 - VAR_7, VAR_7 + VAR_9, VAR_10, VAR_11);
  FUNC_2(VAR_13);
  VAR_7 = (VAR_7 + VAR_4) & VAR_3;
  VAR_6++;
 } while (VAR_7 < VAR_12);
 return 0;
}
