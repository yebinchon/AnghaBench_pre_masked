
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct qeth_rx {int dummy; } ;
struct TYPE_11__ {scalar_t__ type; scalar_t__ hwtrap; } ;
struct qeth_card {int state; int lan_online; int discipline_mutex; int conf_mutex; TYPE_3__* dev; TYPE_2__ info; TYPE_1__* gdev; int rx; } ;
struct TYPE_13__ {int kobj; } ;
struct ccwgroup_device {TYPE_8__ dev; } ;
typedef enum qeth_card_states { ____Placeholder_qeth_card_states } qeth_card_states ;
struct TYPE_12__ {int * dev_addr; } ;
struct TYPE_10__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct qeth_card*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int ,int,struct qeth_card**,int) ;
 int FUNC_5 (int ,int,char*) ;
 int FUNC_6 (int ,int,char*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct qeth_card* FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (struct qeth_card*) ;
 scalar_t__ FUNC_21 (struct qeth_card*,int ) ;
 int FUNC_22 (struct qeth_card*) ;
 scalar_t__ FUNC_23 (struct qeth_card*,int ) ;
 int FUNC_24 (struct qeth_card*) ;
 int FUNC_25 (struct qeth_card*,int *) ;
 int FUNC_26 (TYPE_3__*) ;
 scalar_t__ FUNC_27 (struct qeth_card*) ;
 int FUNC_28 (struct qeth_card*,int ) ;
 int FUNC_29 (struct qeth_card*) ;
 int FUNC_30 (struct qeth_card*) ;
 int FUNC_31 (struct qeth_card*,int ) ;
 int FUNC_32 (struct qeth_card*,int,int ) ;
 int FUNC_33 () ;
 int FUNC_34 () ;

__attribute__((used)) static int FUNC_35(struct ccwgroup_device *VAR_14, int VAR_15)
{
 struct qeth_card *VAR_16 = FUNC_10(&VAR_14->dev);
 int VAR_17 = 0;
 enum qeth_card_states VAR_18;

 FUNC_0(!VAR_16);
 FUNC_15(&VAR_16->discipline_mutex);
 FUNC_15(&VAR_16->conf_mutex);
 FUNC_5(VAR_13, 2, "setonlin");
 FUNC_4(VAR_13, 2, &VAR_16, sizeof(void *));

 VAR_18 = VAR_16->state;
 VAR_17 = FUNC_9(FUNC_2(VAR_16));
 if (VAR_17) {
  FUNC_6(VAR_13, 2, "1err%d", VAR_17);
  VAR_17 = -VAR_4;
  goto out;
 }
 VAR_17 = FUNC_9(FUNC_3(VAR_16));
 if (VAR_17) {
  FUNC_6(VAR_13, 2, "1err%d", VAR_17);
  VAR_17 = -VAR_4;
  goto out;
 }
 VAR_17 = FUNC_9(FUNC_1(VAR_16));
 if (VAR_17) {
  FUNC_6(VAR_13, 2, "1err%d", VAR_17);
  VAR_17 = -VAR_4;
  goto out;
 }

 VAR_17 = FUNC_20(VAR_16);
 if (VAR_17) {
  FUNC_6(VAR_13, 2, "2err%d", VAR_17);
  goto out_remove;
 }

 if (!VAR_16->dev && FUNC_27(VAR_16))
  goto out_remove;

 if (VAR_16->info.type != VAR_9)
  FUNC_25(VAR_16, &VAR_16->dev->dev_addr[0]);

 if (FUNC_23(VAR_16, VAR_11)) {
  if (VAR_16->info.hwtrap &&
      FUNC_21(VAR_16, VAR_12))
   VAR_16->info.hwtrap = 0;
 } else
  VAR_16->info.hwtrap = 0;

 VAR_16->state = VAR_1;
 FUNC_14(&VAR_16->rx, 0, sizeof(struct qeth_rx));
 FUNC_29(VAR_16);


 FUNC_5(VAR_13, 2, "softsetp");

 VAR_17 = FUNC_30(VAR_16);
 if (VAR_17) {
  FUNC_6(VAR_13, 2, "1err%d", VAR_17);
  if (VAR_17 == 0xe080) {
   FUNC_12(&VAR_16->gdev->dev,
    "The LAN is offline\n");
   VAR_16->lan_online = 0;
   goto contin;
  }
  VAR_17 = -VAR_5;
  goto out_remove;
 } else
  VAR_16->lan_online = 1;

contin:
 if ((VAR_16->info.type == VAR_7) ||
     (VAR_16->info.type == VAR_10)) {

  VAR_17 = FUNC_31(VAR_16, 0);
  if (VAR_17) {
   VAR_17 = -VAR_5;
   goto out_remove;
  }
 }

 if (VAR_16->info.type != VAR_9 &&
     VAR_16->info.type != VAR_8)
  FUNC_24(VAR_16);

 FUNC_19(VAR_16->dev);

 VAR_17 = FUNC_22(VAR_16);
 if (VAR_17) {
  FUNC_6(VAR_13, 2, "6err%d", VAR_17);
  goto out_remove;
 }
 VAR_16->state = VAR_3;
 if (VAR_16->lan_online)
  FUNC_18(VAR_16->dev);
 else
  FUNC_17(VAR_16->dev);

 FUNC_32(VAR_16, 0xffffffff, 0);
 if (VAR_18 == VAR_2) {
  if (VAR_15 &&
      VAR_16->info.type != VAR_9) {
   FUNC_7(VAR_16->dev);
  } else {
   FUNC_33();
   FUNC_11(VAR_16->dev);
   FUNC_34();
  }

  FUNC_26(VAR_16->dev);
 }

 FUNC_13(&VAR_14->dev.kobj, VAR_6);
out:
 FUNC_16(&VAR_16->conf_mutex);
 FUNC_16(&VAR_16->discipline_mutex);
 return VAR_17;
out_remove:
 FUNC_28(VAR_16, 0);
 FUNC_8(FUNC_1(VAR_16));
 FUNC_8(FUNC_3(VAR_16));
 FUNC_8(FUNC_2(VAR_16));
 if (VAR_18 == VAR_2)
  VAR_16->state = VAR_2;
 else
  VAR_16->state = VAR_0;
 FUNC_16(&VAR_16->conf_mutex);
 FUNC_16(&VAR_16->discipline_mutex);
 return -VAR_5;
}
