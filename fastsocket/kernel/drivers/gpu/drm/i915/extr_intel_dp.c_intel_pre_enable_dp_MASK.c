
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_dp {int dummy; } ;


 struct intel_dp* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_dp*) ;
 scalar_t__ FUNC_2 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_3(struct intel_encoder *VAR_0)
{
 struct intel_dp *VAR_1 = FUNC_0(&VAR_0->base);

 if (FUNC_2(VAR_1))
  FUNC_1(VAR_1);
}
