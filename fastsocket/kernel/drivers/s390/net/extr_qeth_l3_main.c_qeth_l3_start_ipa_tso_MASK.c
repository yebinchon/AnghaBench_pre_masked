
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ large_send; } ;
struct qeth_card {TYPE_3__* dev; TYPE_2__ options; TYPE_1__* gdev; } ;
struct TYPE_6__ {int features; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct qeth_card*,int ) ;
 int FUNC_5 (struct qeth_card*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_8)
{
 int VAR_9;

 FUNC_1(VAR_7, 3, "sttso");

 if (!FUNC_4(VAR_8, VAR_2)) {
  FUNC_2(&VAR_8->gdev->dev,
   "Outbound TSO not supported on %s\n",
   FUNC_0(VAR_8));
  VAR_9 = -VAR_0;
 } else {
  VAR_9 = FUNC_5(VAR_8, VAR_2,
      VAR_1, 0);
  if (VAR_9)
   FUNC_3(&VAR_8->gdev->dev, "Starting outbound TCP "
    "segmentation offload for %s failed\n",
    FUNC_0(VAR_8));
  else
   FUNC_2(&VAR_8->gdev->dev,
    "Outbound TSO enabled\n");
 }
 if (VAR_9 && (VAR_8->options.large_send == VAR_6)) {
  VAR_8->options.large_send = VAR_5;
  VAR_8->dev->features &= ~(VAR_4 | VAR_3);
 }
 return VAR_9;
}
