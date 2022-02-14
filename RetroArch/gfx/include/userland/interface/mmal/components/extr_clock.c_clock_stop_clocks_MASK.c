
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int clock_num; TYPE_1__** clock; } ;
struct TYPE_6__ {int index; scalar_t__ is_enabled; } ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(MMAL_COMPONENT_T *VAR_1)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_1->clock_num; ++VAR_2)
   {
      MMAL_PORT_T *VAR_3 = VAR_1->clock[VAR_2];
      if (VAR_3->is_enabled)
      {
         FUNC_0("stopping clock %d", VAR_3->index);
         FUNC_2(VAR_3);
         FUNC_1(VAR_3, VAR_0);
      }
   }
}
