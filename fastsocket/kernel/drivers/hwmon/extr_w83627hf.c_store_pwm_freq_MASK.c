
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct w83627hf_data {scalar_t__ type; int* pwm_freq; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int * VAR_1 ;
 struct w83627hf_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,int *,int) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;
 scalar_t__ VAR_2 ;
 int const FUNC_7 (struct w83627hf_data*,int ) ;
 int FUNC_8 (struct w83627hf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_3, struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = FUNC_6(VAR_4)->index;
 struct w83627hf_data *VAR_8 = FUNC_0(VAR_3);
 static const u8 VAR_9[]={0xF8, 0x8F};
 u32 VAR_10;

 VAR_10 = FUNC_5(VAR_5, ((void*)0), 10);

 FUNC_1(&VAR_8->update_lock);

 if (VAR_8->type == VAR_2) {
  VAR_8->pwm_freq[VAR_7] = FUNC_4(VAR_10);
  FUNC_8(VAR_8, VAR_0,
    (VAR_8->pwm_freq[VAR_7] << (VAR_7*4)) |
    (FUNC_7(VAR_8,
    VAR_0) & VAR_9[VAR_7]));
 } else {
  VAR_8->pwm_freq[VAR_7] = FUNC_3(VAR_10);
  FUNC_8(VAR_8, VAR_1[VAR_7],
    VAR_8->pwm_freq[VAR_7]);
 }

 FUNC_2(&VAR_8->update_lock);
 return VAR_6;
}
