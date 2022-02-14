
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int encoding_string ;
struct TYPE_17__ {scalar_t__ type; scalar_t__ buffer_size; scalar_t__ buffer_size_min; scalar_t__ buffer_num; scalar_t__ buffer_num_min; TYPE_4__* component; TYPE_3__* priv; int name; TYPE_2__* format; scalar_t__ index; } ;
struct TYPE_16__ {unsigned int output_num; TYPE_5__** output; int name; } ;
struct TYPE_15__ {int (* pf_set_format ) (TYPE_5__*) ;TYPE_1__* core; } ;
struct TYPE_14__ {scalar_t__ encoding; scalar_t__ type; } ;
struct TYPE_13__ {TYPE_2__* format_ptr_copy; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PORT_T ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*,TYPE_5__*,...) ;
 int FUNC_2 (char*,int ,int,int,TYPE_5__*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (TYPE_5__*) ;

MMAL_STATUS_T FUNC_7(MMAL_PORT_T *VAR_4)
{
   MMAL_STATUS_T VAR_5;
   char VAR_6[16];

   if (!VAR_4 || !VAR_4->priv)
   {
      FUNC_1("invalid port (%p/%p)", VAR_4, VAR_4 ? VAR_4->priv : ((void*)0));
      return VAR_1;
   }

   if (VAR_4->format != VAR_4->priv->core->format_ptr_copy)
   {
      FUNC_1("%s: port format has been overwritten, resetting %p to %p",
            VAR_4->name, VAR_4->format, VAR_4->priv->core->format_ptr_copy);
      VAR_4->format = VAR_4->priv->core->format_ptr_copy;
      return VAR_0;
   }

   if (VAR_4->format->encoding == 0)
      FUNC_5(VAR_6, sizeof(VAR_6), "<NO-FORMAT>");
   else
      FUNC_5(VAR_6, sizeof(VAR_6), "%4.4s", (char*)&VAR_4->format->encoding);

   FUNC_2("%s(%i:%i) port %p format %i:%s",
             VAR_4->component->name, (int)VAR_4->type, (int)VAR_4->index, VAR_4,
             (int)VAR_4->format->type, VAR_6);

   if (!VAR_4->priv->pf_set_format)
   {
      FUNC_1("%s: no component implementation", VAR_4->name);
      return VAR_2;
   }

   FUNC_0(VAR_4);
   VAR_5 = VAR_4->priv->pf_set_format(VAR_4);
   FUNC_4(VAR_4);


   if (VAR_4->buffer_size < VAR_4->buffer_size_min)
      VAR_4->buffer_size = VAR_4->buffer_size_min;
   if (VAR_4->buffer_num < VAR_4->buffer_num_min)
      VAR_4->buffer_num = VAR_4->buffer_num_min;

   if (VAR_4->type == VAR_3)
   {
      MMAL_PORT_T **VAR_7 = VAR_4->component->output;
      unsigned int VAR_8;

      for (VAR_8 = 0; VAR_8 < VAR_4->component->output_num; VAR_8++)
      {
         if (VAR_7[VAR_8]->buffer_size < VAR_7[VAR_8]->buffer_size_min)
            VAR_7[VAR_8]->buffer_size = VAR_7[VAR_8]->buffer_size_min;
         if (VAR_7[VAR_8]->buffer_num < VAR_7[VAR_8]->buffer_num_min)
            VAR_7[VAR_8]->buffer_num = VAR_7[VAR_8]->buffer_num_min;
      }
   }

   FUNC_3(VAR_4);
   return VAR_5;
}
