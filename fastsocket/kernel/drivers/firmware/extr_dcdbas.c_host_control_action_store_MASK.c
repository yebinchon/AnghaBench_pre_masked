
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct apm_cmd {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int *,int) ;
 size_t FUNC_3 (int) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 ssize_t VAR_6;


 FUNC_0(&VAR_1);
 VAR_6 = FUNC_3(sizeof(struct apm_cmd));
 FUNC_1(&VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_0 = FUNC_2(VAR_4, ((void*)0), 10);
 return VAR_5;
}
