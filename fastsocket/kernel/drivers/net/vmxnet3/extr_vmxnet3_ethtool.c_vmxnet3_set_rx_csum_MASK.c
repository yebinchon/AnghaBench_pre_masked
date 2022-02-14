
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vmxnet3_adapter {scalar_t__ rxcsum; int cmd_lock; TYPE_1__* shared; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int uptFeatures; } ;
struct TYPE_6__ {TYPE_2__ misc; } ;
struct TYPE_4__ {TYPE_3__ devRead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int ) ;
 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_3, u32 VAR_4)
{
 struct vmxnet3_adapter *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6;

 if (VAR_5->rxcsum != VAR_4) {
  VAR_5->rxcsum = VAR_4;
  if (FUNC_2(VAR_3)) {
   if (VAR_4)
    VAR_5->shared->devRead.misc.uptFeatures |=
    VAR_0;
   else
    VAR_5->shared->devRead.misc.uptFeatures &=
    ~VAR_0;

   FUNC_3(&VAR_5->cmd_lock, VAR_6);
   FUNC_0(VAR_5, VAR_2,
            VAR_1);
   FUNC_4(&VAR_5->cmd_lock, VAR_6);
  }
 }
 return 0;
}
