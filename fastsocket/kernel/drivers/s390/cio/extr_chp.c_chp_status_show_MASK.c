
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct channel_path {int state; int lock; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;
 struct channel_path* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct channel_path *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 FUNC_0(&VAR_3->lock);
 VAR_4 = VAR_3->state;
 FUNC_1(&VAR_3->lock);

 return VAR_4 ? FUNC_2(VAR_2, "online\n") : FUNC_2(VAR_2, "offline\n");
}
