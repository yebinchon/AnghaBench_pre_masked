
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_master {long enable_pullup; int thread; int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct w1_master* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (char const*,int ,long*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 long VAR_5;
 struct w1_master *VAR_6 = FUNC_0(VAR_1);

 if (FUNC_3(VAR_3, 0, &VAR_5) == -VAR_0)
  return -VAR_0;

 FUNC_1(&VAR_6->mutex);
 VAR_6->enable_pullup = VAR_5;
 FUNC_2(&VAR_6->mutex);
 FUNC_4(VAR_6->thread);

 return VAR_4;
}
