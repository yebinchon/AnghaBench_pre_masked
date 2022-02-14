
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev_attr; } ;
struct TYPE_3__ {int dev_attr; } ;
struct s3c_hwmon_attr {TYPE_2__ label; TYPE_1__ in; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int *) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
      struct s3c_hwmon_attr *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->in.dev_attr);
 FUNC_0(VAR_0, &VAR_1->label.dev_attr);
}
