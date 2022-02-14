
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct w83627hf_data {int update_lock; int * temp_max; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (long) ;
 int FUNC_1 (long) ;
 struct w83627hf_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (char const*,int *,int) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;
 int * VAR_0 ;
 int FUNC_7 (struct w83627hf_data*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_6(VAR_2)->index;
 struct w83627hf_data *VAR_6 = FUNC_2(VAR_1);
 long VAR_7 = FUNC_5(VAR_3, ((void*)0), 10);
 u16 VAR_8 = (VAR_5) ? FUNC_0(VAR_7) : FUNC_1(VAR_7);

 FUNC_3(&VAR_6->update_lock);
 VAR_6->temp_max[VAR_5] = VAR_8;
 FUNC_7(VAR_6, VAR_0[VAR_5], VAR_8);
 FUNC_4(&VAR_6->update_lock);
 return VAR_4;
}
