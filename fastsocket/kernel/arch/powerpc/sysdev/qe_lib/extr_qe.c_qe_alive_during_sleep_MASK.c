
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,int *,char*) ;

int FUNC_1(void)
{
 static int VAR_0 = -1;

 if (VAR_0 != -1)
  return VAR_0;

 VAR_0 = !FUNC_0(((void*)0), ((void*)0), "fsl,mpc8569-pmc");

 return VAR_0;
}
