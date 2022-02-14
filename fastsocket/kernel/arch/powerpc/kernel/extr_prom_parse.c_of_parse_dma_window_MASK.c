
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;


 unsigned char* FUNC_0 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_1 (struct device_node*) ;
 scalar_t__ FUNC_2 (struct device_node*) ;
 unsigned long FUNC_3 (scalar_t__ const*,scalar_t__) ;

void FUNC_4(struct device_node *VAR_0, const void *VAR_1,
  unsigned long *VAR_2, unsigned long *VAR_3, unsigned long *VAR_4)
{
 const u32 *VAR_5;
 u32 VAR_6;
 const unsigned char *VAR_7;

 VAR_5 = VAR_1;


 *VAR_2 = *(VAR_5++);

 VAR_7 = FUNC_0(VAR_0, "ibm,#dma-address-cells", ((void*)0));
 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_0, "#address-cells", ((void*)0));

 VAR_6 = VAR_7 ? *(u32 *)VAR_7 : FUNC_1(VAR_0);
 *VAR_3 = FUNC_3(VAR_5, VAR_6);

 VAR_5 += VAR_6;

 VAR_7 = FUNC_0(VAR_0, "ibm,#dma-size-cells", ((void*)0));
 VAR_6 = VAR_7 ? *(u32 *)VAR_7 : FUNC_2(VAR_0);
 *VAR_4 = FUNC_3(VAR_5, VAR_6);
}
