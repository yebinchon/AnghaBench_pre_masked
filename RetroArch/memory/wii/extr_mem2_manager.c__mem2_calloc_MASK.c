
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 void* FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;

void *FUNC_2(uint32_t VAR_0, uint32_t VAR_1)
{
   void *VAR_2 = FUNC_0(VAR_0 * VAR_1);

   if (!VAR_2)
      return ((void*)0);

   FUNC_1(VAR_2, 0, VAR_0 * VAR_1);
   return VAR_2;
}
