
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int int32_t ;
struct TYPE_2__ {int* refcounts; scalar_t__* screens; int lock; } ;
typedef scalar_t__ DISPMANX_DISPLAY_HANDLE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
int32_t FUNC_4(uint32_t VAR_2, DISPMANX_DISPLAY_HANDLE_T *VAR_3)
{
   int VAR_4 = -1;
   FUNC_2(&VAR_1.lock);

   if (VAR_1.refcounts[VAR_2] != 0)
   {
      *VAR_3 = VAR_1.screens[VAR_2];
      VAR_1.refcounts[VAR_2]++;
      VAR_4 = 0;
   }
   else
   {
      DISPMANX_DISPLAY_HANDLE_T VAR_5 = FUNC_1(VAR_2);
      if (VAR_5 == VAR_0)
      {
         FUNC_0("Could not open dispmanx display %d", VAR_2);
         VAR_4 = -1;
         goto finish;
      }
      VAR_1.screens[VAR_2] = VAR_5;
      VAR_1.refcounts[VAR_2] = 1;
      *VAR_3 = VAR_5;
      VAR_4 = 0;
   }
finish:
   FUNC_3(&VAR_1.lock);
   return VAR_4;
}
