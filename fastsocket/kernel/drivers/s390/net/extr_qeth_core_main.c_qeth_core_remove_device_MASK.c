
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ccwgdriver; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct qeth_card {int list; TYPE_3__ discipline; TYPE_1__ info; } ;
struct ccwgroup_device {int dev; } ;
struct TYPE_8__ {int rwlock; } ;
struct TYPE_6__ {int (* remove ) (struct ccwgroup_device*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 struct qeth_card* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_4__ VAR_2 ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (struct qeth_card*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ccwgroup_device*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct ccwgroup_device *VAR_3)
{
 unsigned long VAR_4;
 struct qeth_card *VAR_5 = FUNC_1(&VAR_3->dev);

 FUNC_0(VAR_1, 2, "removedv");

 if (VAR_5->info.type == VAR_0) {
  FUNC_8(&VAR_3->dev);
 } else {
  FUNC_7(&VAR_3->dev);
 }

 if (VAR_5->discipline.ccwgdriver) {
  VAR_5->discipline.ccwgdriver->remove(VAR_3);
  FUNC_6(VAR_5);
 }

 FUNC_10(&VAR_2.rwlock, VAR_4);
 FUNC_3(&VAR_5->list);
 FUNC_11(&VAR_2.rwlock, VAR_4);
 FUNC_5(VAR_5);
 FUNC_2(&VAR_3->dev, ((void*)0));
 FUNC_4(&VAR_3->dev);
 return;
}
