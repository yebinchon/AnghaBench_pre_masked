
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct vmxnet3_adapter {scalar_t__ vlan_grp; TYPE_3__* shared; } ;
struct TYPE_4__ {int * vfTable; } ;
struct TYPE_5__ {TYPE_1__ rxFilterConf; } ;
struct TYPE_6__ {TYPE_2__ devRead; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct vmxnet3_adapter *VAR_1)
{
 if (VAR_1->vlan_grp) {
  u16 VAR_2;
  u32 *VAR_3 = VAR_1->shared->devRead.rxFilterConf.vfTable;
  bool VAR_4 = 0;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   if (FUNC_1(VAR_1->vlan_grp, VAR_2)) {
    FUNC_0(VAR_3, VAR_2);
    VAR_4 = 1;
   }
  }
  if (VAR_4) {

   FUNC_0(VAR_3, 0);
  }
 }
}
