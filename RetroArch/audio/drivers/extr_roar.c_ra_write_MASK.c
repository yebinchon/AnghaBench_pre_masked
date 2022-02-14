
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ nonblocking; int vss; } ;
typedef TYPE_1__ roar_t ;


 scalar_t__ FUNC_0 (int ,char const*,size_t,int*) ;

__attribute__((used)) static ssize_t FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   int VAR_3;
   size_t VAR_4 = 0;
   roar_t *VAR_5 = (roar_t*)VAR_0;

   if (VAR_2 == 0)
      return 0;

   while (VAR_4 < VAR_2)
   {
      ssize_t VAR_6;
      size_t VAR_7 = VAR_2 - VAR_4;

      if ((VAR_6 = FUNC_0(VAR_5->vss,
                  (const char*)VAR_1 + VAR_4, VAR_7, &VAR_3)) < (ssize_t)VAR_7)
      {
         if (VAR_5->nonblocking)
            return VAR_6;
         else if (VAR_6 < 0)
            return -1;
      }
      VAR_4 += VAR_6;
   }

   return VAR_2;
}
