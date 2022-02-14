
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis5595_data {int update_lock; int temp_hyst; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (long) ;
 struct sis5595_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (char const*,int *,int) ;
 int FUNC_5 (struct sis5595_data*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct sis5595_data *VAR_5 = FUNC_1(VAR_1);
 long VAR_6 = FUNC_4(VAR_3, ((void*)0), 10);

 FUNC_2(&VAR_5->update_lock);
 VAR_5->temp_hyst = FUNC_0(VAR_6);
 FUNC_5(VAR_5, VAR_0, VAR_5->temp_hyst);
 FUNC_3(&VAR_5->update_lock);
 return VAR_4;
}
