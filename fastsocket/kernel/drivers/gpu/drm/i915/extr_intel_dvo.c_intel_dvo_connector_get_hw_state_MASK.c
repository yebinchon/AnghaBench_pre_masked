
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev_ops; } ;
struct intel_dvo {TYPE_2__ dev; } ;
struct intel_connector {int base; } ;
struct TYPE_3__ {int (* get_hw_state ) (TYPE_2__*) ;} ;


 struct intel_dvo* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_2(struct intel_connector *VAR_0)
{
 struct intel_dvo *VAR_1 = FUNC_0(&VAR_0->base);

 return VAR_1->dev.dev_ops->get_hw_state(&VAR_1->dev);
}
