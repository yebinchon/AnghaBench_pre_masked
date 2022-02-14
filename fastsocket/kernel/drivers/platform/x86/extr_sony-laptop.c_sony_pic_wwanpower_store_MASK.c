
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int lock; } ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (char const*,int *,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;
 if (VAR_5 > 31)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4, ((void*)0), 10);
 FUNC_1(&VAR_1.lock);
 FUNC_0(VAR_6);
 FUNC_2(&VAR_1.lock);

 return VAR_5;
}
