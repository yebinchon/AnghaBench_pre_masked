
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 FUNC_1("%p", VAR_0);

 if (VAR_0 == ((void*)0))
  FUNC_0("EINVAL");
}
