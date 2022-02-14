
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int length; int data; } ;
struct TYPE_18__ {int id; } ;
struct TYPE_17__ {TYPE_2__* priv; int name; } ;
struct TYPE_16__ {TYPE_1__* clock; } ;
struct TYPE_15__ {int queue; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_CLOCK_EVENT_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,TYPE_4__ const*,int) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 TYPE_5__* FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_5__*) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_9(MMAL_PORT_T *VAR_2, const MMAL_CLOCK_EVENT_T *VAR_3)
{
   MMAL_STATUS_T VAR_4;
   MMAL_BUFFER_HEADER_T *VAR_5;

   VAR_5 = FUNC_6(VAR_2->priv->clock->queue);
   if (!VAR_5)
   {
      FUNC_1("%s: no free event buffers available for event %4.4s", VAR_2->name, (const char*)&VAR_3->id);
      return VAR_0;
   }

   VAR_4 = FUNC_3(VAR_5);
   if (VAR_4 != VAR_1)
   {
      FUNC_0("failed to lock buffer %s", FUNC_8(VAR_4));
      FUNC_7(VAR_2->priv->clock->queue, VAR_5);
      goto end;
   }
   VAR_5->length = sizeof(MMAL_CLOCK_EVENT_T);
   FUNC_2(VAR_5->data, VAR_3, VAR_5->length);
   FUNC_4(VAR_5);

   FUNC_5(VAR_2, VAR_5);

end:
   return VAR_4;
}
