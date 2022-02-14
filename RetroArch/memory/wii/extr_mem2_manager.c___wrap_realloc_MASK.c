
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 size_t FUNC_0 (int *,void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t) ;
 size_t FUNC_3 (void*) ;
 void* FUNC_4 (void*,size_t) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (size_t) ;
 void* FUNC_7 (void*,size_t) ;
 int VAR_0 ;
 int FUNC_8 (void*,void*,size_t) ;

__attribute__ ((used)) void *FUNC_9(void *VAR_1, size_t VAR_2)
{
   void *VAR_3;

   if (((uint32_t) VAR_1 & 0x10000000) != 0)
   {
      VAR_3 = FUNC_7(VAR_1, VAR_2);
      if (VAR_3 != 0)
         return VAR_3;
      VAR_3 = FUNC_2(VAR_2);
      if (VAR_3 == 0)
         return 0;
      if (VAR_1 != 0)
      {
         size_t VAR_4 = FUNC_0(&VAR_0, VAR_1);
         FUNC_8(VAR_3, VAR_1, VAR_4 < VAR_2 ? VAR_4 : VAR_2);
         FUNC_5(VAR_1);
      }
      return VAR_3;
   }

   VAR_3 = FUNC_4(VAR_1, VAR_2);
   if (VAR_3 != 0)
      return VAR_3;
   VAR_3 = FUNC_6(VAR_2);
   if (VAR_3 == 0)
      return 0;
   if (VAR_1 != 0)
   {
      size_t VAR_5 = FUNC_3(VAR_1);
      FUNC_8(VAR_3, VAR_1, VAR_5 < VAR_2 ? VAR_5 : VAR_2);
      FUNC_1(VAR_1);
   }
   return VAR_3;
}
