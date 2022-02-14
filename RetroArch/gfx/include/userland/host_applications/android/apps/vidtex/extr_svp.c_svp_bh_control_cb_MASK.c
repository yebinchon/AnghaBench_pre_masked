
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int cmd; scalar_t__ data; } ;
struct TYPE_9__ {int name; scalar_t__ userdata; } ;
struct TYPE_8__ {int sema; } ;
typedef TYPE_1__ SVP_T ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,...) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(MMAL_PORT_T *VAR_2, MMAL_BUFFER_HEADER_T *VAR_3)
{
   SVP_T *VAR_4 = (SVP_T *)VAR_2->userdata;

   switch (VAR_3->cmd)
   {
   case 129:
      FUNC_1("%s: EOS", VAR_2->name);
      FUNC_4(VAR_4, VAR_0);
      break;

   case 128:
      FUNC_0("%s: MMAL error: %s", VAR_2->name,
                FUNC_3(*(MMAL_STATUS_T *)VAR_3->data));
      FUNC_4(VAR_4, VAR_1);
      break;

   default:
      FUNC_1("%s: buf %p, event %4.4s", VAR_2->name, VAR_3, (char *)&VAR_3->cmd);
      break;
   }

   FUNC_2(VAR_3);

   FUNC_5(&VAR_4->sema);
}
