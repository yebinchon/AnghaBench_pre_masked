
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {int * pgd; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 unsigned int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static inline pmd_t *FUNC_9(pgd_t *VAR_1, unsigned long VAR_2)
{
 unsigned VAR_3 = FUNC_1(VAR_2);
 pgd_t *VAR_4;
 pud_t *VAR_5, *VAR_6;
 pmd_t *VAR_7, *VAR_8;

 VAR_1 += VAR_3;
 VAR_4 = VAR_0.pgd + VAR_3;

 if (!FUNC_2(*VAR_4))
  return ((void*)0);

 VAR_5 = FUNC_6(VAR_1, VAR_2);
 VAR_6 = FUNC_6(VAR_4, VAR_2);
 if (!FUNC_7(*VAR_6))
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_5, VAR_2);
 VAR_8 = FUNC_3(VAR_6, VAR_2);
 if (!FUNC_5(*VAR_8))
  return ((void*)0);

 if (!FUNC_5(*VAR_7))
  FUNC_8(VAR_7, *VAR_8);
 else {





  FUNC_0(FUNC_4(*VAR_7) != FUNC_4(*VAR_8));
  return ((void*)0);
 }

 return VAR_8;
}
