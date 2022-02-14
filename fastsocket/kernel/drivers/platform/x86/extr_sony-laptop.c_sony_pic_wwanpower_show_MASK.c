
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int wwan_power; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 ssize_t VAR_5;
 FUNC_0(&VAR_1.lock);
 VAR_5 = FUNC_2(VAR_4, VAR_0, "%d\n", VAR_1.wwan_power);
 FUNC_1(&VAR_1.lock);
 return VAR_5;
}
