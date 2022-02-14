
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct device_node*) ;

int FUNC_2(void)
{
 struct device_node *VAR_1;

 VAR_1 = FUNC_0(((void*)0), "adb", "chrp,adb0");
 if (VAR_1) {
  FUNC_1(VAR_1);
  return 0;
 }
 return -VAR_0;
}
