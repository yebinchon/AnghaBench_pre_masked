
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ length; int data; } ;
struct TYPE_11__ {int (* callback ) (TYPE_2__*) ;int queue; } ;
struct TYPE_10__ {int name; scalar_t__ userdata; } ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,TYPE_1__*,TYPE_3__*,int ,int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
   MMAL_CONNECTION_T *VAR_2 = (MMAL_CONNECTION_T *)VAR_0->userdata;

   FUNC_0("(%s)%p,%p,%p,%i", VAR_0->name, VAR_0, VAR_1, VAR_1->data, (int)VAR_1->length);


   FUNC_1(VAR_2->queue, VAR_1);

   if (VAR_2->callback)
      VAR_2->callback(VAR_2);
}
