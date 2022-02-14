
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm8400 {TYPE_1__* regulators; } ;
struct regulator_init_data {struct wm8400* driver_data; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct regulator_init_data* platform_data; struct device* parent; } ;
struct TYPE_3__ {char* name; int id; TYPE_2__ dev; } ;


 int VAR_0 ;
 struct wm8400* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_2__*,struct wm8400*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(struct device *VAR_1, int VAR_2,
         struct regulator_init_data *VAR_3)
{
 struct wm8400 *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->regulators[VAR_2].name)
  return -VAR_0;

 VAR_3->driver_data = VAR_4;

 VAR_4->regulators[VAR_2].name = "wm8400-regulator";
 VAR_4->regulators[VAR_2].id = VAR_2;
 VAR_4->regulators[VAR_2].dev.parent = VAR_1;
 VAR_4->regulators[VAR_2].dev.platform_data = VAR_3;
 FUNC_1(&VAR_4->regulators[VAR_2].dev, VAR_4);

 return FUNC_2(&VAR_4->regulators[VAR_2]);
}
