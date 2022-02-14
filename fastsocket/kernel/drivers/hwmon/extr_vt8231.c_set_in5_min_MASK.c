
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8231_data {int update_lock; int * in_min; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (unsigned long,int ,int) ;
 struct vt8231_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_0 ;
 unsigned long FUNC_4 (char const*,int *,int) ;
 int FUNC_5 (struct vt8231_data*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct vt8231_data *VAR_5 = FUNC_1(VAR_1);
 unsigned long VAR_6 = FUNC_4(VAR_3, ((void*)0), 10);

 FUNC_2(&VAR_5->update_lock);
 VAR_5->in_min[5] = FUNC_0(((VAR_6 * 958 * 34) / (10000 * 54)) + 3,
     0, 255);
 FUNC_5(VAR_5, VAR_0[5], VAR_5->in_min[5]);
 FUNC_3(&VAR_5->update_lock);
 return VAR_4;
}
