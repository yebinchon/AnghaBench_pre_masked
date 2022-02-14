
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ ctx; } ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(int VAR_2)
{
   static MMAL_BOOL_T VAR_3 = 0;
   int VAR_4;
   FUNC_1(VAR_2);

   if (VAR_3)
   {
      FUNC_0("Killing program");
      FUNC_2(255);
   }
   VAR_3 = 1;

   FUNC_0("BYE");
   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   {
      FUNC_4(&VAR_0[VAR_4].lock);
      if (VAR_0[VAR_4].ctx)
         FUNC_3(VAR_0[VAR_4].ctx);
      FUNC_5(&VAR_0[VAR_4].lock);
   }
}
