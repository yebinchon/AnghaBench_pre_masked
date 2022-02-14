
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int bit_width; int port; } ;
struct TYPE_6__ {int reg; } ;
struct TYPE_8__ {TYPE_2__ io; TYPE_1__ msr; } ;
struct drv_cmd {int type; int val; struct cpumask const* mask; TYPE_3__ addr; } ;
struct cpumask {int dummy; } ;
struct TYPE_9__ {int bit_width; int address; } ;
struct acpi_processor_performance {TYPE_4__ control_register; } ;
struct TYPE_10__ {int cpu_feature; struct acpi_processor_performance* acpi_data; } ;


 int VAR_0 ;


 int FUNC_0 (struct cpumask const*) ;
 int FUNC_1 (struct cpumask const*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct drv_cmd*) ;
 TYPE_5__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static u32 FUNC_6(const struct cpumask *VAR_2)
{
 struct acpi_processor_performance *VAR_3;
 struct drv_cmd VAR_4;

 if (FUNC_5(FUNC_0(VAR_2)))
  return 0;

 switch (FUNC_4(VAR_1, FUNC_1(VAR_2))->cpu_feature) {
 case 129:
  VAR_4.type = 129;
  VAR_4.addr.msr.reg = VAR_0;
  break;
 case 128:
  VAR_4.type = 128;
  VAR_3 = FUNC_4(VAR_1, FUNC_1(VAR_2))->acpi_data;
  VAR_4.addr.io.port = VAR_3->control_register.address;
  VAR_4.addr.io.bit_width = VAR_3->control_register.bit_width;
  break;
 default:
  return 0;
 }

 VAR_4.mask = VAR_2;
 FUNC_3(&VAR_4);

 FUNC_2("get_cur_val = %u\n", VAR_4.val);

 return VAR_4.val;
}
