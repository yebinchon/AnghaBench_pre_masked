
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,int *,char**,char**,int *) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static struct device_node *FUNC_3(char *VAR_0,
        char *VAR_1)
{
 struct device_node *VAR_2 = ((void*)0);
 char *VAR_3;
 char *VAR_4;
 int VAR_5;

 while ((VAR_2 = FUNC_0(VAR_2, "pci"))) {
  VAR_5 = FUNC_1(VAR_2, ((void*)0), &VAR_3, &VAR_4, ((void*)0));
  if (VAR_5 == 0)
   if (!FUNC_2(VAR_0, VAR_3) && !FUNC_2(VAR_1, VAR_4))
    break;
 }

 return VAR_2;
}
