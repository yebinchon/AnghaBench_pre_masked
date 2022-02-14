
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ vid; scalar_t__ pid; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__,int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__* VAR_1 ;

bool FUNC_2(int32_t VAR_2, int32_t *VAR_3, int32_t *VAR_4, int32_t *VAR_5)
{
   int VAR_6;

   for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
   {
      if (VAR_2 == VAR_1[VAR_6])
      {
         FUNC_1("[DINPUT]: Found XInput pad at index %d (DINPUT index %d)\n", VAR_2, VAR_6);

         if (VAR_3)
            *VAR_3 = VAR_0[VAR_6].vid;

         if (VAR_4)
            *VAR_4 = VAR_0[VAR_6].pid;

         if (VAR_5)
            *VAR_5 = VAR_6;

         return 1;
      }
   }

   return 0;
}
