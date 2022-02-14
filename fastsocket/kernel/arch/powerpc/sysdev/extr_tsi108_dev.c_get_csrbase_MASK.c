
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int phys_addr_t ;


 struct device_node* FUNC_0 (int *,char*) ;
 void* FUNC_1 (struct device_node*,char*,unsigned int*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,void const*) ;
 int VAR_0 ;

phys_addr_t FUNC_4(void)
{
 struct device_node *VAR_1;

 if (VAR_0 != -1)
  return VAR_0;

 VAR_1 = FUNC_0(((void*)0), "tsi-bridge");
 if (VAR_1) {
  unsigned int VAR_2;
  const void *VAR_3 = FUNC_1(VAR_1, "reg", &VAR_2);
  VAR_0 = FUNC_3(VAR_1, VAR_3);
  FUNC_2(VAR_1);
 };
 return VAR_0;
}
