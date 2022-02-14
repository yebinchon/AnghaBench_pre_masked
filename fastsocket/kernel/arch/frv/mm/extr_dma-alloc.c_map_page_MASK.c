
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int * FUNC_1 (unsigned long) ;
 int * FUNC_2 (int *,unsigned long) ;
 int * FUNC_3 (int *,unsigned long) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_2, unsigned long VAR_3, pgprot_t VAR_4)
{
 pgd_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;
 pte_t *VAR_8;
 int VAR_9 = -VAR_0;


 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = FUNC_4(VAR_5, VAR_2);
 VAR_7 = FUNC_2(VAR_6, VAR_2);


 VAR_8 = FUNC_3(VAR_7, VAR_2);
 if (VAR_8 != 0) {
  VAR_9 = 0;
  FUNC_5(VAR_8, FUNC_0(VAR_3 & VAR_1, VAR_4));
 }

 return VAR_9;
}
