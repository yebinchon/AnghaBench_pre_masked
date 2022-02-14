
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {int pwm_enable; long** pwm_auto_point_pwm; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 long FUNC_1 (long,int ,int) ;
 struct f71882fg_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct f71882fg_data*,int ) ;
 int FUNC_4 (struct f71882fg_data*,int ,long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (char const*,int *,int) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct f71882fg_data *VAR_5 = FUNC_2(VAR_1);
 int VAR_6 = FUNC_8(VAR_2)->index;
 int VAR_7 = FUNC_8(VAR_2)->nr;
 long VAR_8 = FUNC_7(VAR_3, ((void*)0), 10);
 VAR_8 = FUNC_1(VAR_8, 0, 255);

 FUNC_5(&VAR_5->update_lock);
 VAR_5->pwm_enable = FUNC_3(VAR_5, VAR_0);
 if (VAR_5->pwm_enable & (1 << (2 * VAR_6))) {

 } else {

  if (VAR_8 < 29)
   VAR_8 = 255;
  else
   VAR_8 = (255 - VAR_8) * 32 / VAR_8;
 }
 FUNC_4(VAR_5, FUNC_0(VAR_6, VAR_7), VAR_8);
 VAR_5->pwm_auto_point_pwm[VAR_6][VAR_7] = VAR_8;
 FUNC_6(&VAR_5->update_lock);

 return VAR_4;
}
