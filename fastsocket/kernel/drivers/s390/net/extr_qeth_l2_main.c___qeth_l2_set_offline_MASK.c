
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwtrap; } ;
struct qeth_card {int state; int discipline_mutex; int conf_mutex; TYPE_1__ info; scalar_t__ dev; } ;
struct TYPE_4__ {int kobj; } ;
struct ccwgroup_device {TYPE_2__ dev; } ;
typedef enum qeth_card_states { ____Placeholder_qeth_card_states } qeth_card_states ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qeth_card*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int,struct qeth_card**,int) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int ,int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 struct qeth_card* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct qeth_card*,int ) ;
 int FUNC_14 (struct qeth_card*,int) ;

__attribute__((used)) static int FUNC_15(struct ccwgroup_device *VAR_5,
     int VAR_6)
{
 struct qeth_card *VAR_7 = FUNC_7(&VAR_5->dev);
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 enum qeth_card_states VAR_11;

 FUNC_9(&VAR_7->discipline_mutex);
 FUNC_9(&VAR_7->conf_mutex);
 FUNC_4(VAR_4, 3, "setoffl");
 FUNC_3(VAR_4, 3, &VAR_7, sizeof(void *));

 if (VAR_7->dev && FUNC_12(VAR_7->dev))
  FUNC_11(VAR_7->dev);
 VAR_11 = VAR_7->state;
 if ((!VAR_6 && VAR_7->info.hwtrap) || VAR_7->info.hwtrap == 2) {
  FUNC_13(VAR_7, VAR_3);
  VAR_7->info.hwtrap = 1;
 }
 FUNC_14(VAR_7, VAR_6);
 VAR_8 = FUNC_6(FUNC_0(VAR_7));
 VAR_9 = FUNC_6(FUNC_2(VAR_7));
 VAR_10 = FUNC_6(FUNC_1(VAR_7));
 if (!VAR_8)
  VAR_8 = (VAR_9) ? VAR_9 : VAR_10;
 if (VAR_8)
  FUNC_5(VAR_4, 2, "1err%d", VAR_8);
 if (VAR_11 == VAR_1)
  VAR_7->state = VAR_0;

 FUNC_8(&VAR_5->dev.kobj, VAR_2);
 FUNC_10(&VAR_7->conf_mutex);
 FUNC_10(&VAR_7->discipline_mutex);
 return 0;
}
