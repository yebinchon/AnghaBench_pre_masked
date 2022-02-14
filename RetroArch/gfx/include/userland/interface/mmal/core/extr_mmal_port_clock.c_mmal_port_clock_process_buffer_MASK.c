
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_22__ {int length; int data; } ;
struct TYPE_18__ {int request_threshold; int discont_threshold; int update_threshold; int scale; int media_time; int enable; } ;
struct TYPE_21__ {scalar_t__ magic; int id; TYPE_6__* buffer; TYPE_2__ data; } ;
struct TYPE_20__ {int (* event_cb ) (TYPE_3__*,TYPE_5__*) ;int clock; } ;
struct TYPE_19__ {int name; TYPE_1__* priv; } ;
struct TYPE_17__ {TYPE_4__* clock; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_PORT_CLOCK_T ;
typedef TYPE_5__ MMAL_CLOCK_EVENT_T ;
typedef TYPE_6__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,char*) ;


 TYPE_5__ FUNC_2 (int ) ;

 int VAR_0 ;
 scalar_t__ VAR_1 ;





 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_5__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_14(MMAL_PORT_T *VAR_4, MMAL_BUFFER_HEADER_T *VAR_5)
{
   MMAL_PORT_CLOCK_T *VAR_6 = VAR_4->priv->clock;
   MMAL_STATUS_T VAR_7 = VAR_3;
   MMAL_CLOCK_EVENT_T VAR_8 = FUNC_2(VAR_0);

   if (VAR_5->length != sizeof(MMAL_CLOCK_EVENT_T))
   {
      FUNC_0("invalid buffer length %d expected %d",
                VAR_5->length, sizeof(MMAL_CLOCK_EVENT_T));
      return VAR_2;
   }

   FUNC_4(VAR_5);
   FUNC_3(&VAR_8, VAR_5->data, sizeof(MMAL_CLOCK_EVENT_T));
   FUNC_5(VAR_5);

   if (VAR_8.magic != VAR_1)
   {
      FUNC_0("buffer corrupt (magic %4.4s)", (char*)&VAR_8.magic);
      VAR_5->length = 0;
      FUNC_12(VAR_4, VAR_5);
      return VAR_2;
   }

   FUNC_1("port %s id %4.4s", VAR_4->name, (char*)&VAR_8.id);

   switch (VAR_8.id)
   {
   case 135:
      VAR_7 = FUNC_6(VAR_6->clock, VAR_8.data.enable);
      break;
   case 129:
      VAR_7 = FUNC_8(VAR_6->clock, VAR_8.data.media_time);
      break;
   case 130:
      VAR_7 = FUNC_10(VAR_6->clock, VAR_8.data.scale);
      break;
   case 128:
      VAR_7 = FUNC_11(VAR_6->clock, &VAR_8.data.update_threshold);
      break;
   case 134:
      VAR_7 = FUNC_7(VAR_6->clock, &VAR_8.data.discont_threshold);
      break;
   case 131:
      VAR_7 = FUNC_9(VAR_6->clock, &VAR_8.data.request_threshold);
      break;
   case 133:
   case 132:

      break;
   default:
      FUNC_0("invalid event %4.4s", (char*)&VAR_8.id);
      VAR_7 = VAR_2;
      break;
   }

   if (VAR_6->event_cb && VAR_7 == VAR_3)
   {

      VAR_8.buffer = VAR_5;
      VAR_6->event_cb(VAR_4, &VAR_8);
   }
   else
   {

      VAR_5->length = 0;
      FUNC_12(VAR_4, VAR_5);
   }

   return VAR_7;
}
