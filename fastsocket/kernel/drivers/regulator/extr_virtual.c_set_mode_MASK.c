
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_consumer_data {unsigned int mode; int lock; int regulator; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct virtual_consumer_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4, struct device_attribute *VAR_5,
   const char *VAR_6, size_t VAR_7)
{
 struct virtual_consumer_data *VAR_8 = FUNC_1(VAR_4);
 unsigned int VAR_9;
 int VAR_10;





 if (FUNC_5(VAR_6, "fast\n"))
  VAR_9 = VAR_0;
 else if (FUNC_5(VAR_6, "normal\n"))
  VAR_9 = VAR_2;
 else if (FUNC_5(VAR_6, "idle\n"))
  VAR_9 = VAR_1;
 else if (FUNC_5(VAR_6, "standby\n"))
  VAR_9 = VAR_3;
 else {
  FUNC_0(VAR_4, "Configuring invalid mode\n");
  return VAR_7;
 }

 FUNC_2(&VAR_8->lock);
 VAR_10 = FUNC_4(VAR_8->regulator, VAR_9);
 if (VAR_10 == 0)
  VAR_8->mode = VAR_9;
 else
  FUNC_0(VAR_4, "Failed to configure mode: %d\n", VAR_10);
 FUNC_3(&VAR_8->lock);

 return VAR_7;
}
