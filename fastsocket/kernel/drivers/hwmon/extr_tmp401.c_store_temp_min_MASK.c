
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tmp401_data {int* temp_low; int update_lock; int config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (long,int ) ;
 struct tmp401_data* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3, struct device_attribute
 *VAR_4, const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = FUNC_7(VAR_4)->index;
 struct tmp401_data *VAR_8 = FUNC_5(VAR_3);
 long VAR_9;
 u16 VAR_10;

 if (FUNC_3(VAR_5, 10, &VAR_9))
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_9, VAR_8->config);

 FUNC_1(&VAR_8->update_lock);

 FUNC_0(FUNC_6(VAR_3),
  VAR_2[VAR_7], VAR_10 >> 8);
 FUNC_0(FUNC_6(VAR_3),
  VAR_1[VAR_7], VAR_10 & 0xFF);

 VAR_8->temp_low[VAR_7] = VAR_10;

 FUNC_2(&VAR_8->update_lock);

 return VAR_6;
}
