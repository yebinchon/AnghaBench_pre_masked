
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (int *,void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (void*,void*,scalar_t__) ;

void *FUNC_4(void *VAR_1, uint32_t VAR_2)
{
   uint32_t VAR_3;
   void *VAR_4 = ((void*)0);

   if (!VAR_1)
      return FUNC_2(VAR_2);

   if (VAR_2 == 0)
   {
      FUNC_1(VAR_1);
      return ((void*)0);
   }

   VAR_3 = FUNC_0(&VAR_0, VAR_1);

   if (VAR_3 > VAR_2)
      VAR_3 = VAR_2;

   VAR_4 = FUNC_2(VAR_2);

   if (!VAR_4)
      return ((void*)0);

   FUNC_3(VAR_4, VAR_1, VAR_3);
   FUNC_1(VAR_1);

   return VAR_4;
}
