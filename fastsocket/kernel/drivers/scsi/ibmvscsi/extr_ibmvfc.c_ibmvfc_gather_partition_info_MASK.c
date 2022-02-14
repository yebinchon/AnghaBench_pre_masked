
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {unsigned int partition_number; int partition_name; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (char*) ;
 void* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_4(struct ibmvfc_host *VAR_0)
{
 struct device_node *VAR_1;
 const char *VAR_2;
 const unsigned int *VAR_3;

 VAR_1 = FUNC_0("/");
 if (!VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_1, "ibm,partition-name", ((void*)0));
 if (VAR_2)
  FUNC_3(VAR_0->partition_name, VAR_2, sizeof(VAR_0->partition_name));
 VAR_3 = FUNC_1(VAR_1, "ibm,partition-no", ((void*)0));
 if (VAR_3)
  VAR_0->partition_number = *VAR_3;
 FUNC_2(VAR_1);
}
