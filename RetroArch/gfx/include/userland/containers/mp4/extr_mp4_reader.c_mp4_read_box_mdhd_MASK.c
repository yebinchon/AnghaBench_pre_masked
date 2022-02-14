
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_19__ {int timescale; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_20__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {size_t current_track; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {TYPE_2__* priv; } ;
struct TYPE_17__ {TYPE_4__* module; } ;
struct TYPE_16__ {TYPE_6__* module; } ;


 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_5__*,char*) ;
 int FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (TYPE_5__*,char*) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8( VC_CONTAINER_T *VAR_0, int64_t VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_0->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_3 = VAR_0->tracks[VAR_2->current_track]->priv->module;
   uint32_t VAR_4, VAR_5;
   int64_t VAR_6;

   VAR_4 = FUNC_2(VAR_0, "version");
   FUNC_4(VAR_0, "flags");

   if(VAR_4)
   {
      FUNC_6(VAR_0, "creation_time");
      FUNC_6(VAR_0, "modification_time");
      VAR_5 = FUNC_0(VAR_0, "timescale");
      VAR_6 = FUNC_1(VAR_0, "duration");
   }
   else
   {
      FUNC_5(VAR_0, "creation_time");
      FUNC_5(VAR_0, "modification_time");
      VAR_5 = FUNC_0(VAR_0, "timescale");
      VAR_6 = FUNC_0(VAR_0, "duration");
   }

   if(VAR_5) VAR_6 = VAR_6 * 1000000 / VAR_5;
   VAR_3->timescale = VAR_5;

   FUNC_3(VAR_0, "language");
   FUNC_3(VAR_0, "pre_defined");

   return FUNC_7(VAR_0);
}
