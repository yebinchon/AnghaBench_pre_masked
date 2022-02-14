
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_15__ {TYPE_2__* format; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
struct TYPE_16__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {size_t current_track; scalar_t__ brand; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_14__ {scalar_t__ es_type; } ;
struct TYPE_13__ {TYPE_5__* module; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (TYPE_4__*,int,char*) ;
 int FUNC_3 (TYPE_4__*,char const*,int,char*) ;
 int FUNC_4 (TYPE_4__*,int ,char*) ;
 int FUNC_5 (TYPE_4__*,int ,char*) ;
 int FUNC_6 (TYPE_4__*,int,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_4 )
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_4->priv->module;
   VC_CONTAINER_TRACK_T *VAR_6 = VAR_4->tracks[VAR_5->current_track];
   uint32_t VAR_7, VAR_8, VAR_9 = 0;
   const char *VAR_10;

   if(VAR_6->format->es_type == VAR_3) VAR_9 = FUNC_1('v','i','d','e');
   if(VAR_6->format->es_type == VAR_1) VAR_9 = FUNC_1('s','o','u','n');
   if(VAR_6->format->es_type == VAR_2) VAR_9 = FUNC_1('t','e','x','t');

   FUNC_6(VAR_4, 0, "version");
   FUNC_4(VAR_4, 0, "flags");

   if(VAR_5->brand == VAR_0)
      FUNC_2(VAR_4, FUNC_1('m','h','l','r'), "component_type");
   else
      FUNC_5(VAR_4, 0, "pre-defined");

   FUNC_2(VAR_4, VAR_9, "handler_type");
   for(VAR_7 = 0; VAR_7 < 3; VAR_7++)
      FUNC_5(VAR_4, 0, "reserved");

   if(VAR_6->format->es_type == VAR_3)
   { VAR_10 = "Video Media Handler"; VAR_8 = sizeof("Video Media Handler"); }
   else if(VAR_6->format->es_type == VAR_1)
   { VAR_10 = "Audio Media Handler"; VAR_8 = sizeof("Audio Media Handler"); }
   else if(VAR_6->format->es_type == VAR_2)
   { VAR_10 = "Text Media Handler"; VAR_8 = sizeof("Text Media Handler"); }
   else { VAR_10 = ""; VAR_8 = sizeof(""); }

   if(VAR_5->brand == VAR_0)
   { VAR_8--; FUNC_6(VAR_4, VAR_8, "string_size"); }

   FUNC_3(VAR_4, VAR_10, VAR_8, "name");

   return FUNC_0(VAR_4);
}
