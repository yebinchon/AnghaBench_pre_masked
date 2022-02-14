
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_class {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct sysdev_class *VAR_1, char *VAR_2)
{
 char *VAR_3;

 if (FUNC_1(VAR_0))
  VAR_3 = "pps";
 else if (FUNC_0(VAR_0))
  VAR_3 = "etr";
 else
  VAR_3 = "local";
 return FUNC_2(VAR_2, "%s\n", VAR_3);
}
