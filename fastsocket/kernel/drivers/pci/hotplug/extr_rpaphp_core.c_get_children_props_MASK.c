
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int* FUNC_0 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_1, const int **VAR_2,
  const int **VAR_3, const int **VAR_4,
  const int **VAR_5)
{
 const int *VAR_6, *VAR_7, *VAR_8, *VAR_9;

 VAR_6 = FUNC_0(VAR_1, "ibm,drc-indexes", ((void*)0));
 VAR_7 = FUNC_0(VAR_1, "ibm,drc-names", ((void*)0));
 VAR_8 = FUNC_0(VAR_1, "ibm,drc-types", ((void*)0));
 VAR_9 = FUNC_0(VAR_1, "ibm,drc-power-domains", ((void*)0));

 if (!VAR_6 || !VAR_7 || !VAR_8 || !VAR_9) {

  return -VAR_0;
 }
 if (VAR_2)
  *VAR_2 = VAR_6;
 if (VAR_3)

  *VAR_3 = VAR_7;
 if (VAR_4)

  *VAR_4 = VAR_8;
 if (VAR_5)
  *VAR_5 = VAR_9;

 return 0;
}
