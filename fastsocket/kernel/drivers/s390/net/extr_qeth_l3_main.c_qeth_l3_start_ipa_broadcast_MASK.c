
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ broadcast_capable; } ;
struct qeth_card {TYPE_3__* dev; TYPE_2__ info; TYPE_1__* gdev; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_8 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct qeth_card*,int ) ;
 int FUNC_5 (struct qeth_card*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_9)
{
 int VAR_10;

 FUNC_1(VAR_8, 3, "stbrdcst");
 VAR_9->info.broadcast_capable = 0;
 if (!FUNC_4(VAR_9, VAR_5)) {
  FUNC_2(&VAR_9->gdev->dev,
   "Broadcast not supported on %s\n",
   FUNC_0(VAR_9));
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_10 = FUNC_5(VAR_9, VAR_5,
       VAR_4, 0);
 if (VAR_10) {
  FUNC_3(&VAR_9->gdev->dev, "Enabling broadcast filtering for "
   "%s failed\n", FUNC_0(VAR_9));
  goto out;
 }

 VAR_10 = FUNC_5(VAR_9, VAR_5,
       VAR_2, 1);
 if (VAR_10) {
  FUNC_3(&VAR_9->gdev->dev,
   "Setting up broadcast filtering for %s failed\n",
   FUNC_0(VAR_9));
  goto out;
 }
 VAR_9->info.broadcast_capable = VAR_7;
 FUNC_2(&VAR_9->gdev->dev, "Broadcast enabled\n");
 VAR_10 = FUNC_5(VAR_9, VAR_5,
       VAR_3, 1);
 if (VAR_10) {
  FUNC_3(&VAR_9->gdev->dev, "Setting up broadcast echo "
   "filtering for %s failed\n", FUNC_0(VAR_9));
  goto out;
 }
 VAR_9->info.broadcast_capable = VAR_6;
out:
 if (VAR_9->info.broadcast_capable)
  VAR_9->dev->flags |= VAR_1;
 else
  VAR_9->dev->flags &= ~VAR_1;
 return VAR_10;
}
