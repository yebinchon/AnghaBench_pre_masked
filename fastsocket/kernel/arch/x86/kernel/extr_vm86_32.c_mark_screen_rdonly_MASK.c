
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int mmap_sem; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (struct mm_struct*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int * FUNC_6 (struct mm_struct*,int *,int,int **) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int * FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct mm_struct*,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct mm_struct *VAR_0)
{
 pgd_t *VAR_1;
 pud_t *VAR_2;
 pmd_t *VAR_3;
 pte_t *VAR_4;
 spinlock_t *VAR_5;
 int VAR_6;

 FUNC_0(&VAR_0->mmap_sem);
 VAR_1 = FUNC_3(VAR_0, 0xA0000);
 if (FUNC_2(VAR_1))
  goto out;
 VAR_2 = FUNC_11(VAR_1, 0xA0000);
 if (FUNC_10(VAR_2))
  goto out;
 VAR_3 = FUNC_5(VAR_2, 0xA0000);
 FUNC_13(VAR_0, VAR_3);
 if (FUNC_4(VAR_3))
  goto out;
 VAR_4 = FUNC_6(VAR_0, VAR_3, 0xA0000, &VAR_5);
 for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
  if (FUNC_7(*VAR_4))
   FUNC_12(VAR_4, FUNC_9(*VAR_4));
  VAR_4++;
 }
 FUNC_8(VAR_4, VAR_5);
out:
 FUNC_14(&VAR_0->mmap_sem);
 FUNC_1();
}
