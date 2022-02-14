
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int bit_width; int port; } ;
struct TYPE_5__ {int reg; } ;
struct TYPE_6__ {TYPE_1__ io; TYPE_2__ msr; } ;
struct drv_cmd {int type; int val; TYPE_3__ addr; } ;
typedef int acpi_io_address ;


 int VAR_0 ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct drv_cmd *VAR_2 = VAR_1;
 u32 VAR_3, VAR_4;

 switch (VAR_2->type) {
 case 129:
  FUNC_1(VAR_2->addr.msr.reg, VAR_3, VAR_4);
  VAR_3 = (VAR_3 & ~VAR_0) | (VAR_2->val & VAR_0);
  FUNC_2(VAR_2->addr.msr.reg, VAR_3, VAR_4);
  break;
 case 128:
  FUNC_0((acpi_io_address)VAR_2->addr.io.port,
    VAR_2->val,
    (u32)VAR_2->addr.io.bit_width);
  break;
 default:
  break;
 }
}
