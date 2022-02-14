
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int index; } ;
typedef int MMAL_PORT_TYPE_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_COMPONENT_T ;


 TYPE_1__* FUNC_0 (int *,int ,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__** FUNC_3 (int,int,char*) ;
 int FUNC_4 (TYPE_1__**) ;

MMAL_PORT_T **FUNC_5(MMAL_COMPONENT_T *VAR_0, unsigned int VAR_1,
   MMAL_PORT_TYPE_T VAR_2, unsigned int VAR_3)
{
   MMAL_PORT_T **VAR_4;
   unsigned int VAR_5;

   VAR_4 = FUNC_3(1, sizeof(MMAL_PORT_T *) * VAR_1, "mmal ports");
   if (!VAR_4)
      return 0;

   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   {
      VAR_4[VAR_5] = FUNC_0(VAR_0, VAR_2, VAR_3);
      if (!VAR_4[VAR_5])
         break;
      VAR_4[VAR_5]->index = VAR_5;
      FUNC_2(VAR_4[VAR_5]);
   }

   if (VAR_5 != VAR_1)
   {
      for (VAR_1 = VAR_5, VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
         FUNC_1(VAR_4[VAR_5]);
      FUNC_4(VAR_4);
      return 0;
   }

   return VAR_4;
}
