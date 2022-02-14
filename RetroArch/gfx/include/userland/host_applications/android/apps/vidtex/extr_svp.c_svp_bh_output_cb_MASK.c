
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ length; int * data; } ;
struct TYPE_10__ {int name; scalar_t__ userdata; } ;
struct TYPE_9__ {int sema; int queue; int wd_timer; } ;
typedef TYPE_1__ SVP_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(MMAL_PORT_T *VAR_2, MMAL_BUFFER_HEADER_T *VAR_3)
{
   SVP_T *VAR_4 = (SVP_T *)VAR_2->userdata;

   if (VAR_3->length == 0)
   {
      FUNC_1("%s: zero-length buffer => EOS", VAR_2->name);
      FUNC_4(VAR_4, VAR_0);
      FUNC_2(VAR_3);
   }
   else if (VAR_3->data == ((void*)0))
   {
      FUNC_0("%s: zero buffer handle", VAR_2->name);
      FUNC_2(VAR_3);
   }
   else
   {

      FUNC_6(&VAR_4->wd_timer, VAR_1);


      FUNC_3(VAR_4->queue, VAR_3);
   }


   FUNC_5(&VAR_4->sema);
}
