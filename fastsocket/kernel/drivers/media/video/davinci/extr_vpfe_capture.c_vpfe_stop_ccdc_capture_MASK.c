
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_device {scalar_t__ started; } ;
struct TYPE_3__ {int (* enable_out_to_sdram ) (int ) ;int (* enable ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vpfe_device *VAR_1)
{
 VAR_1->started = 0;
 VAR_0->hw_ops.enable(0);
 if (VAR_0->hw_ops.enable_out_to_sdram)
  VAR_0->hw_ops.enable_out_to_sdram(0);
}
