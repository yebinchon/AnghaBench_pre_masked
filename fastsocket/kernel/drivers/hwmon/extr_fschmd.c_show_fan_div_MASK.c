
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fschmd_data {int* fan_ripple; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct fschmd_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1)->index;
 struct fschmd_data *VAR_4 = FUNC_0(VAR_0);


 return FUNC_1(VAR_2, "%d\n", 1 << (VAR_4->fan_ripple[VAR_3] & 3));
}
