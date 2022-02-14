
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_14__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_15__ {int timescale; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_13__ {TYPE_3__* module; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8( VC_CONTAINER_T *VAR_0, int64_t VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_0->priv->module;
   uint32_t VAR_3, VAR_4;
   int64_t VAR_5;

   VAR_4 = FUNC_2(VAR_0, "version");
   FUNC_4(VAR_0, "flags");

   if(VAR_4)
   {
      FUNC_6(VAR_0, "creation_time");
      FUNC_6(VAR_0, "modification_time");
      FUNC_5(VAR_0, "track_ID");
      FUNC_5(VAR_0, "reserved");
      VAR_5 = FUNC_1(VAR_0, "duration");
   }
   else
   {
      FUNC_5(VAR_0, "creation_time");
      FUNC_5(VAR_0, "modification_time");
      FUNC_5(VAR_0, "track_ID");
      FUNC_5(VAR_0, "reserved");
      VAR_5 = FUNC_0(VAR_0, "duration");
   }

   if(VAR_2->timescale)
      VAR_5 = VAR_5 * 1000000 / VAR_2->timescale;

   for(VAR_3 = 0; VAR_3 < 2; VAR_3++) FUNC_5(VAR_0, "reserved");
   FUNC_3(VAR_0, "layer");
   FUNC_3(VAR_0, "alternate_group");
   FUNC_3(VAR_0, "volume");
   FUNC_3(VAR_0, "reserved");
   for(VAR_3 = 0; VAR_3 < 9; VAR_3++) FUNC_5(VAR_0, "matrix");

   FUNC_5(VAR_0, "width");
   FUNC_5(VAR_0, "height");

   return FUNC_7(VAR_0);
}
