
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pgprot_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long,int ,int) ;
 int FUNC_1 (struct mm_struct*,unsigned long,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mm_struct *VAR_3, pte_t * VAR_4, unsigned long VAR_5, unsigned long VAR_6,
 unsigned long VAR_7, pgprot_t VAR_8, int VAR_9)
{
 unsigned long VAR_10;

 VAR_5 &= ~VAR_1;
 VAR_10 = VAR_5 + VAR_6;
 if (VAR_10 > VAR_2)
  VAR_10 = VAR_2;
 do {
  FUNC_1(VAR_3, VAR_5, VAR_4, FUNC_0(VAR_7, VAR_8, VAR_9));
  VAR_5 += VAR_0;
  VAR_7 += VAR_0;
  VAR_4++;
 } while (VAR_5 < VAR_10);
}
