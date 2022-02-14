
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ibmpex_bmc_data {int num_sensors; struct ibmpex_bmc_data* sensors; int user; int hwmon_dev; int bmc_device; int list; TYPE_2__* attr; } ;
struct TYPE_6__ {struct ibmpex_bmc_data* name; } ;
struct TYPE_10__ {TYPE_1__ attr; } ;
struct TYPE_9__ {TYPE_5__ dev_attr; } ;
struct TYPE_8__ {TYPE_5__ dev_attr; } ;
struct TYPE_7__ {TYPE_5__ dev_attr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ibmpex_bmc_data*) ;
 int FUNC_5 (int *) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_6(struct ibmpex_bmc_data *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_1(VAR_3->bmc_device,
      &VAR_2.dev_attr);
 FUNC_1(VAR_3->bmc_device, &VAR_1.dev_attr);
 for (VAR_4 = 0; VAR_4 < VAR_3->num_sensors; VAR_4++)
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (!VAR_3->sensors[VAR_4].attr[VAR_5].dev_attr.attr.name)
    continue;
   FUNC_1(VAR_3->bmc_device,
    &VAR_3->sensors[VAR_4].attr[VAR_5].dev_attr);
   FUNC_4(VAR_3->sensors[VAR_4].attr[VAR_5].dev_attr.attr.name);
  }

 FUNC_5(&VAR_3->list);
 FUNC_0(VAR_3->bmc_device, ((void*)0));
 FUNC_2(VAR_3->hwmon_dev);
 FUNC_3(VAR_3->user);
 FUNC_4(VAR_3->sensors);
 FUNC_4(VAR_3);
}
