
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int type; int base; } ;
struct intel_dp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_dp* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_2(struct intel_encoder *VAR_2)
{
 struct intel_dp *VAR_3 = FUNC_0(&VAR_2->base);
 int VAR_4 = VAR_2->type;

 if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
  FUNC_1(VAR_3);
}
