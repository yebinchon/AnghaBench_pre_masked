
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int huge_pte_count; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mm_struct*,unsigned long,int *) ;
 scalar_t__ FUNC_1 (int ) ;

pte_t FUNC_2(struct mm_struct *VAR_3, unsigned long VAR_4,
         pte_t *VAR_5)
{
 pte_t VAR_6;
 int VAR_7;

 VAR_6 = *VAR_5;
 if (FUNC_1(VAR_6))
  VAR_3->context.huge_pte_count--;

 VAR_4 &= VAR_0;

 for (VAR_7 = 0; VAR_7 < (1 << VAR_1); VAR_7++) {
  FUNC_0(VAR_3, VAR_4, VAR_5);
  VAR_4 += VAR_2;
  VAR_5++;
 }

 return VAR_6;
}
