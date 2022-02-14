
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int (* callback ) (TYPE_4__*) ;int * output_queue; } ;
struct TYPE_12__ {scalar_t__ length; int data; } ;
struct TYPE_11__ {size_t index; int name; scalar_t__ userdata; } ;
struct TYPE_10__ {TYPE_4__ wrapper; int sema; } ;
typedef TYPE_1__ MMAL_WRAPPER_PRIVATE_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,TYPE_2__*,TYPE_3__*,int ,int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
   MMAL_WRAPPER_PRIVATE_T *VAR_2 = (MMAL_WRAPPER_PRIVATE_T *)VAR_0->userdata;
   FUNC_0("(%s)%p,%p,%p,%i", VAR_0->name, VAR_0, VAR_1, VAR_1->data, (int)VAR_1->length);


   FUNC_1(VAR_2->wrapper.output_queue[VAR_0->index], VAR_1);
   FUNC_3(&VAR_2->sema);

   if (VAR_2->wrapper.callback)
      VAR_2->wrapper.callback(&VAR_2->wrapper);
}
