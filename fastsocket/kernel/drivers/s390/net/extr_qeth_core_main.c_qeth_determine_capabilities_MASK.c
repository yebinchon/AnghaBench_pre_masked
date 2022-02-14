
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cq; } ;
struct TYPE_6__ {int qfmt; int qdioac1; int qdioac3; int icnt; } ;
struct qeth_card {TYPE_2__ options; TYPE_1__* gdev; TYPE_3__ ssqd; } ;
struct ccw_device {int online; } ;
struct TYPE_4__ {int dev; } ;


 struct ccw_device* FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int ,int) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int,char*,int) ;
 int VAR_4 ;
 int FUNC_4 (struct ccw_device*) ;
 int FUNC_5 (struct ccw_device*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct ccw_device*,TYPE_3__*) ;
 int FUNC_10 (struct qeth_card*,char*) ;
 int FUNC_11 (struct qeth_card*,char*) ;
 int FUNC_12 (struct qeth_card*,void**,int*) ;

__attribute__((used)) static void FUNC_13(struct qeth_card *VAR_5)
{
 int VAR_6;
 int VAR_7;
 char *VAR_8;
 struct ccw_device *VAR_9;
 int VAR_10 = 0;

 FUNC_2(VAR_4, 2, "detcapab");
 VAR_9 = FUNC_0(VAR_5);
 if (!VAR_9->online) {
  VAR_10 = 1;
  VAR_6 = FUNC_5(VAR_9);
  if (VAR_6) {
   FUNC_3(VAR_4, 2, "3err%d", VAR_6);
   goto out;
  }
 }

 VAR_6 = FUNC_12(VAR_5, (void **) &VAR_8, &VAR_7);
 if (VAR_6) {
  FUNC_1(2, "%s qeth_read_conf_data returned %i\n",
   FUNC_7(&VAR_5->gdev->dev), VAR_6);
  FUNC_3(VAR_4, 2, "5err%d", VAR_6);
  goto out_offline;
 }
 FUNC_11(VAR_5, VAR_8);
 if (VAR_10)
  FUNC_10(VAR_5, VAR_8);
 FUNC_8(VAR_8);

 VAR_6 = FUNC_9(VAR_9, &VAR_5->ssqd);
 if (VAR_6)
  FUNC_3(VAR_4, 2, "6err%d", VAR_6);

 FUNC_3(VAR_4, 2, "qfmt%d", VAR_5->ssqd.qfmt);
 FUNC_3(VAR_4, 2, "%d", VAR_5->ssqd.qdioac1);
 FUNC_3(VAR_4, 2, "%d", VAR_5->ssqd.qdioac3);
 FUNC_3(VAR_4, 2, "icnt%d", VAR_5->ssqd.icnt);
 if (!((VAR_5->ssqd.qfmt != VAR_2) ||
     ((VAR_5->ssqd.qdioac1 & VAR_0) == 0) ||
     ((VAR_5->ssqd.qdioac3 & VAR_1) == 0))) {
  FUNC_6(&VAR_5->gdev->dev,
   "Completion Queueing supported\n");
 } else {
  VAR_5->options.cq = VAR_3;
 }


out_offline:
 if (VAR_10 == 1)
  FUNC_4(VAR_9);
out:
 return;
}
