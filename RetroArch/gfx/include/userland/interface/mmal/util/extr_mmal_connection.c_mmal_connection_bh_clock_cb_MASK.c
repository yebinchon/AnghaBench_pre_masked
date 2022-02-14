
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ length; int data; } ;
struct TYPE_12__ {TYPE_1__* in; TYPE_1__* out; } ;
struct TYPE_11__ {scalar_t__ is_enabled; int name; scalar_t__ userdata; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,int ,TYPE_1__*,TYPE_3__*,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(MMAL_PORT_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2)
{
   MMAL_STATUS_T VAR_3 = VAR_0;
   MMAL_CONNECTION_T *VAR_4 = (MMAL_CONNECTION_T *)VAR_1->userdata;
   MMAL_PORT_T *VAR_5 = (VAR_1 == VAR_4->in) ? VAR_4->out : VAR_4->in;

   FUNC_1("(%s)%p,%p,%p,%i", VAR_1->name, VAR_1, VAR_2, VAR_2->data, (int)VAR_2->length);

   if (VAR_5->is_enabled)
   {
      VAR_3 = FUNC_3(VAR_5, VAR_2);
      if (VAR_3 != VAR_0)
      {
         FUNC_0("error sending buffer to clock port (%i)", VAR_3);
         FUNC_2(VAR_2);
      }
   }
   else
   {
      FUNC_2(VAR_2);
   }
}
