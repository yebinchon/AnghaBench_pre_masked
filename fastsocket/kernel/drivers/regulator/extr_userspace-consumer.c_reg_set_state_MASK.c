
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userspace_consumer_data {int enabled; int lock; int supplies; int num_supplies; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct device*,char*,...) ;
 struct userspace_consumer_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0, struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct userspace_consumer_data *VAR_4 = FUNC_1(VAR_0);
 bool VAR_5;
 int VAR_6;





 if (FUNC_6(VAR_2, "enabled\n") || FUNC_6(VAR_2, "1"))
  VAR_5 = 1;
 else if (FUNC_6(VAR_2, "disabled\n") || FUNC_6(VAR_2, "0"))
  VAR_5 = 0;
 else {
  FUNC_0(VAR_0, "Configuring invalid mode\n");
  return VAR_3;
 }

 FUNC_2(&VAR_4->lock);
 if (VAR_5 != VAR_4->enabled) {
  if (VAR_5)
   VAR_6 = FUNC_5(VAR_4->num_supplies,
          VAR_4->supplies);
  else
   VAR_6 = FUNC_4(VAR_4->num_supplies,
           VAR_4->supplies);

  if (VAR_6 == 0)
   VAR_4->enabled = VAR_5;
  else
   FUNC_0(VAR_0, "Failed to configure state: %d\n", VAR_6);
 }
 FUNC_3(&VAR_4->lock);

 return VAR_3;
}
