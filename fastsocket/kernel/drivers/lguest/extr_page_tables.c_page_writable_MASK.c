
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg_cpu {int cpu_pgd; } ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int * FUNC_3 (struct lg_cpu*,int ,unsigned long) ;
 int * FUNC_4 (struct lg_cpu*,int ,unsigned long) ;
 int * FUNC_5 (struct lg_cpu*,int ,unsigned long) ;

__attribute__((used)) static bool FUNC_6(struct lg_cpu *VAR_2, unsigned long VAR_3)
{
 pgd_t *VAR_4;
 unsigned long VAR_5;





 VAR_4 = FUNC_3(VAR_2, VAR_2->cpu_pgd, VAR_3);
 if (!(FUNC_0(*VAR_4) & VAR_0))
  return 0;
 VAR_5 = FUNC_2(*(FUNC_5(VAR_2, *VAR_4, VAR_3)));

 return (VAR_5 & (VAR_0|VAR_1)) == (VAR_0|VAR_1);
}
