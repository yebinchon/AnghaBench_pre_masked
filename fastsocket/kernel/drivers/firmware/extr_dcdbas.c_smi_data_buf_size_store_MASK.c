
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (char const*,int *,int) ;
 size_t FUNC_3 (unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
           struct device_attribute *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 ssize_t VAR_6;

 VAR_5 = FUNC_2(VAR_3, ((void*)0), 10);


 FUNC_0(&VAR_0);
 VAR_6 = FUNC_3(VAR_5);
 FUNC_1(&VAR_0);
 if (VAR_6)
  return VAR_6;

 return VAR_4;
}
