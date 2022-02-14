
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int status; } ;
struct TYPE_11__ {scalar_t__ cmd; scalar_t__ data; } ;
struct TYPE_10__ {int name; scalar_t__ userdata; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;
typedef TYPE_3__ MMALPLAY_T ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,int ,TYPE_1__*,TYPE_2__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(MMAL_PORT_T *VAR_2, MMAL_BUFFER_HEADER_T *VAR_3)
{
   MMALPLAY_T *VAR_4 = (MMALPLAY_T *)VAR_2->userdata;
   FUNC_1("%s(%p),%p,%4.4s", VAR_2->name, VAR_2, VAR_3, (char *)&VAR_3->cmd);

   if (VAR_3->cmd == VAR_1 || VAR_3->cmd == VAR_0)
   {
      if (VAR_3->cmd == VAR_1)
      {
         FUNC_0("error event from %s: %s", VAR_2->name,
                  FUNC_3(*(MMAL_STATUS_T*)VAR_3->data));
         VAR_4->status = *(MMAL_STATUS_T *)VAR_3->data;
      }
      else if (VAR_3->cmd == VAR_0)
         FUNC_0("%s: EOS received", VAR_2->name);
      FUNC_4(VAR_4);
   }

   FUNC_2(VAR_3);
}
