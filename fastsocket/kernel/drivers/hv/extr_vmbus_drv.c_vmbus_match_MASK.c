
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_driver {int id_table; } ;
struct TYPE_2__ {int b; } ;
struct hv_device {TYPE_1__ dev_type; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct hv_device* FUNC_0 (struct device*) ;
 struct hv_driver* FUNC_1 (struct device_driver*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct hv_driver *VAR_2 = FUNC_1(VAR_1);
 struct hv_device *VAR_3 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_2->id_table, VAR_3->dev_type.b))
  return 1;

 return 0;
}
