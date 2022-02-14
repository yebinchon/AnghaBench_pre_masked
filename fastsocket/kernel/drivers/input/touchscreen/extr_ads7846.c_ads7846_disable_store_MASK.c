
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ads7846 {int lock; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct ads7846*) ;
 int FUNC_1 (struct ads7846*) ;
 struct ads7846* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct ads7846 *VAR_5 = FUNC_2(VAR_1);
 unsigned long VAR_6;

 if (FUNC_5(VAR_3, 10, &VAR_6))
  return -VAR_0;

 FUNC_3(&VAR_5->lock);

 if (VAR_6)
  FUNC_0(VAR_5);
 else
  FUNC_1(VAR_5);

 FUNC_4(&VAR_5->lock);

 return VAR_4;
}
