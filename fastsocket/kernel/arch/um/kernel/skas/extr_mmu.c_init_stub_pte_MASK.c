
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (struct mm_struct*,unsigned long) ;
 int * FUNC_3 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_4 (struct mm_struct*,int *) ;
 int * FUNC_5 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (struct mm_struct*,int *,unsigned long) ;
 int FUNC_8 (struct mm_struct*,int *) ;
 int FUNC_9 (unsigned long) ;

__attribute__((used)) static int FUNC_10(struct mm_struct *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4)
{
 pgd_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;
 pte_t *VAR_8;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 VAR_6 = FUNC_7(VAR_2, VAR_5, VAR_3);
 if (!VAR_6)
  goto out;

 VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_3);
 if (!VAR_7)
  goto out_pmd;

 VAR_8 = FUNC_5(VAR_2, VAR_7, VAR_3);
 if (!VAR_8)
  goto out_pte;

 *VAR_8 = FUNC_1(FUNC_9(VAR_4), FUNC_0(VAR_1));
 *VAR_8 = FUNC_6(*VAR_8);
 return 0;

 out_pte:
 FUNC_4(VAR_2, VAR_7);
 out_pmd:
 FUNC_8(VAR_2, VAR_6);
 out:
 return -VAR_0;
}
