
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int (* callback ) (TYPE_4__*) ;int status; } ;
struct TYPE_12__ {scalar_t__ cmd; scalar_t__ data; } ;
struct TYPE_11__ {int name; scalar_t__ userdata; } ;
struct TYPE_10__ {TYPE_4__ wrapper; int sema; } ;
typedef TYPE_1__ MMAL_WRAPPER_PRIVATE_T ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,TYPE_2__*,TYPE_3__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(MMAL_PORT_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2)
{
   MMAL_WRAPPER_PRIVATE_T *VAR_3 = (MMAL_WRAPPER_PRIVATE_T *)VAR_1->userdata;
   FUNC_0("%s(%p),%p,%4.4s", VAR_1->name, VAR_1, VAR_2, (char *)&VAR_2->cmd);

   if (VAR_2->cmd == VAR_0)
   {
      VAR_3->wrapper.status = *(MMAL_STATUS_T *)VAR_2->data;
      FUNC_1(VAR_2);

      FUNC_3(&VAR_3->sema);

      if (VAR_3->wrapper.callback)
         VAR_3->wrapper.callback(&VAR_3->wrapper);
      return;
   }

   FUNC_1(VAR_2);
}
