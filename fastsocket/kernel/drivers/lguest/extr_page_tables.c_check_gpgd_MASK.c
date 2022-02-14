
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg_cpu {TYPE_1__* lg; } ;
typedef int pgd_t ;
struct TYPE_2__ {scalar_t__ pfn_limit; } ;


 int VAR_0 ;
 int FUNC_0 (struct lg_cpu*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct lg_cpu *VAR_1, pgd_t VAR_2)
{
 if ((FUNC_1(VAR_2) & ~VAR_0) ||
    (FUNC_2(VAR_2) >= VAR_1->lg->pfn_limit))
  FUNC_0(VAR_1, "bad page directory entry");
}
