
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_rx {int dummy; } ;
struct TYPE_7__ {int large_send; int sniffer; } ;
struct TYPE_5__ {scalar_t__ hwtrap; } ;
struct qeth_card {int state; int lan_online; int discipline_mutex; int conf_mutex; int dev; TYPE_3__ options; TYPE_2__* gdev; int rx; TYPE_1__ info; } ;
struct TYPE_8__ {int kobj; } ;
struct ccwgroup_device {TYPE_4__ dev; } ;
typedef enum qeth_card_states { ____Placeholder_qeth_card_states } qeth_card_states ;
struct TYPE_6__ {int dev; } ;


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
 int FUNC_4 (int ,int,struct qeth_card**,int) ;
 int FUNC_5 (int ,int,char*) ;
 int FUNC_6 (int ,int,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct qeth_card* FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct qeth_card*) ;
 scalar_t__ FUNC_21 (struct qeth_card*,int ) ;
 int FUNC_22 (struct qeth_card*) ;
 scalar_t__ FUNC_23 (struct qeth_card*,int ) ;
 int FUNC_24 (struct qeth_card*) ;
 int FUNC_25 (struct qeth_card*,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct qeth_card*) ;
 int FUNC_28 (struct qeth_card*) ;
 int FUNC_29 (struct qeth_card*) ;
 scalar_t__ FUNC_30 (struct qeth_card*) ;
 int FUNC_31 (struct qeth_card*) ;
 int FUNC_32 (struct qeth_card*,int ) ;
 int FUNC_33 (struct qeth_card*) ;
 int FUNC_34 (struct qeth_card*) ;
 int FUNC_35 (struct qeth_card*,int,int ) ;
 int FUNC_36 () ;
 int FUNC_37 () ;

__attribute__((used)) static int FUNC_38(struct ccwgroup_device *VAR_10, int VAR_11)
{
 struct qeth_card *VAR_12 = FUNC_10(&VAR_10->dev);
 int VAR_13 = 0;
 enum qeth_card_states VAR_14;

 FUNC_0(!VAR_12);
 FUNC_15(&VAR_12->discipline_mutex);
 FUNC_15(&VAR_12->conf_mutex);
 FUNC_5(VAR_9, 2, "setonlin");
 FUNC_4(VAR_9, 2, &VAR_12, sizeof(void *));

 VAR_14 = VAR_12->state;
 VAR_13 = FUNC_9(FUNC_2(VAR_12));
 if (VAR_13) {
  FUNC_6(VAR_9, 2, "1err%d", VAR_13);
  VAR_13 = -VAR_4;
  goto out;
 }
 VAR_13 = FUNC_9(FUNC_3(VAR_12));
 if (VAR_13) {
  FUNC_6(VAR_9, 2, "1err%d", VAR_13);
  VAR_13 = -VAR_4;
  goto out;
 }
 VAR_13 = FUNC_9(FUNC_1(VAR_12));
 if (VAR_13) {
  FUNC_6(VAR_9, 2, "1err%d", VAR_13);
  VAR_13 = -VAR_4;
  goto out;
 }

 VAR_13 = FUNC_20(VAR_12);
 if (VAR_13) {
  FUNC_6(VAR_9, 2, "2err%d", VAR_13);
  goto out_remove;
 }

 if (!VAR_12->dev && FUNC_30(VAR_12))
  goto out_remove;

 if (FUNC_23(VAR_12, VAR_7)) {
  if (VAR_12->info.hwtrap &&
      FUNC_21(VAR_12, VAR_8))
   VAR_12->info.hwtrap = 0;
 } else
  VAR_12->info.hwtrap = 0;

 VAR_12->state = VAR_1;
 FUNC_14(&VAR_12->rx, 0, sizeof(struct qeth_rx));
 FUNC_33(VAR_12);


 FUNC_5(VAR_9, 2, "softsetp");

 VAR_13 = FUNC_34(VAR_12);
 if (VAR_13) {
  FUNC_6(VAR_9, 2, "1err%d", VAR_13);
  if (VAR_13 == 0xe080) {
   FUNC_12(&VAR_12->gdev->dev,
    "The LAN is offline\n");
   VAR_12->lan_online = 0;
   goto contin;
  }
  VAR_13 = -VAR_5;
  goto out_remove;
 } else
  VAR_12->lan_online = 1;

contin:
 VAR_13 = FUNC_27(VAR_12);
 if (VAR_13)
  FUNC_6(VAR_9, 2, "2err%d", VAR_13);
 if (!VAR_12->options.sniffer) {
  VAR_13 = FUNC_31(VAR_12);
  if (VAR_13) {
   FUNC_6(VAR_9, 2, "3err%d", VAR_13);
   goto out_remove;
  }
  FUNC_25(VAR_12, VAR_12->options.large_send);
  VAR_13 = FUNC_28(VAR_12);
  if (VAR_13)
   FUNC_6(VAR_9, 2, "4err%d", VAR_13);
  VAR_13 = FUNC_29(VAR_12);
  if (VAR_13)
   FUNC_6(VAR_9, 2, "5err%d", VAR_13);
 }
 FUNC_19(VAR_12->dev);

 VAR_13 = FUNC_22(VAR_12);
 if (VAR_13) {
  FUNC_6(VAR_9, 2, "6err%d", VAR_13);
  goto out_remove;
 }
 VAR_12->state = VAR_3;

 FUNC_35(VAR_12, 0xffffffff, 0);
 FUNC_24(VAR_12);
 if (VAR_12->lan_online)
  FUNC_18(VAR_12->dev);
 else
  FUNC_17(VAR_12->dev);
 if (VAR_14 == VAR_2) {
  if (VAR_11)
   FUNC_7(VAR_12->dev);
  else {
   FUNC_36();
   FUNC_11(VAR_12->dev);
   FUNC_37();
  }
  FUNC_26(VAR_12->dev);
 }

 FUNC_13(&VAR_10->dev.kobj, VAR_6);
out:
 FUNC_16(&VAR_12->conf_mutex);
 FUNC_16(&VAR_12->discipline_mutex);
 return VAR_13;
out_remove:
 FUNC_32(VAR_12, 0);
 FUNC_8(FUNC_1(VAR_12));
 FUNC_8(FUNC_3(VAR_12));
 FUNC_8(FUNC_2(VAR_12));
 if (VAR_14 == VAR_2)
  VAR_12->state = VAR_2;
 else
  VAR_12->state = VAR_0;
 FUNC_16(&VAR_12->conf_mutex);
 FUNC_16(&VAR_12->discipline_mutex);
 return -VAR_5;
}
