
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cq; } ;
struct TYPE_4__ {int hwtrap; } ;
struct qeth_card {int state; int discipline_mutex; int conf_mutex; scalar_t__ dev; TYPE_2__ options; TYPE_1__ info; } ;
struct TYPE_6__ {int kobj; } ;
struct ccwgroup_device {TYPE_3__ dev; } ;
typedef enum qeth_card_states { ____Placeholder_qeth_card_states } qeth_card_states ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qeth_card*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int,struct qeth_card**,int) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int ,int,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 struct qeth_card* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct qeth_card*,int ) ;
 int FUNC_15 (struct qeth_card*,int) ;
 int FUNC_16 () ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(struct ccwgroup_device *VAR_7,
   int VAR_8)
{
 struct qeth_card *VAR_9 = FUNC_8(&VAR_7->dev);
 int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 enum qeth_card_states VAR_13;

 FUNC_10(&VAR_9->discipline_mutex);
 FUNC_10(&VAR_9->conf_mutex);
 FUNC_4(VAR_6, 3, "setoffl");
 FUNC_3(VAR_6, 3, &VAR_9, sizeof(void *));

 if (VAR_9->dev && FUNC_13(VAR_9->dev))
  FUNC_12(VAR_9->dev);
 VAR_13 = VAR_9->state;
 if ((!VAR_8 && VAR_9->info.hwtrap) || VAR_9->info.hwtrap == 2) {
  FUNC_14(VAR_9, VAR_5);
  VAR_9->info.hwtrap = 1;
 }
 FUNC_15(VAR_9, VAR_8);
 if ((VAR_9->options.cq == VAR_4) && VAR_9->dev) {
  FUNC_16();
  FUNC_6(VAR_3, VAR_9->dev);
  FUNC_17();
 }
 VAR_10 = FUNC_7(FUNC_0(VAR_9));
 VAR_11 = FUNC_7(FUNC_2(VAR_9));
 VAR_12 = FUNC_7(FUNC_1(VAR_9));
 if (!VAR_10)
  VAR_10 = (VAR_11) ? VAR_11 : VAR_12;
 if (VAR_10)
  FUNC_5(VAR_6, 2, "1err%d", VAR_10);
 if (VAR_13 == VAR_1)
  VAR_9->state = VAR_0;

 FUNC_9(&VAR_7->dev.kobj, VAR_2);
 FUNC_11(&VAR_9->conf_mutex);
 FUNC_11(&VAR_9->discipline_mutex);
 return 0;
}
