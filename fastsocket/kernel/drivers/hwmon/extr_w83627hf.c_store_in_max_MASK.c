
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83627hf_data {int update_lock; int * in_max; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (long) ;
 int FUNC_1 (int) ;
 struct w83627hf_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (char const*,int *,int) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct w83627hf_data*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_6(VAR_1)->index;
 struct w83627hf_data *VAR_5 = FUNC_2(VAR_0);
 long VAR_6 = FUNC_5(VAR_2, ((void*)0), 10);

 FUNC_3(&VAR_5->update_lock);
 VAR_5->in_max[VAR_4] = FUNC_0(VAR_6);
 FUNC_7(VAR_5, FUNC_1(VAR_4), VAR_5->in_max[VAR_4]);
 FUNC_4(&VAR_5->update_lock);
 return VAR_3;
}
