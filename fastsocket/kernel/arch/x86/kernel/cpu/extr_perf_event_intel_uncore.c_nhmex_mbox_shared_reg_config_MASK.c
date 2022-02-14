
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_uncore_extra_reg {int lock; int config; } ;
struct intel_uncore_box {struct intel_uncore_extra_reg* shared_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u64 FUNC_2(struct intel_uncore_box *VAR_1, int VAR_2)
{
 struct intel_uncore_extra_reg *VAR_3;
 unsigned long VAR_4;
 u64 VAR_5;

 if (VAR_2 < VAR_0)
  return VAR_1->shared_regs[VAR_2].config;

 VAR_3 = &VAR_1->shared_regs[VAR_0];
 FUNC_0(&VAR_3->lock, VAR_4);
 VAR_5 = VAR_3->config;
 FUNC_1(&VAR_3->lock, VAR_4);
 return VAR_5;
}
