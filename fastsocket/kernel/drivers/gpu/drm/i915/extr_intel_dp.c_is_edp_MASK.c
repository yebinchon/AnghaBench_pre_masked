
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct intel_digital_port {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 struct intel_digital_port* FUNC_0 (struct intel_dp*) ;

__attribute__((used)) static bool FUNC_1(struct intel_dp *VAR_1)
{
 struct intel_digital_port *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->base.type == VAR_0;
}
