
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct of_device {int dev; struct device_node* node; } ;
struct device_node {int name; } ;
typedef int atomic_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,char*,unsigned long long,int) ;
 int * FUNC_2 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_3 (struct device_node*,int const*) ;

void FUNC_4(struct of_device *VAR_1)
{
 static atomic_t VAR_2;
 struct device_node *VAR_3 = VAR_1->node;
 const u32 *VAR_4;
 u64 VAR_5;
 int VAR_6;




 VAR_4 = FUNC_2(VAR_3, "reg", ((void*)0));
 if (VAR_4) {
  VAR_5 = FUNC_3(VAR_3, VAR_4);
  if (VAR_5 != VAR_0) {
   FUNC_1(&VAR_1->dev, "%llx.%s",
         (unsigned long long)VAR_5, VAR_3->name);
   return;
  }
 }





 VAR_6 = FUNC_0(1, &VAR_2);
 FUNC_1(&VAR_1->dev, "%s.%d", VAR_3->name, VAR_6 - 1);
}
