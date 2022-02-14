
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int buffer; int latency; int request_threshold; int discont_threshold; int update_threshold; int scale; } ;
struct TYPE_5__ {int id; TYPE_2__ data; } ;
struct TYPE_7__ {TYPE_1__ event; int port; } ;
typedef int MMAL_COMPONENT_T ;
typedef int MMAL_BOOL_T ;
typedef TYPE_3__ CLOCK_PORT_EVENT_T ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_7(MMAL_COMPONENT_T *VAR_3)
{
   CLOCK_PORT_EVENT_T VAR_4;

   if (FUNC_0(VAR_3, &VAR_4) != VAR_1)
      return VAR_0;


   switch (VAR_4.event.id)
   {
   case 129:
      FUNC_5(VAR_3, VAR_4.event.data.scale);
      break;
   case 128:
      FUNC_6(VAR_3, &VAR_4.event.data.update_threshold);
      break;
   case 133:
      FUNC_1(VAR_3, &VAR_4.event.data.discont_threshold);
      break;
   case 130:
      FUNC_4(VAR_3, &VAR_4.event.data.request_threshold);
      break;
   case 131:
      FUNC_3(VAR_3, &VAR_4.event.data.latency);
      break;
   case 132:
      FUNC_2(VAR_3, VAR_4.port, &VAR_4.event.data.buffer);
      break;
   default:
      break;
   }

   return VAR_2;
}
