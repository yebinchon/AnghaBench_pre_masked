
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tmp401_data {int update_lock; int * temp_crit; int config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (long,int ) ;
 struct tmp401_data* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2, struct device_attribute
 *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_7(VAR_3)->index;
 struct tmp401_data *VAR_7 = FUNC_5(VAR_2);
 long VAR_8;
 u8 VAR_9;

 if (FUNC_3(VAR_4, 10, &VAR_8))
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_8, VAR_7->config);

 FUNC_1(&VAR_7->update_lock);

 FUNC_0(FUNC_6(VAR_2),
  VAR_1[VAR_6], VAR_9);

 VAR_7->temp_crit[VAR_6] = VAR_9;

 FUNC_2(&VAR_7->update_lock);

 return VAR_5;
}
