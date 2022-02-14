
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct iio_trigger {scalar_t__ control_attrs; TYPE_1__ dev; } ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct iio_trigger *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->control_attrs)
  VAR_1 = FUNC_0(&VAR_0->dev.kobj,
      VAR_0->control_attrs);

 return VAR_1;
}
