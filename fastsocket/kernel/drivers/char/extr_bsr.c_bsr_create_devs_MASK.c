
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,int *,char*) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_0)
{
 int VAR_1;

 while (VAR_0) {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1) {
   FUNC_2(VAR_0);
   return VAR_1;
  }
  VAR_0 = FUNC_1(VAR_0, ((void*)0), "ibm,bsr");
 }
 return 0;
}
