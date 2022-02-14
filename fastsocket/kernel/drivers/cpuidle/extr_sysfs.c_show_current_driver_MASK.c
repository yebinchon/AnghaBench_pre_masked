
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_class {int dummy; } ;
struct cpuidle_driver {char* name; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct cpuidle_driver* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct sysdev_class *VAR_1,
       char *VAR_2)
{
 ssize_t VAR_3;
 struct cpuidle_driver *VAR_4 = FUNC_0();

 FUNC_1(&VAR_0);
 if (VAR_4)
  VAR_3 = FUNC_3(VAR_2, "%s\n", VAR_4->name);
 else
  VAR_3 = FUNC_3(VAR_2, "none\n");
 FUNC_2(&VAR_0);

 return VAR_3;
}
