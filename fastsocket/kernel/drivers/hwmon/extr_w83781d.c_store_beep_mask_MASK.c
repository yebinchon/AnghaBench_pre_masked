
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct w83781d_data {int beep_mask; scalar_t__ type; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct w83781d_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct w83781d_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_5, struct device_attribute *VAR_6,
  const char *VAR_7, size_t VAR_8)
{
 struct w83781d_data *VAR_9 = FUNC_1(VAR_5);
 u32 VAR_10;

 VAR_10 = FUNC_4(VAR_7, ((void*)0), 10);

 FUNC_2(&VAR_9->update_lock);
 VAR_9->beep_mask &= 0x8000;
 VAR_9->beep_mask |= FUNC_0(VAR_10, VAR_9->type);
 FUNC_5(VAR_9, VAR_0,
       VAR_9->beep_mask & 0xff);
 FUNC_5(VAR_9, VAR_1,
       (VAR_9->beep_mask >> 8) & 0xff);
 if (VAR_9->type != VAR_4 && VAR_9->type != VAR_3) {
  FUNC_5(VAR_9, VAR_2,
        ((VAR_9->beep_mask) >> 16) & 0xff);
 }
 FUNC_3(&VAR_9->update_lock);

 return VAR_8;
}
