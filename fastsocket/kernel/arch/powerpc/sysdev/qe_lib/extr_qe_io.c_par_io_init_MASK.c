
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct device_node*,int ,struct resource*) ;
 int * FUNC_2 (struct device_node*,char*,int *) ;
 int VAR_1 ;

int FUNC_3(struct device_node *VAR_2)
{
 struct resource VAR_3;
 int VAR_4;
 const u32 *VAR_5;


 VAR_4 = FUNC_1(VAR_2, 0, &VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_1 = FUNC_0(VAR_3.start, VAR_3.end - VAR_3.start + 1);

 VAR_5 = FUNC_2(VAR_2, "num-ports", ((void*)0));
 if (VAR_5)
  VAR_0 = *VAR_5;

 return 0;
}
