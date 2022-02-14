
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int component; TYPE_5__* priv; TYPE_3__* format; } ;
struct TYPE_12__ {TYPE_4__* module; } ;
struct TYPE_11__ {scalar_t__ needs_configuring; } ;
struct TYPE_10__ {scalar_t__ type; scalar_t__ encoding; TYPE_2__* es; } ;
struct TYPE_8__ {int channels; int bits_per_sample; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;


 int FUNC_0 (char*,char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_6)
{
   int VAR_7 = 0;

   if (VAR_6->format->type == VAR_4 &&
       VAR_6->format->encoding == VAR_3 &&
       VAR_6->format->es->audio.channels == 2 &&
       VAR_6->format->es->audio.bits_per_sample == 16)
      VAR_7 = 1;
   if (VAR_6->format->type == VAR_4 &&
       (VAR_6->format->encoding == VAR_1 ||
        VAR_6->format->encoding == VAR_2))
      VAR_7 = 1;

   if (!VAR_7)
   {
      FUNC_0("invalid format %4.4s, %ichan, %ibps",
         (char *)&VAR_6->format->encoding, VAR_6->format->es->audio.channels,
         VAR_6->format->es->audio.bits_per_sample);
      return VAR_0;
   }

   VAR_6->priv->module->needs_configuring = 0;
   FUNC_1(VAR_6->component);
   return VAR_5;
}
