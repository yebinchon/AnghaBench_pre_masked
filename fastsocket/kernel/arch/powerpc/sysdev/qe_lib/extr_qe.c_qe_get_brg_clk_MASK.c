
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct device_node {int dummy; } ;


 unsigned int VAR_0 ;
 struct device_node* FUNC_0 (int *,int *,char*) ;
 struct device_node* FUNC_1 (int *,char*) ;
 unsigned int* FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct device_node*) ;

unsigned int FUNC_4(void)
{
 struct device_node *VAR_1;
 int VAR_2;
 const u32 *VAR_3;

 if (VAR_0)
  return VAR_0;

 VAR_1 = FUNC_0(((void*)0), ((void*)0), "fsl,qe");
 if (!VAR_1) {
  VAR_1 = FUNC_1(((void*)0), "qe");
  if (!VAR_1)
   return VAR_0;
 }

 VAR_3 = FUNC_2(VAR_1, "brg-frequency", &VAR_2);
 if (VAR_3 && VAR_2 == sizeof(*VAR_3))
  VAR_0 = *VAR_3;

 FUNC_3(VAR_1);

 return VAR_0;
}
