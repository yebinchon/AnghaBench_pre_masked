
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; scalar_t__ link_type; int unique_id; int initial_mtu; int guestlan; } ;
struct TYPE_11__ {scalar_t__* hsuid; } ;
struct qeth_card {TYPE_4__* dev; int napi; TYPE_3__* gdev; TYPE_2__ info; TYPE_1__ options; } ;
struct TYPE_14__ {int dev_id; int features; int gso_max_size; int priv_flags; int mtu; int watchdog_timeo; struct qeth_card* ml_priv; int perm_addr; int * netdev_ops; int flags; } ;
struct TYPE_13__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int VAR_15 ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ,char*,int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 int VAR_16 ;
 int FUNC_5 (int ,scalar_t__*,int) ;
 int FUNC_6 (TYPE_4__*,int *,int ,int ) ;
 int VAR_17 ;
 int FUNC_7 (struct qeth_card*) ;
 int FUNC_8 (struct qeth_card*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_10(struct qeth_card *VAR_21)
{
 if (VAR_21->info.type == VAR_9 ||
     VAR_21->info.type == VAR_10) {
  if ((VAR_21->info.link_type == VAR_12) ||
      (VAR_21->info.link_type == VAR_11)) {



   if (!VAR_21->dev)
    return -VAR_0;
   VAR_21->dev->netdev_ops = &VAR_18;
  } else {
   VAR_21->dev = FUNC_2(0);
   if (!VAR_21->dev)
    return -VAR_0;
   VAR_21->dev->netdev_ops = &VAR_19;


   FUNC_7(VAR_21);
   if (!(VAR_21->info.unique_id & VAR_15))
    VAR_21->dev->dev_id = VAR_21->info.unique_id &
        0xffff;
   if (!VAR_21->info.guestlan)
    VAR_21->dev->features |= VAR_3;
  }
 } else if (VAR_21->info.type == VAR_8) {
  VAR_21->dev = FUNC_3(0, "hsi%d", VAR_16);
  if (!VAR_21->dev)
   return -VAR_0;
  VAR_21->dev->flags |= VAR_1;
  VAR_21->dev->netdev_ops = &VAR_18;
  FUNC_8(VAR_21);
  if (VAR_21->options.hsuid[0])
   FUNC_5(VAR_21->dev->perm_addr, VAR_21->options.hsuid, 9);
 } else
  return -VAR_0;

 VAR_21->dev->ml_priv = VAR_21;
 VAR_21->dev->watchdog_timeo = VAR_14;
 VAR_21->dev->mtu = VAR_21->info.initial_mtu;
 FUNC_0(VAR_21->dev, &VAR_17);
 VAR_21->dev->features |= VAR_6 |
    VAR_5 |
    VAR_4;
 VAR_21->dev->priv_flags &= ~VAR_2;
 VAR_21->dev->gso_max_size = 15 * VAR_7;

 FUNC_1(VAR_21->dev, &VAR_21->gdev->dev);
 FUNC_6(VAR_21->dev, &VAR_21->napi, VAR_20, VAR_13);
 return FUNC_9(VAR_21->dev);
}
