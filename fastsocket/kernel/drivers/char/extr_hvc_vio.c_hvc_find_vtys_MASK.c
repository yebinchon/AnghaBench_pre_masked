
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int,int *) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 struct device_node* FUNC_2 (struct device_node*,char*) ;
 int * FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct device_node *VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = FUNC_2(((void*)0), "vty"); VAR_2 != ((void*)0);
   VAR_2 = FUNC_2(VAR_2, "vty")) {
  const uint32_t *VAR_4;




  if (VAR_3 >= VAR_0) {
   FUNC_4(VAR_2);
   break;
  }

  VAR_4 = FUNC_3(VAR_2, "reg", ((void*)0));
  if (!VAR_4)
   continue;

  if (FUNC_1(VAR_2, "hvterm1")) {
   FUNC_0(*VAR_4, VAR_3, &VAR_1);
   ++VAR_3;
  }
 }

 return VAR_3;
}
