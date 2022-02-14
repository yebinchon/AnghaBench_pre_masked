
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct regulator_dev {int owner; scalar_t__ exclusive; int open_count; TYPE_1__ dev; } ;
struct TYPE_5__ {struct regulator* name; } ;
struct TYPE_6__ {TYPE_2__ attr; } ;
struct regulator {int list; TYPE_3__ dev_attr; scalar_t__ dev; struct regulator* supply_name; struct regulator_dev* rdev; } ;


 scalar_t__ FUNC_0 (struct regulator*) ;
 int FUNC_1 (scalar_t__,TYPE_3__*) ;
 int FUNC_2 (struct regulator*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *,struct regulator*) ;

void FUNC_8(struct regulator *VAR_1)
{
 struct regulator_dev *VAR_2;

 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return;

 FUNC_5(&VAR_0);
 VAR_2 = VAR_1->rdev;


 if (VAR_1->dev) {
  FUNC_7(&VAR_2->dev.kobj, VAR_1->supply_name);
  FUNC_2(VAR_1->supply_name);
  FUNC_1(VAR_1->dev, &VAR_1->dev_attr);
  FUNC_2(VAR_1->dev_attr.attr.name);
 }
 FUNC_3(&VAR_1->list);
 FUNC_2(VAR_1);

 VAR_2->open_count--;
 VAR_2->exclusive = 0;

 FUNC_4(VAR_2->owner);
 FUNC_6(&VAR_0);
}
