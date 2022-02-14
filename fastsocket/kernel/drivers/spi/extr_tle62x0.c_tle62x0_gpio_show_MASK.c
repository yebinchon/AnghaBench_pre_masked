
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tle62x0_state {int gpio_state; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct tle62x0_state* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int) ;
 int FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct tle62x0_state *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = FUNC_4(VAR_2);
 int VAR_6;

 FUNC_1(&VAR_4->lock);
 VAR_6 = (VAR_4->gpio_state >> VAR_5) & 1;
 FUNC_2(&VAR_4->lock);

 return FUNC_3(VAR_3, VAR_0, "%d", VAR_6);
}
