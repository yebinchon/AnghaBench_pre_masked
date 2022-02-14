
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int * FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;

__attribute__((used)) static void FUNC_17(unsigned long VAR_1)
{
 pgd_t *VAR_2 = FUNC_0(FUNC_16() & VAR_0);
 pgd_t *VAR_3 = VAR_2 + FUNC_2(VAR_1);
 pud_t *VAR_4;
 pmd_t *VAR_5;
 pte_t *VAR_6;

 if (FUNC_1(VAR_3))
  goto bad;

 FUNC_9("PGD %lx ", FUNC_4(*VAR_3));

 if (!FUNC_3(*VAR_3))
  goto out;

 VAR_4 = FUNC_13(VAR_3, VAR_1);
 if (FUNC_1(VAR_4))
  goto bad;

 FUNC_9("PUD %lx ", FUNC_15(*VAR_4));
 if (!FUNC_14(*VAR_4) || FUNC_12(*VAR_4))
  goto out;

 VAR_5 = FUNC_6(VAR_4, VAR_1);
 if (FUNC_1(VAR_5))
  goto bad;

 FUNC_9("PMD %lx ", FUNC_8(*VAR_5));
 if (!FUNC_7(*VAR_5) || FUNC_5(*VAR_5))
  goto out;

 VAR_6 = FUNC_10(VAR_5, VAR_1);
 if (FUNC_1(VAR_6))
  goto bad;

 FUNC_9("PTE %lx", FUNC_11(*VAR_6));
out:
 FUNC_9("\n");
 return;
bad:
 FUNC_9("BAD\n");
}
