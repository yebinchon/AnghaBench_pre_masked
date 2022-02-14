
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int bit_width; int port; } ;
struct TYPE_4__ {int reg; } ;
struct TYPE_5__ {TYPE_3__ io; TYPE_1__ msr; } ;
struct drv_cmd {int type; TYPE_2__ addr; int val; } ;
typedef int acpi_io_address ;




 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct drv_cmd *VAR_1 = VAR_0;
 u32 VAR_2;

 switch (VAR_1->type) {
 case 129:
  FUNC_1(VAR_1->addr.msr.reg, VAR_1->val, VAR_2);
  break;
 case 128:
  FUNC_0((acpi_io_address)VAR_1->addr.io.port,
    &VAR_1->val,
    (u32)VAR_1->addr.io.bit_width);
  break;
 default:
  break;
 }
}
