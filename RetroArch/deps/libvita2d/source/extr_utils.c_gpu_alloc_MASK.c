
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SceUID ;
typedef scalar_t__ SceKernelMemBlockType ;


 unsigned int FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (void*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,unsigned int,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,void**) ;

void *FUNC_4(SceKernelMemBlockType VAR_1, unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4, SceUID *VAR_5)
{
 void *VAR_6;

 if (VAR_1 == VAR_0)
  VAR_2 = FUNC_0(VAR_2, 256*1024);
   else
  VAR_2 = FUNC_0(VAR_2, 4*1024);

 *VAR_5 = FUNC_2("gpu_mem", VAR_1, VAR_2, ((void*)0));

 if (*VAR_5 < 0)
  return ((void*)0);

 if (FUNC_3(*VAR_5, &VAR_6) < 0)
  return ((void*)0);

 if (FUNC_1(VAR_6, VAR_2, VAR_4) < 0)
  return ((void*)0);

 return VAR_6;
}
