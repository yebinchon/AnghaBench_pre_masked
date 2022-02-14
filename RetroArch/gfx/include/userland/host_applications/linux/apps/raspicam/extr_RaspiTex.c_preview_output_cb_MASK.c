
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ length; int * data; } ;
struct TYPE_9__ {int name; scalar_t__ userdata; } ;
struct TYPE_8__ {int preview_stop; int preview_queue; } ;
typedef TYPE_1__ RASPITEX_STATE ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
   RASPITEX_STATE *VAR_2 = (RASPITEX_STATE*) VAR_0->userdata;

   if (VAR_1->length == 0)
   {
      FUNC_2("%s: zero-length buffer => EOS", VAR_0->name);
      VAR_2->preview_stop = 1;
      FUNC_0(VAR_1);
   }
   else if (VAR_1->data == ((void*)0))
   {
      FUNC_2("%s: zero buffer handle", VAR_0->name);
      FUNC_0(VAR_1);
   }
   else
   {



      FUNC_1(VAR_2->preview_queue, VAR_1);
   }
}
