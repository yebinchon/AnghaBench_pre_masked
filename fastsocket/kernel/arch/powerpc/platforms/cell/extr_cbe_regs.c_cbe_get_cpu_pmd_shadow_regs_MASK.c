
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cbe_pmd_shadow_regs {int dummy; } ;
struct cbe_regs_map {struct cbe_pmd_shadow_regs pmd_shadow_regs; } ;
struct TYPE_2__ {struct cbe_regs_map* regs; } ;


 TYPE_1__* VAR_0 ;

struct cbe_pmd_shadow_regs *FUNC_0(int VAR_1)
{
 struct cbe_regs_map *VAR_2 = VAR_0[VAR_1].regs;
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 return &VAR_2->pmd_shadow_regs;
}
