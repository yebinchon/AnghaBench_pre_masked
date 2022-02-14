
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ length; int data; } ;
struct TYPE_8__ {int name; } ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,TYPE_1__*,TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
   FUNC_0("(%s)%p,%p,%p,%i", VAR_0->name, VAR_0, VAR_1, VAR_1->data, (int)VAR_1->length);


   FUNC_1(VAR_1);
}
