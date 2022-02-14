
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,int) ;
 void* FUNC_1 (unsigned int,unsigned int*) ;
 int FUNC_2 (char*,unsigned int,unsigned int,unsigned int) ;

void *FUNC_3(unsigned VAR_0, unsigned VAR_1)
{
 unsigned VAR_2;
 void *VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (!VAR_3)
  return 0;

 VAR_1 = FUNC_0(VAR_1, 8);
 if (VAR_1 != VAR_2) {
  FUNC_2("smem_find(%d, %d): wrong size %d\n",
         VAR_0, VAR_1, VAR_2);
  return 0;
 }

 return VAR_3;
}
