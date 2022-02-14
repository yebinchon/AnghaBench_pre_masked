
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int * pgd; } ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*,int *) ;
 int VAR_2 ;
 int FUNC_5 (struct mm_struct*,int *,int **) ;
 scalar_t__ FUNC_6 (int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

pgd_t *FUNC_9(struct mm_struct *VAR_3)
{
 pgd_t *VAR_4;
 pmd_t *VAR_5[VAR_1];

 VAR_4 = (pgd_t *)FUNC_0(VAR_0);

 if (VAR_4 == ((void*)0))
  goto out;

 VAR_3->pgd = VAR_4;

 if (FUNC_6(VAR_5) != 0)
  goto out_free_pgd;

 if (FUNC_3(VAR_3) != 0)
  goto out_free_pmds;






 FUNC_7(&VAR_2);

 FUNC_4(VAR_3, VAR_4);
 FUNC_5(VAR_3, VAR_4, VAR_5);

 FUNC_8(&VAR_2);

 return VAR_4;

out_free_pmds:
 FUNC_2(VAR_5);
out_free_pgd:
 FUNC_1((unsigned long)VAR_4);
out:
 return ((void*)0);
}
