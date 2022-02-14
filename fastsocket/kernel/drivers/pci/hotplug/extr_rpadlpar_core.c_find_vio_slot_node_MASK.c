
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,char*) ;
 struct device_node* FUNC_1 (struct device_node*,struct device_node*) ;
 int FUNC_2 (struct device_node*,int *,char**,int *,int *) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static struct device_node *FUNC_4(char *VAR_0)
{
 struct device_node *VAR_1 = FUNC_0(((void*)0), "vdevice");
 struct device_node *VAR_2 = ((void*)0);
 char *VAR_3;
 int VAR_4;

 if (!VAR_1)
  return ((void*)0);

 while ((VAR_2 = FUNC_1(VAR_1, VAR_2))) {
  VAR_4 = FUNC_2(VAR_2, ((void*)0), &VAR_3, ((void*)0), ((void*)0));
  if ((VAR_4 == 0) && (!FUNC_3(VAR_0, VAR_3)))
   break;
 }

 return VAR_2;
}
