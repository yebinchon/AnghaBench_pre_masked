
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* ccwgdriver; } ;
struct qeth_card {TYPE_1__* gdev; TYPE_2__ discipline; } ;
typedef enum qeth_discipline_id { ____Placeholder_qeth_discipline_id } qeth_discipline_id ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ,char*) ;

int FUNC_5(struct qeth_card *VAR_4,
  enum qeth_discipline_id VAR_5)
{
 int VAR_6 = 0;
 FUNC_1(&VAR_3);
 switch (VAR_5) {
 case 128:
  VAR_4->discipline.ccwgdriver = FUNC_4(
   FUNC_3(VAR_2),
   "qeth_l3");
  break;
 case 129:
  VAR_4->discipline.ccwgdriver = FUNC_4(
   FUNC_3(VAR_1),
   "qeth_l2");
  break;
 }
 if (!VAR_4->discipline.ccwgdriver) {
  FUNC_0(&VAR_4->gdev->dev, "There is no kernel module to "
   "support discipline %d\n", VAR_5);
  VAR_6 = -VAR_0;
 }
 FUNC_2(&VAR_3);
 return VAR_6;
}
