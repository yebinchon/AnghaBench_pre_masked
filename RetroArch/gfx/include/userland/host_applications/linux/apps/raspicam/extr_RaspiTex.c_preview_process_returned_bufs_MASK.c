
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int preview_stop; int preview_queue; } ;
typedef TYPE_1__ RASPITEX_STATE ;
typedef int MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(RASPITEX_STATE* VAR_1)
{
   MMAL_BUFFER_HEADER_T *VAR_2;
   int VAR_3 = 0;
   int VAR_4 = 0;

   while ((VAR_2 = FUNC_0(VAR_1->preview_queue)) != ((void*)0))
   {
      if (VAR_1->preview_stop == 0)
      {
         VAR_3 = 1;
         VAR_4 = FUNC_1(VAR_1, VAR_2);
         if (VAR_4 != 0)
         {
            FUNC_2("%s: Error drawing frame. Stopping.", VAR_0);
            VAR_1->preview_stop = 1;
            return VAR_4;
         }
      }
   }





   if (! VAR_3)
      VAR_4 = FUNC_1(VAR_1, ((void*)0));
   return VAR_4;
}
