
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (char*) ;
 char* FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (struct device_node*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct device_node *VAR_0 = ((void*)0);
 const char *VAR_1, *VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 VAR_0 = FUNC_0("/rtas");
 if (!VAR_0)
  return 0;

 VAR_1 = FUNC_1(VAR_0, "ibm,hypertas-functions", &VAR_3);
 if (!VAR_1) {
  FUNC_2(VAR_0);
  return 0;
 }


 for (VAR_2 = VAR_1; VAR_2 < VAR_1 + VAR_3; VAR_2 += FUNC_3(VAR_2) + 1) {
  if (!FUNC_4("hcall-best-energy-1", VAR_2, 19)) {
   VAR_4 = 1;
   break;
  }
 }
 FUNC_2(VAR_0);
 return VAR_4;
}
