
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fschmd_data {int* fan_min; int kind; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct fschmd_data* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2)->index;
 struct fschmd_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = VAR_5->fan_min[VAR_4];


 if (VAR_6 || VAR_5->kind == VAR_0 - 1)
  VAR_6 = VAR_6 / 2 + 128;

 return FUNC_1(VAR_3, "%d\n", VAR_6);
}
