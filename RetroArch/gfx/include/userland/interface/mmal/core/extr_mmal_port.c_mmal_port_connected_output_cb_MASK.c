
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ cmd; int length; int alloc_size; int data; } ;
struct TYPE_19__ {int format; } ;
struct TYPE_18__ {int name; scalar_t__ is_enabled; int component; int format; TYPE_2__* priv; } ;
struct TYPE_17__ {TYPE_1__* core; } ;
struct TYPE_16__ {TYPE_3__* connected_port; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,scalar_t__,...) ;
 int FUNC_1 (char*,TYPE_5__*,TYPE_3__*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 TYPE_4__* FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(MMAL_PORT_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2)
{
   MMAL_PORT_T* VAR_3 = VAR_1->priv->core->connected_port;
   MMAL_STATUS_T VAR_4;

   FUNC_1("buffer %p from connected output port %p: data %p, alloc_size %u, length %u",
             VAR_2, VAR_1, VAR_2->data, VAR_2->alloc_size, VAR_2->length);

   if (VAR_2->cmd)
   {
      MMAL_EVENT_FORMAT_CHANGED_T *VAR_5 = FUNC_4(VAR_2);


      if (VAR_5)
      {

         VAR_4 = FUNC_5(VAR_1->format, VAR_5->format);
         if (VAR_4 == VAR_0)
            VAR_4 = FUNC_6(VAR_1);
         if (VAR_4 != VAR_0)
            FUNC_0("format commit failed on port %s (%i)", VAR_1->name, VAR_4);


         if (VAR_4 == VAR_0)
            VAR_4 = FUNC_7(VAR_3, VAR_2);

         if (VAR_4 != VAR_0)
         {
            FUNC_3(VAR_1->component, VAR_4);
            FUNC_2(VAR_2);
         }
         return;
      }


      FUNC_2(VAR_2);
   }
   else
   {
      if (VAR_1->is_enabled)
      {

         VAR_4 = FUNC_7(VAR_3, VAR_2);
         if (VAR_4 != VAR_0)
         {
            FUNC_0("%s could not send buffer on port %s (%s)",
                      VAR_1->name, VAR_3->name, FUNC_8(VAR_4));
            FUNC_2(VAR_2);
         }
      }
      else
      {



         FUNC_2(VAR_2);
      }
   }
}
