
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (int *,char*) ;
 int* FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct device_node *VAR_1 = ((void*)0);
 int VAR_2;
 const int *VAR_3;

 VAR_0 = 1;

 VAR_1 = FUNC_0(((void*)0), "cpu");
 VAR_3 = FUNC_1(VAR_1, "ibm,ppc-interrupt-server#s", &VAR_2);
 if (VAR_3)
  VAR_0 = VAR_2 / sizeof(int);

 FUNC_2(VAR_1);
}
