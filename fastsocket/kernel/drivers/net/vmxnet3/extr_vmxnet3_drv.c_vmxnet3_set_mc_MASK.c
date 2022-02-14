
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vmxnet3_adapter {int cmd_lock; TYPE_2__* shared; } ;
struct net_device {int flags; } ;
struct Vmxnet3_RxFilterConf {int rxMode; scalar_t__ mfTablePA; scalar_t__ mfTableLen; } ;
struct TYPE_3__ {struct Vmxnet3_RxFilterConf rxFilterConf; } ;
struct TYPE_4__ {TYPE_1__ devRead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 struct vmxnet3_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (struct net_device*) ;

__attribute__((used)) static void
FUNC_13(struct net_device *VAR_12)
{
 struct vmxnet3_adapter *VAR_13 = FUNC_8(VAR_12);
 unsigned long VAR_14;
 struct Vmxnet3_RxFilterConf *VAR_15 =
     &VAR_13->shared->devRead.rxFilterConf;
 u8 *VAR_16 = ((void*)0);
 u32 VAR_17 = VAR_11;

 if (VAR_12->flags & VAR_3)
  VAR_17 |= VAR_10;

 if (VAR_12->flags & VAR_2)
  VAR_17 |= VAR_8;

 if (VAR_12->flags & VAR_1)
  VAR_17 |= VAR_7;
 else
  if (!FUNC_7(VAR_12)) {
   VAR_16 = FUNC_12(VAR_12);
   if (VAR_16) {
    VAR_17 |= VAR_9;
    VAR_15->mfTableLen = FUNC_1(
     FUNC_6(VAR_12) * VAR_0);
    VAR_15->mfTablePA = FUNC_3(FUNC_11(
          VAR_16));
   } else {
    FUNC_5(VAR_12, "failed to copy mcast list"
         ", setting ALL_MULTI\n");
    VAR_17 |= VAR_7;
   }
  }


 if (!(VAR_17 & VAR_9)) {
  VAR_15->mfTableLen = 0;
  VAR_15->mfTablePA = 0;
 }

 FUNC_9(&VAR_13->cmd_lock, VAR_14);
 if (VAR_17 != VAR_15->rxMode) {
  VAR_15->rxMode = FUNC_2(VAR_17);
  FUNC_0(VAR_13, VAR_6,
           VAR_5);
 }

 FUNC_0(VAR_13, VAR_6,
          VAR_4);
 FUNC_10(&VAR_13->cmd_lock, VAR_14);

 FUNC_4(VAR_16);
}
