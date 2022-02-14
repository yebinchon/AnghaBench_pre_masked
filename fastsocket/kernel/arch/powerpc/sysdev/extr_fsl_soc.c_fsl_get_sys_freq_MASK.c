
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,char*) ;
 int* FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (struct device_node*) ;
 int VAR_0 ;

u32 FUNC_3(void)
{
 struct device_node *VAR_1;
 const u32 *VAR_2;
 int VAR_3;

 if (VAR_0 != -1)
  return VAR_0;

 VAR_1 = FUNC_0(((void*)0), "soc");
 if (!VAR_1)
  return -1;

 VAR_2 = FUNC_1(VAR_1, "clock-frequency", &VAR_3);
 if (!VAR_2 || VAR_3 != sizeof(*VAR_2) || *VAR_2 == 0)
  VAR_2 = FUNC_1(VAR_1, "bus-frequency", &VAR_3);

 if (VAR_2 && VAR_3 == sizeof(*VAR_2))
  VAR_0 = *VAR_2;

 FUNC_2(VAR_1);
 return VAR_0;
}
