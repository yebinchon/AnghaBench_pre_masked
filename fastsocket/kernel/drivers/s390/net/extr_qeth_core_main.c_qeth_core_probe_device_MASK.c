
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int type; } ;
struct TYPE_14__ {TYPE_5__* ccwgdriver; } ;
struct TYPE_11__ {TYPE_4__* ccwdev; } ;
struct TYPE_10__ {TYPE_4__* ccwdev; } ;
struct TYPE_9__ {TYPE_4__* ccwdev; } ;
struct qeth_card {TYPE_7__ info; int list; struct ccwgroup_device* gdev; TYPE_6__ discipline; TYPE_3__ data; TYPE_2__ write; TYPE_1__ read; } ;
struct device {int dummy; } ;
struct ccwgroup_device {TYPE_4__** cdev; struct device dev; } ;
struct TYPE_16__ {int rwlock; int list; } ;
struct TYPE_13__ {int (* probe ) (struct ccwgroup_device*) ;} ;
struct TYPE_12__ {void* handler; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct qeth_card*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct device*) ;
 struct qeth_card* FUNC_7 () ;
 TYPE_8__ VAR_4 ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct qeth_card*) ;
 int FUNC_11 (struct qeth_card*) ;
 int FUNC_12 (struct qeth_card*,int ) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct qeth_card*) ;
 int FUNC_16 (struct qeth_card*) ;
 void* VAR_5 ;
 int FUNC_17 (struct qeth_card*) ;
 int FUNC_18 (struct ccwgroup_device*) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_21(struct ccwgroup_device *VAR_6)
{
 struct qeth_card *VAR_7;
 struct device *VAR_8;
 int VAR_9;
 unsigned long VAR_10;

 FUNC_0(VAR_3, 2, "probedev");

 VAR_8 = &VAR_6->dev;
 if (!FUNC_4(VAR_8))
  return -VAR_0;

 FUNC_1(VAR_3, 2, "%s", FUNC_2(&VAR_6->dev));

 VAR_7 = FUNC_7();
 if (!VAR_7) {
  FUNC_1(VAR_3, 2, "1err%d", -VAR_1);
  VAR_9 = -VAR_1;
  goto err_dev;
 }
 VAR_7->read.ccwdev = VAR_6->cdev[0];
 VAR_7->write.ccwdev = VAR_6->cdev[1];
 VAR_7->data.ccwdev = VAR_6->cdev[2];
 FUNC_3(&VAR_6->dev, VAR_7);
 VAR_7->gdev = VAR_6;
 VAR_6->cdev[0]->handler = VAR_5;
 VAR_6->cdev[1]->handler = VAR_5;
 VAR_6->cdev[2]->handler = VAR_5;

 VAR_9 = FUNC_16(VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_3, 2, "3err%d", VAR_9);
  goto err_card;
 }
 VAR_9 = FUNC_17(VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_3, 2, "2err%d", VAR_9);
  goto err_card;
 }

 if (VAR_7->info.type == 129)
  VAR_9 = FUNC_9(VAR_8);
 else
  VAR_9 = FUNC_8(VAR_8);
 if (VAR_9)
  goto err_card;
 switch (VAR_7->info.type) {
 case 129:
 case 130:
  VAR_9 = FUNC_12(VAR_7, VAR_2);
  if (VAR_9)
   goto err_attr;
  VAR_9 = VAR_7->discipline.ccwgdriver->probe(VAR_7->gdev);
  if (VAR_9)
   goto err_disc;
 case 131:
 case 128:
 default:
  break;
 }

 FUNC_19(&VAR_4.rwlock, VAR_10);
 FUNC_5(&VAR_7->list, &VAR_4.list);
 FUNC_20(&VAR_4.rwlock, VAR_10);

 FUNC_15(VAR_7);
 return 0;

err_disc:
 FUNC_11(VAR_7);
err_attr:
 if (VAR_7->info.type == 129)
  FUNC_14(VAR_8);
 else
  FUNC_13(VAR_8);
err_card:
 FUNC_10(VAR_7);
err_dev:
 FUNC_6(VAR_8);
 return VAR_9;
}
