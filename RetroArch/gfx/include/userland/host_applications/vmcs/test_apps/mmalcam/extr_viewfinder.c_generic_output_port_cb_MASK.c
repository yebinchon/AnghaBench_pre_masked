
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cmd; } ;
struct TYPE_7__ {int name; scalar_t__ userdata; } ;
typedef int MMAL_QUEUE_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(MMAL_PORT_T *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
   if (VAR_4->cmd != 0)
   {
      FUNC_1("%s callback: event %u not supported", VAR_3->name, VAR_4->cmd);
      FUNC_2(VAR_4);
   }
   else
   {
      MMAL_QUEUE_T *VAR_5 = (MMAL_QUEUE_T *)VAR_3->userdata;

      FUNC_0("%s callback", VAR_3->name);
      FUNC_3(VAR_5, VAR_4);
   }

   FUNC_4(&VAR_2, VAR_0, VAR_1);
}
