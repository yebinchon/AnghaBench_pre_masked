
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fschmd_data {int kind; unsigned long* fan_min; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int ** VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int,int) ;
 struct fschmd_data* FUNC_1 (struct device*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (char const*,int *,int) ;
 int FUNC_6 (struct device*) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_7(VAR_3)->index;
 struct fschmd_data *VAR_7 = FUNC_1(VAR_2);
 unsigned long VAR_8 = FUNC_5(VAR_4, ((void*)0), 10);


 if (VAR_8 || VAR_7->kind == VAR_1 - 1) {
  VAR_8 = FUNC_0(VAR_8, 128, 255);
  VAR_8 = (VAR_8 - 128) * 2 + 1;
 }

 FUNC_3(&VAR_7->update_lock);

 FUNC_2(FUNC_6(VAR_2),
  VAR_0[VAR_7->kind][VAR_6], VAR_8);
 VAR_7->fan_min[VAR_6] = VAR_8;

 FUNC_4(&VAR_7->update_lock);

 return VAR_5;
}
