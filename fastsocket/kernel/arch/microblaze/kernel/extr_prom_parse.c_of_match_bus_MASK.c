
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_bus {scalar_t__ (* match ) (struct device_node*) ;} ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct of_bus*) ;
 int FUNC_1 () ;
 struct of_bus* VAR_0 ;
 scalar_t__ FUNC_2 (struct device_node*) ;

__attribute__((used)) static struct of_bus *FUNC_3(struct device_node *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (!VAR_0[VAR_2].match || VAR_0[VAR_2].match(VAR_1))
   return &VAR_0[VAR_2];
 FUNC_1();
 return ((void*)0);
}
