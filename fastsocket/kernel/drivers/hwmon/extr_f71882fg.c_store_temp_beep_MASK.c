
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {int temp_beep; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 struct f71882fg_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct f71882fg_data*,int ) ;
 int FUNC_2 (struct f71882fg_data*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (char const*,int *,int) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute
 *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct f71882fg_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = FUNC_6(VAR_2)->index;
 unsigned long VAR_7 = FUNC_5(VAR_3, ((void*)0), 10);

 FUNC_3(&VAR_5->update_lock);
 VAR_5->temp_beep = FUNC_1(VAR_5, VAR_0);
 if (VAR_7)
  VAR_5->temp_beep |= 1 << VAR_6;
 else
  VAR_5->temp_beep &= ~(1 << VAR_6);

 FUNC_2(VAR_5, VAR_0, VAR_5->temp_beep);
 FUNC_4(&VAR_5->update_lock);

 return VAR_4;
}
