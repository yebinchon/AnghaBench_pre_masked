
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int phandle ;


 int VAR_0 ;
 struct device_node* FUNC_0 (int const) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int * FUNC_2 (struct device_node*,char*,int *) ;
 struct device_node* VAR_1 ;
 int VAR_2 ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;

__attribute__((used)) static struct device_node *FUNC_5(struct device_node *VAR_3)
{
 struct device_node *VAR_4;
 const phandle *VAR_5;

 if (!FUNC_3(VAR_3))
  return ((void*)0);

 do {
  VAR_5 = FUNC_2(VAR_3, "interrupt-parent", ((void*)0));
  if (VAR_5 == ((void*)0))
   VAR_4 = FUNC_1(VAR_3);
  else {
   if (VAR_2 & VAR_0)
    VAR_4 = FUNC_3(VAR_1);
   else
    VAR_4 = FUNC_0(*VAR_5);
  }
  FUNC_4(VAR_3);
  VAR_3 = VAR_4;
 } while (VAR_4 && FUNC_2(VAR_4, "#interrupt-cells", ((void*)0)) == ((void*)0));

 return VAR_4;
}
