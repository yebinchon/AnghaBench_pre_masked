
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct regulator_dev {TYPE_1__ dev; scalar_t__ supply; int list; int open_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct regulator_dev*) ;

void FUNC_7(struct regulator_dev *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_3(&VAR_0);
 FUNC_0(VAR_1->open_count);
 FUNC_6(VAR_1);
 FUNC_2(&VAR_1->list);
 if (VAR_1->supply)
  FUNC_5(&VAR_1->dev.kobj, "supply");
 FUNC_1(&VAR_1->dev);
 FUNC_4(&VAR_0);
}
