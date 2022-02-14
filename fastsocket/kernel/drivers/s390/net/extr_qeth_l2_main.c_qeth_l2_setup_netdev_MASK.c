
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int type; int broadcast_capable; int initial_mtu; } ;
struct qeth_card {TYPE_3__* dev; int napi; TYPE_2__* gdev; TYPE_1__ info; } ;
struct TYPE_10__ {int features; int * netdev_ops; int mtu; int watchdog_timeo; struct qeth_card* ml_priv; int flags; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_2 (int ) ;
 void* FUNC_3 (int ,char*,int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_3__*,int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(struct qeth_card *VAR_10)
{
 switch (VAR_10->info.type) {
 case 129:
  VAR_10->dev = FUNC_3(0, "hsi%d", VAR_5);
  break;
 case 128:
  VAR_10->dev = FUNC_3(0, "osn%d", VAR_5);
  VAR_10->dev->flags |= VAR_1;
  break;
 default:
  VAR_10->dev = FUNC_2(0);
 }

 if (!VAR_10->dev)
  return -VAR_0;

 VAR_10->dev->ml_priv = VAR_10;
 VAR_10->dev->watchdog_timeo = VAR_4;
 VAR_10->dev->mtu = VAR_10->info.initial_mtu;
 VAR_10->dev->netdev_ops = &VAR_7;
 if (VAR_10->info.type != 128)
  FUNC_0(VAR_10->dev, &VAR_6);
 else
  FUNC_0(VAR_10->dev, &VAR_8);
 VAR_10->dev->features |= VAR_2;
 VAR_10->info.broadcast_capable = 1;
 FUNC_5(VAR_10);
 FUNC_1(VAR_10->dev, &VAR_10->gdev->dev);
 FUNC_4(VAR_10->dev, &VAR_10->napi, VAR_9, VAR_3);
 return FUNC_6(VAR_10->dev);
}
