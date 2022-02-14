
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ exclusive; scalar_t__ blocking; } ;
typedef TYPE_1__ wasapi_t ;
typedef size_t ssize_t ;


 size_t FUNC_0 (TYPE_1__*,void const*,size_t) ;
 size_t FUNC_1 (TYPE_1__*,void const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   size_t VAR_3;
   wasapi_t *VAR_4 = (wasapi_t*)VAR_0;

   if (VAR_4->blocking)
   {
      ssize_t VAR_5;
      for (VAR_3 = 0, VAR_5 = -1; VAR_3 < VAR_2; VAR_3 += VAR_5)
      {
         if (VAR_4->exclusive)
            VAR_5 = FUNC_0(VAR_4, (char*)VAR_1 + VAR_3, VAR_2 - VAR_3);
         else
            VAR_5 = FUNC_1(VAR_4, (char*)VAR_1 + VAR_3, VAR_2 - VAR_3);
         if (VAR_5 == -1)
            return -1;
      }
   }
   else if (VAR_4->exclusive)
      VAR_3 = FUNC_0(VAR_4, VAR_1, VAR_2);
   else
      VAR_3 = FUNC_1(VAR_4, VAR_1, VAR_2);

   return VAR_3;
}
