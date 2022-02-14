
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_3__ {int write_statusreg_cmd; int write_enable_bits; } ;
struct TYPE_4__ {TYPE_1__ fdt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int) ;

int FUNC_2(struct qlcnic_adapter *VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 VAR_8 = VAR_6->ahw->fdt.write_statusreg_cmd;
 FUNC_1(VAR_6, VAR_1,
         (VAR_3 | VAR_8));
 FUNC_1(VAR_6, VAR_5,
         VAR_6->ahw->fdt.write_enable_bits);
 FUNC_1(VAR_6, VAR_2,
         VAR_4);
 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  return -VAR_0;

 return 0;
}
