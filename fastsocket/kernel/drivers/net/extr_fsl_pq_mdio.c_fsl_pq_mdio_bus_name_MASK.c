
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct device_node {char* name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (struct device_node*,int ,int *,int *) ;
 scalar_t__ FUNC_1 (struct device_node*,int const*) ;
 int FUNC_2 (char*,int ,char*,char*,unsigned long long) ;

void FUNC_3(char *VAR_2, struct device_node *VAR_3)
{
 const u32 *VAR_4;
 u64 VAR_5 = VAR_1;

 VAR_4 = FUNC_0(VAR_3, 0, ((void*)0), ((void*)0));
 if (VAR_4)
  VAR_5 = FUNC_1(VAR_3, VAR_4);

 FUNC_2(VAR_2, VAR_0, "%s@%llx", VAR_3->name,
  (unsigned long long)VAR_5);
}
