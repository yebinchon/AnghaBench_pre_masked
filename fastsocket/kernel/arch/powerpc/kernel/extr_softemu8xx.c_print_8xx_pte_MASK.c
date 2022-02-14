
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 int * FUNC_0 (struct mm_struct*,unsigned long) ;
 int * FUNC_1 (int ,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct mm_struct *VAR_2, unsigned long VAR_3)
{
 pgd_t *VAR_4;
 pmd_t *VAR_5;
 pte_t *VAR_6;

 FUNC_3(" pte @ 0x%8lx: ", VAR_3);
 VAR_4 = FUNC_0(VAR_2, VAR_3 & VAR_0);
 if (VAR_4) {
  VAR_5 = FUNC_1(FUNC_6(VAR_4, VAR_3 & VAR_0),
                   VAR_3 & VAR_0);
  if (VAR_5 && FUNC_2(*VAR_5)) {
   VAR_6 = FUNC_4(VAR_5, VAR_3 & VAR_0);
   if (VAR_6) {
    FUNC_3(" (0x%08lx)->(0x%08lx)->0x%08lx\n",
            (long)VAR_4, (long)VAR_6, (long)FUNC_5(*VAR_6));

    FUNC_3(" RPN: %05lx PP: %lx SPS: %lx SH: %lx "
           "CI: %lx v: %lx\n",
           ((long)FUNC_5(*VAR_6))>>12,
           (((long)FUNC_5(*VAR_6))>>10)&3,
           (((long)FUNC_5(*VAR_6))>>3)&1,
           (((long)FUNC_5(*VAR_6))>>2)&1,
           (((long)FUNC_5(*VAR_6))>>1)&1,
           ((long)FUNC_5(*VAR_6))&1
           );

   }
   else {
    FUNC_3("no pte\n");
   }
  }
  else {
   FUNC_3("no pmd\n");
  }
 }
 else {
  FUNC_3("no pgd\n");
 }
}
