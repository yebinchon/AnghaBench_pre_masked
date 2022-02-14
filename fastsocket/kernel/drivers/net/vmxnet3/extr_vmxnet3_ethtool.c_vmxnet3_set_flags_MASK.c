
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vmxnet3_adapter {int lro; TYPE_3__* shared; } ;
struct net_device {int features; } ;
struct TYPE_4__ {int uptFeatures; } ;
struct TYPE_5__ {TYPE_1__ misc; } ;
struct TYPE_6__ {TYPE_2__ devRead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct vmxnet3_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_5, u32 VAR_6) {
 struct vmxnet3_adapter *VAR_7 = FUNC_2(VAR_5);
 u8 VAR_8 = (VAR_6 & VAR_0) == 0 ? 0 : 1;
 u8 VAR_9 = (VAR_5->features & VAR_1) == 0 ? 0 : 1;

 if (VAR_8 ^ VAR_9) {

  VAR_5->features ^= VAR_1;


  VAR_7->lro = VAR_8;


  if (VAR_8)
   VAR_7->shared->devRead.misc.uptFeatures |=
      FUNC_1(VAR_2);
  else
   VAR_7->shared->devRead.misc.uptFeatures &=
      FUNC_1(~VAR_2);
  FUNC_0(VAR_7, VAR_4,
           VAR_3);
 }
 return 0;
}
