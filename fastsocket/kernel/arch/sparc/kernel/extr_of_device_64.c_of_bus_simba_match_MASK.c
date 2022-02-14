
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {char const* name; } ;


 int FUNC_0 (struct device_node*,char*,int *) ;
 char* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_0)
{
 const char *VAR_1 = FUNC_1(VAR_0, "model", ((void*)0));

 if (VAR_1 && !FUNC_2(VAR_1, "SUNW,simba"))
  return 1;




 if (!FUNC_2(VAR_0->name, "pci")) {
  if (!FUNC_0(VAR_0, "ranges", ((void*)0)))
   return 1;
 }

 return 0;
}
