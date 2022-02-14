
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ link_type; } ;
struct qeth_card {TYPE_1__ info; TYPE_2__* gdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (struct qeth_card*,int ) ;
 int FUNC_6 (struct qeth_card*,int ) ;
 int FUNC_7 (struct qeth_card*) ;
 int FUNC_8 (struct qeth_card*) ;
 int FUNC_9 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_10(struct qeth_card *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_4, 2, "setadprm");

 if (!FUNC_6(VAR_5, VAR_0)) {
  FUNC_2(&VAR_5->gdev->dev,
   "set adapter parameters not supported.\n");
  FUNC_1(VAR_4, 2, " notsupp");
  return 0;
 }
 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6) {
  FUNC_0(2, "%s couldn't set adapter parameters: "
   "0x%x\n", FUNC_3(&VAR_5->gdev->dev), VAR_6);
  return VAR_6;
 }
 if (FUNC_5(VAR_5, VAR_1)) {
  VAR_6 = FUNC_9(VAR_5);
  if (VAR_6)
   FUNC_4(&VAR_5->gdev->dev, "Reading the adapter MAC"
    " address failed\n");
 }

 if ((VAR_5->info.link_type == VAR_2) ||
     (VAR_5->info.link_type == VAR_3))
  VAR_6 = FUNC_7(VAR_5);

 return VAR_6;
}
