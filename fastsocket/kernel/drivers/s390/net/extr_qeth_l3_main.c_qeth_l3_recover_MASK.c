
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_card {TYPE_1__* gdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,int,struct qeth_card**,int) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct qeth_card*) ;
 int FUNC_7 (struct qeth_card*,int ) ;
 int FUNC_8 (struct qeth_card*,int ) ;
 int FUNC_9 (struct qeth_card*) ;
 int FUNC_10 (struct qeth_card*,int ) ;
 int FUNC_11 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_12(void *VAR_2)
{
 struct qeth_card *VAR_3;
 int VAR_4 = 0;

 VAR_3 = (struct qeth_card *) VAR_2;
 FUNC_1(VAR_1, 2, "recover1");
 FUNC_0(VAR_1, 2, &VAR_3, sizeof(void *));
 if (!FUNC_10(VAR_3, VAR_0))
  return 0;
 FUNC_1(VAR_1, 2, "recover2");
 FUNC_5(&VAR_3->gdev->dev,
  "A recovery process has been started for the device\n");
 FUNC_11(VAR_3);
 FUNC_2(VAR_3->gdev, 1);
 VAR_4 = FUNC_3(VAR_3->gdev, 1);
 if (!VAR_4)
  FUNC_4(&VAR_3->gdev->dev,
   "Device successfully recovered!\n");
 else {
  FUNC_9(VAR_3);
  FUNC_5(&VAR_3->gdev->dev, "The qeth device driver "
    "failed to recover an error on the device\n");
 }
 FUNC_6(VAR_3);
 FUNC_8(VAR_3, VAR_0);
 FUNC_7(VAR_3, VAR_0);
 return 0;
}
