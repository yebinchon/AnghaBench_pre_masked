
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_adapter {int rx_pvid; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_adapter *VAR_1,
          struct qlcnic_cmd_args *VAR_2)
{
 VAR_1->rx_pvid = (VAR_2->rsp.arg[1] >> 16) & 0xffff;
 VAR_1->flags &= ~VAR_0;
 return 0;
}
