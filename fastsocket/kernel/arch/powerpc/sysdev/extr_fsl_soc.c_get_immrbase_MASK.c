
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 struct device_node* FUNC_0 (int *,char*) ;
 int* FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,int const*) ;

phys_addr_t FUNC_4(void)
{
 struct device_node *VAR_1;

 if (VAR_0 != -1)
  return VAR_0;

 VAR_1 = FUNC_0(((void*)0), "soc");
 if (VAR_1) {
  int VAR_2;
  u32 VAR_3;
  const u32 *VAR_4 = FUNC_1(VAR_1, "#address-cells", &VAR_2);

  if (VAR_4 && VAR_2 == 4)
   VAR_3 = *VAR_4;
  else
   VAR_3 = 2;

  VAR_4 = FUNC_1(VAR_1, "ranges", &VAR_2);
  if (VAR_4)
   VAR_0 = FUNC_3(VAR_1, VAR_4 + VAR_3);

  FUNC_2(VAR_1);
 }

 return VAR_0;
}
