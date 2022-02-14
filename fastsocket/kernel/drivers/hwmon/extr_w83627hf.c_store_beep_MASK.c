
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w83627hf_data {int beep_mask; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct w83627hf_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (char const*,int *,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;
 int FUNC_5 (struct w83627hf_data*,int ) ;
 int FUNC_6 (struct w83627hf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_4, struct device_attribute *VAR_5,
  const char *VAR_6, size_t VAR_7)
{
 struct w83627hf_data *VAR_8 = FUNC_0(VAR_4);
 int VAR_9 = FUNC_4(VAR_5)->index;
 unsigned long VAR_10;
 u8 VAR_11;

 VAR_10 = FUNC_3(VAR_6, ((void*)0), 10);
 if (VAR_10 & ~1)
  return -VAR_0;

 FUNC_1(&VAR_8->update_lock);
 if (VAR_10)
  VAR_8->beep_mask |= (1 << VAR_9);
 else
  VAR_8->beep_mask &= ~(1 << VAR_9);

 if (VAR_9 < 8) {
  VAR_11 = FUNC_5(VAR_8, VAR_1);
  if (VAR_10)
   VAR_11 |= (1 << VAR_9);
  else
   VAR_11 &= ~(1 << VAR_9);
  FUNC_6(VAR_8, VAR_1, VAR_11);
 } else if (VAR_9 < 16) {
  VAR_11 = FUNC_5(VAR_8, VAR_2);
  if (VAR_10)
   VAR_11 |= (1 << (VAR_9 - 8));
  else
   VAR_11 &= ~(1 << (VAR_9 - 8));
  FUNC_6(VAR_8, VAR_2, VAR_11);
 } else {
  VAR_11 = FUNC_5(VAR_8, VAR_3);
  if (VAR_10)
   VAR_11 |= (1 << (VAR_9 - 16));
  else
   VAR_11 &= ~(1 << (VAR_9 - 16));
  FUNC_6(VAR_8, VAR_3, VAR_11);
 }
 FUNC_2(&VAR_8->update_lock);

 return VAR_7;
}
