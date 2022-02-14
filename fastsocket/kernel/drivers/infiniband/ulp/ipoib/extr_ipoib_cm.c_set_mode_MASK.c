
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct net_device*,char const*) ;
 size_t FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct net_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct net_device *VAR_4 = FUNC_4(VAR_0);
 int VAR_5;

 if (!FUNC_2())
  return FUNC_1();

 VAR_5 = FUNC_0(VAR_4, VAR_2);

 FUNC_3();

 if (!VAR_5)
  return VAR_3;

 return VAR_5;
}
