
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct mm_struct*,int *,unsigned long,unsigned long,unsigned long,int ,int) ;
 int * FUNC_1 (struct mm_struct*,int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct mm_struct *VAR_3, pud_t * VAR_4, unsigned long VAR_5, unsigned long VAR_6,
 unsigned long VAR_7, pgprot_t VAR_8, int VAR_9)
{
 unsigned long VAR_10;

 VAR_5 &= ~VAR_1;
 VAR_10 = VAR_5 + VAR_6;
 if (VAR_10 > VAR_2)
  VAR_10 = VAR_2;
 VAR_7 -= VAR_5;
 do {
  pmd_t *VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5);
  if (!VAR_4)
   return -VAR_0;
  FUNC_0(VAR_3, VAR_11, VAR_5, VAR_10 - VAR_5, VAR_5 + VAR_7, VAR_8, VAR_9);
  VAR_5 = (VAR_5 + VAR_2) & VAR_1;
  VAR_4++;
 } while (VAR_5 < VAR_10);
 return 0;
}
