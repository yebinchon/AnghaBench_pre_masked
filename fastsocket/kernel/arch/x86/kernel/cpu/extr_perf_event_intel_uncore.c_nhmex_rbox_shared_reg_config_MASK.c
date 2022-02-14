
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_uncore_extra_reg {int lock; int config; } ;
struct intel_uncore_box {struct intel_uncore_extra_reg* shared_regs; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u64 FUNC_2(struct intel_uncore_box *VAR_0, int VAR_1)
{
 struct intel_uncore_extra_reg *VAR_2;
 unsigned long VAR_3;
 u64 VAR_4;

 VAR_2 = &VAR_0->shared_regs[VAR_1];

 FUNC_0(&VAR_2->lock, VAR_3);
 VAR_4 = VAR_2->config;
 FUNC_1(&VAR_2->lock, VAR_3);

 return VAR_4;
}
