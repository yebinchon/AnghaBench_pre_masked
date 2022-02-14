
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct tcm825x_sensor {TYPE_1__* platform_data; } ;
struct TYPE_2__ {int (* power_set ) (int) ;} ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_int_device *VAR_0, int VAR_1)
{
 struct tcm825x_sensor *VAR_2 = VAR_0->priv;

 return VAR_2->platform_data->power_set(VAR_1);
}
