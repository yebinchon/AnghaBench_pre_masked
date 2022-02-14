
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SceUID ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*,unsigned int,unsigned int*) ;
 int FUNC_2 (char*,int ,unsigned int,int *) ;
 scalar_t__ FUNC_3 (int ,void**) ;

void *FUNC_4(unsigned int VAR_1, SceUID *VAR_2, unsigned int *VAR_3)
{
 void *VAR_4 = ((void*)0);

 VAR_1 = FUNC_0(VAR_1, 4096);
 *VAR_2 = FUNC_2("fragment_usse", VAR_0, VAR_1, ((void*)0));

 if (FUNC_3(*VAR_2, &VAR_4) < 0)
  return ((void*)0);
 if (FUNC_1(VAR_4, VAR_1, VAR_3) < 0)
  return ((void*)0);

 return VAR_4;
}
