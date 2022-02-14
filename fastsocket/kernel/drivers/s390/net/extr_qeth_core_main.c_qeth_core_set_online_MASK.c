
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ccwgdriver; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct qeth_card {TYPE_2__ discipline; int gdev; TYPE_3__ info; } ;
struct ccwgroup_device {int dev; } ;
struct TYPE_4__ {int (* probe ) (int ) ;int (* set_online ) (struct ccwgroup_device*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_card* FUNC_0 (int *) ;
 int FUNC_1 (struct qeth_card*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ccwgroup_device*) ;

__attribute__((used)) static int FUNC_4(struct ccwgroup_device *VAR_3)
{
 struct qeth_card *VAR_4 = FUNC_0(&VAR_3->dev);
 int VAR_5 = 0;
 int VAR_6;

 if (!VAR_4->discipline.ccwgdriver) {
  if (VAR_4->info.type == VAR_0)
   VAR_6 = VAR_2;
  else
   VAR_6 = VAR_1;
  VAR_5 = FUNC_1(VAR_4, VAR_6);
  if (VAR_5)
   goto err;
  VAR_5 = VAR_4->discipline.ccwgdriver->probe(VAR_4->gdev);
  if (VAR_5)
   goto err;
 }
 VAR_5 = VAR_4->discipline.ccwgdriver->set_online(VAR_3);
err:
 return VAR_5;
}
