
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg_cpu {int dummy; } ;
typedef int pte_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_4(struct lg_cpu *VAR_2,
    pgd_t VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = FUNC_2(VAR_3) << VAR_0;

 FUNC_0(!(FUNC_1(VAR_3) & VAR_1));
 return VAR_5 + FUNC_3(VAR_4) * sizeof(pte_t);
}
