
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int HardReset; } ;
union BusLogic_ControlRegister {scalar_t__ All; TYPE_1__ cr; } ;
struct BusLogic_HostAdapter {scalar_t__ IO_Address; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct BusLogic_HostAdapter *VAR_1)
{
 union BusLogic_ControlRegister VAR_2;
 VAR_2.All = 0;
 VAR_2.cr.HardReset = 1;
 FUNC_0(VAR_2.All, VAR_1->IO_Address + VAR_0);
}
