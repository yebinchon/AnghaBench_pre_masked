
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627hf_data {int beep_mask; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct w83627hf_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (char const*,int *,int) ;
 int FUNC_5 (struct w83627hf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_3, struct device_attribute *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 struct w83627hf_data *VAR_7 = FUNC_1(VAR_3);
 unsigned long VAR_8;

 VAR_8 = FUNC_4(VAR_5, ((void*)0), 10);

 FUNC_2(&VAR_7->update_lock);


 VAR_7->beep_mask = (VAR_7->beep_mask & 0x8000)
   | FUNC_0(VAR_8);
 FUNC_5(VAR_7, VAR_0,
       VAR_7->beep_mask & 0xff);
 FUNC_5(VAR_7, VAR_2,
       ((VAR_7->beep_mask) >> 16) & 0xff);
 FUNC_5(VAR_7, VAR_1,
       (VAR_7->beep_mask >> 8) & 0xff);

 FUNC_3(&VAR_7->update_lock);
 return VAR_6;
}
