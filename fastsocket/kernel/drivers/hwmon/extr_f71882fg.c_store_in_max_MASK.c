
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f71882fg_data {long in1_max; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 long FUNC_0 (long,int ,int) ;
 struct f71882fg_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct f71882fg_data*,int ,long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute
 *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct f71882fg_data *VAR_5 = FUNC_1(VAR_1);
 long VAR_6 = FUNC_5(VAR_3, ((void*)0), 10) / 8;
 VAR_6 = FUNC_0(VAR_6, 0, 255);

 FUNC_3(&VAR_5->update_lock);
 FUNC_2(VAR_5, VAR_0, VAR_6);
 VAR_5->in1_max = VAR_6;
 FUNC_4(&VAR_5->update_lock);

 return VAR_4;
}
