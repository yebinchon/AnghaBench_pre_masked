
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ds1wm_driver_data {int clock_rate; } ;
struct ds1wm_data {TYPE_2__* pdev; TYPE_1__* cell; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* enable ) (TYPE_2__*) ;struct ds1wm_driver_data* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ds1wm_data*) ;
 int FUNC_3 (struct ds1wm_data*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct ds1wm_data *VAR_1)
{
 int VAR_2;
 struct ds1wm_driver_data *VAR_3 = VAR_1->cell->driver_data;

 if (VAR_1->cell->enable)
  VAR_1->cell->enable(VAR_1->pdev);

 VAR_2 = FUNC_1(VAR_3->clock_rate);
 if (VAR_2 == 0) {
  FUNC_0(&VAR_1->pdev->dev,
   "no suitable divisor for %dHz clock\n",
   VAR_3->clock_rate);
  return;
 }
 FUNC_3(VAR_1, VAR_0, VAR_2);


 FUNC_4(1);

 FUNC_2(VAR_1);
}
