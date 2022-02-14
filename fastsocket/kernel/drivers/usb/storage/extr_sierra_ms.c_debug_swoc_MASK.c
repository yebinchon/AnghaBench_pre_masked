
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swoc_info {int LinuxVer; int LinuxSKU; int rev; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct swoc_info *VAR_0)
{
 FUNC_0("SWIMS: SWoC Rev: %02d \n", VAR_0->rev);
 FUNC_0("SWIMS: Linux SKU: %04X \n", VAR_0->LinuxSKU);
 FUNC_0("SWIMS: Linux Version: %04X \n", VAR_0->LinuxVer);
}
