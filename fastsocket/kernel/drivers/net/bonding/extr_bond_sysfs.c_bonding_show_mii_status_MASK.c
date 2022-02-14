
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bonding {int curr_slave_lock; struct slave* curr_active_slave; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,char*) ;
 struct bonding* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 struct slave *VAR_3;
 struct bonding *VAR_4 = FUNC_3(VAR_0);

 FUNC_0(&VAR_4->curr_slave_lock);
 VAR_3 = VAR_4->curr_active_slave;
 FUNC_1(&VAR_4->curr_slave_lock);

 return FUNC_2(VAR_2, "%s\n", VAR_3 ? "up" : "down");
}
