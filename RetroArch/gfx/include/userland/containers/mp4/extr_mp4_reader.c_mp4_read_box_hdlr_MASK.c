
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_16__ {TYPE_2__* format; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
struct TYPE_17__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_18__ {size_t current_track; scalar_t__ brand; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
typedef int VC_CONTAINER_ES_TYPE_T ;
struct TYPE_15__ {int es_type; } ;
struct TYPE_14__ {TYPE_5__* module; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,char*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_9, int64_t VAR_10 )
{
   VC_CONTAINER_MODULE_T *VAR_11 = VAR_9->priv->module;
   VC_CONTAINER_TRACK_T *VAR_12 = VAR_9->tracks[VAR_11->current_track];
   uint32_t VAR_13, VAR_14, VAR_15;
   VC_CONTAINER_ES_TYPE_T VAR_16 = VAR_7;

   if(VAR_10 <= 24) return VAR_4;

   FUNC_5(VAR_9, "version");
   FUNC_3(VAR_9, "flags");

   FUNC_4(VAR_9, "pre-defined");

   VAR_14 = FUNC_0(VAR_9, "handler_type");
   if(VAR_14 == VAR_2) VAR_16 = VAR_8;
   if(VAR_14 == VAR_0) VAR_16 = VAR_5;
   if(VAR_14 == VAR_1) VAR_16 = VAR_6;
   VAR_12->format->es_type = VAR_16;

   for(VAR_13 = 0; VAR_13 < 3; VAR_13++) FUNC_4(VAR_9, "reserved");

   VAR_15 = VAR_10;
   if(VAR_11->brand == VAR_3)
      VAR_15 = FUNC_1(VAR_9, "string_size");

   if(VAR_10 < 0) return VAR_4;
   if(VAR_15 > VAR_10) VAR_15 = VAR_10;

   FUNC_2(VAR_9, VAR_15, "name");

   return FUNC_6(VAR_9);
}
