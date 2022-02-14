
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VCOS_UNSIGNED ;
struct TYPE_2__ {int size; char const* description; void* ptr; int guardword; } ;
typedef TYPE_1__ MALLOC_HEADER_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int) ;
 void* FUNC_1 (int) ;

void *FUNC_2(VCOS_UNSIGNED VAR_1, VCOS_UNSIGNED VAR_2, const char *VAR_3)
{
   int VAR_4 = VAR_2 == 0 ? 1 : VAR_2;
   int VAR_5 = VAR_1 + VAR_4 + sizeof(MALLOC_HEADER_T);
   void *VAR_6 = FUNC_1(VAR_5);
   void *VAR_7 = ((void*)0);
   MALLOC_HEADER_T *VAR_8;

   if (VAR_6)
   {
      VAR_7 = (void *)FUNC_0(((char *)VAR_6)+sizeof(MALLOC_HEADER_T), VAR_4);
      VAR_8 = ((MALLOC_HEADER_T *)VAR_7)-1;
      VAR_8->size = VAR_1;
      VAR_8->description = VAR_3;
      VAR_8->guardword = VAR_0;
      VAR_8->ptr = VAR_6;
   }

   return VAR_7;
}
