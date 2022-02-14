
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct vmxnet3_adapter {int cmd_lock; TYPE_3__* shared; } ;
struct net_device {int flags; } ;
struct TYPE_4__ {int * vfTable; } ;
struct TYPE_5__ {TYPE_1__ rxFilterConf; } ;
struct TYPE_6__ {TYPE_2__ devRead; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vmxnet3_adapter*,int ,int ) ;
 struct vmxnet3_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_3, u16 VAR_4)
{
 struct vmxnet3_adapter *VAR_5 = FUNC_2(VAR_3);

 if (!(VAR_3->flags & VAR_0)) {
  u32 *VAR_6 = VAR_5->shared->devRead.rxFilterConf.vfTable;
  unsigned long VAR_7;

  FUNC_0(VAR_6, VAR_4);
  FUNC_3(&VAR_5->cmd_lock, VAR_7);
  FUNC_1(VAR_5, VAR_2,
           VAR_1);
  FUNC_4(&VAR_5->cmd_lock, VAR_7);
 }

}
