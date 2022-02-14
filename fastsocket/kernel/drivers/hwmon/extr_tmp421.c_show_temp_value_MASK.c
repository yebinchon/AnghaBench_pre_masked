
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmp421_data {int config; int update_lock; int * temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct tmp421_data* FUNC_5 (struct device*) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = FUNC_6(VAR_2)->index;
 struct tmp421_data *VAR_5 = FUNC_5(VAR_1);
 int VAR_6;

 FUNC_0(&VAR_5->update_lock);
 if (VAR_5->config & VAR_0)
  VAR_6 = FUNC_4(VAR_5->temp[VAR_4]);
 else
  VAR_6 = FUNC_3(VAR_5->temp[VAR_4]);
 FUNC_1(&VAR_5->update_lock);

 return FUNC_2(VAR_3, "%d\n", VAR_6);
}
