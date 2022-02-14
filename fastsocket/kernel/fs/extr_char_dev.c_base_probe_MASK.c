
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int ,...) ;

__attribute__((used)) static struct kobject *FUNC_3(dev_t VAR_0, int *VAR_1, void *VAR_2)
{
 if (FUNC_2("char-major-%d-%d", FUNC_0(VAR_0), FUNC_1(VAR_0)) > 0)

  FUNC_2("char-major-%d", FUNC_0(VAR_0));
 return ((void*)0);
}
