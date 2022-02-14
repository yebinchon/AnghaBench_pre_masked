
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int FUNC_0 (unsigned long,int ) ;
 int * FUNC_1 (int *,unsigned long) ;
 int * FUNC_2 (int *,int *,unsigned long) ;
 int * FUNC_3 (int *,int *,int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_1, unsigned long VAR_2,
     pgprot_t VAR_3)
{
 pgd_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6;
 pte_t *VAR_7;

 VAR_4 = FUNC_1(&VAR_0, VAR_1);
 VAR_5 = FUNC_5(&VAR_0, VAR_4, VAR_1);
 if (!VAR_5)
  return -1;
 VAR_6 = FUNC_2(&VAR_0, VAR_5, VAR_1);
 if (!VAR_6)
  return -1;
 VAR_7 = FUNC_3(&VAR_0, ((void*)0), VAR_6, VAR_1);
 if (!VAR_7)
  return -1;
 FUNC_6(&VAR_0, VAR_1, VAR_7, FUNC_0(VAR_2, VAR_3));
 FUNC_4(VAR_7);
 return 0;
}
