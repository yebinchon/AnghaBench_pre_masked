
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct device_node {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct device_node* FUNC_0 (int *,int *,char*) ;
 struct device_node* FUNC_1 (int *,char*) ;
 unsigned int* FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (char*) ;

unsigned int FUNC_5(void)
{
 struct device_node *VAR_2;
 int VAR_3;
 unsigned int VAR_4;
 const u32 *VAR_5;

 VAR_4 = 28;
 VAR_2 = FUNC_0(((void*)0), ((void*)0), "fsl,qe");
 if (!VAR_2) {




  VAR_2 = FUNC_1(((void*)0), "qe");
  if (!VAR_2)
   return VAR_4;
 }

 VAR_5 = FUNC_2(VAR_2, "fsl,qe-num-snums", &VAR_3);
 if (VAR_5 && VAR_3 == sizeof(*VAR_5)) {
  VAR_4 = *VAR_5;
  if ((VAR_4 < 28) || (VAR_4 > VAR_1)) {

   FUNC_4("QE: number of snum is invalid\n");
   return -VAR_0;
  }
 }

 FUNC_3(VAR_2);

 return VAR_4;
}
