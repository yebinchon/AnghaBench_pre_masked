
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (char*) ;
 void* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

u32 FUNC_4(void)
{
 struct device_node *VAR_0;
 unsigned int VAR_1 = 0;

 VAR_0 = FUNC_0("/ibm,dynamic-reconfiguration-memory");
 if (VAR_0) {
  const unsigned long *VAR_2;

  VAR_2 = FUNC_1(VAR_0, "ibm,lmb-size", ((void*)0));
  VAR_1 = VAR_2 ? *VAR_2 : 0;

  FUNC_2(VAR_0);
 } else {
  unsigned int VAR_3 = 0;
  const unsigned int *VAR_4;

  VAR_0 = FUNC_0("/memory@0");
  if (VAR_0) {
   VAR_4 = FUNC_1(VAR_0, "reg", ((void*)0));
   VAR_3 = VAR_4 ? VAR_4[3] : 0;
   FUNC_2(VAR_0);
  }

  if (VAR_3) {



   char VAR_5[64];

   FUNC_3(VAR_5, "/memory@%x", VAR_3);
   VAR_0 = FUNC_0(VAR_5);
   if (VAR_0) {
    VAR_4 = FUNC_1(VAR_0, "reg", ((void*)0));
    VAR_1 = VAR_4 ? VAR_4[3] : 0;
    FUNC_2(VAR_0);
   }
  }
 }

 return VAR_1;
}
