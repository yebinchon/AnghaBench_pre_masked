
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hardware_path {int* bc; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int,struct hardware_path*) ;
 struct device VAR_0 ;

struct device *FUNC_2(struct hardware_path *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_0;
 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  if (VAR_1->bc[VAR_2] == -1)
   continue;
  VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);
  if (!VAR_3)
   return ((void*)0);
 }
 if (FUNC_0(VAR_3))
  return VAR_3;
 else
  return FUNC_1(VAR_3, 6, VAR_1);
}
