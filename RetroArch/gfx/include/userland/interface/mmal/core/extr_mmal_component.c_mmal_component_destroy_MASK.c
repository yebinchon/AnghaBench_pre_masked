
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int name; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

MMAL_STATUS_T FUNC_2(MMAL_COMPONENT_T *VAR_1)
{
   if(!VAR_1)
      return VAR_0;

   FUNC_0("%s %d", VAR_1->name, VAR_1->id);

   return FUNC_1(VAR_1);
}
