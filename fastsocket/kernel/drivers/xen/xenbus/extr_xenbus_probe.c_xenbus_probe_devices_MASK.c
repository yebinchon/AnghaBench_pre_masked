
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_bus_type {int root; } ;


 scalar_t__ FUNC_0 (char**) ;
 int FUNC_1 (char**) ;
 int VAR_0 ;
 int FUNC_2 (char**) ;
 char** FUNC_3 (int ,int ,char*,unsigned int*) ;
 int FUNC_4 (struct xen_bus_type*,char*) ;

int FUNC_5(struct xen_bus_type *VAR_1)
{
 int VAR_2 = 0;
 char **VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_3 = FUNC_3(VAR_0, VAR_1->root, "", &VAR_5);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_2 = FUNC_4(VAR_1, VAR_3[VAR_4]);
  if (VAR_2)
   break;
 }
 FUNC_2(VAR_3);
 return VAR_2;
}
