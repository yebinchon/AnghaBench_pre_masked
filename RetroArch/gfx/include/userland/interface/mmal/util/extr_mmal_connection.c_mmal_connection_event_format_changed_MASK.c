
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int capabilities; scalar_t__ buffer_size; scalar_t__ buffer_num; int name; int format; } ;
struct TYPE_18__ {scalar_t__ cmd; } ;
struct TYPE_17__ {TYPE_4__* in; TYPE_4__* out; int name; } ;
struct TYPE_16__ {scalar_t__ buffer_size_min; scalar_t__ buffer_num_min; int format; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,TYPE_4__*,int ) ;
 int FUNC_1 (char*,TYPE_2__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;

MMAL_STATUS_T FUNC_9(MMAL_CONNECTION_T *VAR_4,
   MMAL_BUFFER_HEADER_T *VAR_5)
{
   MMAL_EVENT_FORMAT_CHANGED_T *VAR_6;
   MMAL_STATUS_T VAR_7;

   FUNC_1("%p, %s", VAR_4, VAR_4->name);

   if (VAR_5->cmd != VAR_1)
      return VAR_0;

   VAR_6 = FUNC_5(VAR_5);
   if (!VAR_6)
      return VAR_0;



   if ((VAR_4->in->capabilities & VAR_2) &&
       VAR_6->buffer_size_min <= VAR_4->out->buffer_size &&
       VAR_6->buffer_num_min <= VAR_4->out->buffer_num)
   {
      VAR_7 = FUNC_6(VAR_4->out->format, VAR_6->format);
      if (VAR_7 == VAR_3)
         VAR_7 = FUNC_7(VAR_4->out);
      if (VAR_7 != VAR_3)
      {
         FUNC_0("format commit failed on port %s(%p) (%i)",
                   VAR_4->out->name, VAR_4->out, VAR_7);
         return VAR_7;
      }

      FUNC_2(VAR_5);
      VAR_7 = FUNC_8(VAR_4->in, VAR_5);
      if (VAR_7 != VAR_3)
      {
         FUNC_0("buffer send failed on port %s(%p) (%i)",
                   VAR_4->in->name, VAR_4->in, VAR_7);
         FUNC_3(VAR_5);
         return VAR_7;
      }

      return VAR_3;
   }


   return FUNC_4(VAR_4, VAR_6->format);
}
