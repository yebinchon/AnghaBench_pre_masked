
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef unsigned int int64_t ;
struct TYPE_29__ {int is_enabled; TYPE_4__* format; TYPE_3__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_30__ {TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_31__ {int time_offset; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
typedef scalar_t__ VC_CONTAINER_ES_TYPE_T ;
struct TYPE_28__ {int codec; int flags; scalar_t__ es_type; } ;
struct TYPE_27__ {TYPE_2__* module; } ;
struct TYPE_26__ {int b_valid; } ;
struct TYPE_25__ {TYPE_7__* module; } ;
typedef int GUID_T ;


 int FUNC_0 (TYPE_6__*,unsigned int,int *,char*) ;
 unsigned int FUNC_1 (TYPE_6__*,unsigned int,char*) ;
 unsigned int FUNC_2 (TYPE_6__*,unsigned int,char*) ;
 int FUNC_3 (TYPE_6__*,unsigned int,char*) ;
 int FUNC_4 (TYPE_6__*,unsigned int,char*) ;
 int FUNC_5 (TYPE_6__*,unsigned int,char*) ;
 int FUNC_6 (TYPE_6__*,unsigned int) ;
 int FUNC_7 (TYPE_6__*,unsigned int) ;
 unsigned int FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (int) ;

 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (TYPE_6__*,TYPE_5__*,unsigned int) ;
 scalar_t__ FUNC_12 (TYPE_6__*,TYPE_5__*,unsigned int) ;
 TYPE_5__* FUNC_13 (TYPE_6__*,unsigned int,int) ;
 int FUNC_14 (int *,int *,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_15( VC_CONTAINER_T *VAR_9, int64_t VAR_10 )
{
   VC_CONTAINER_STATUS_T VAR_11 = VAR_6;
   VC_CONTAINER_MODULE_T *VAR_12 = VAR_9->priv->module;
   VC_CONTAINER_TRACK_T *VAR_13;
   unsigned int VAR_14, VAR_15;
   VC_CONTAINER_ES_TYPE_T VAR_16 = VAR_4;
   GUID_T VAR_17;
   int64_t VAR_18;

   FUNC_0(VAR_9, VAR_10, &VAR_17, "Stream Type");
   FUNC_4(VAR_9, VAR_10, "Error Correction Type");


   VAR_12->time_offset = FUNC_3(VAR_9, VAR_10, "Time Offset") / FUNC_10(10);
   VAR_14 = FUNC_2(VAR_9, VAR_10, "Type-Specific Data Length");
   FUNC_5(VAR_9, VAR_10, "Error Correction Data Length");
   VAR_15 = FUNC_1(VAR_9, VAR_10, "Flags");
   FUNC_5(VAR_9, VAR_10, "Reserved");

   FUNC_6(VAR_9, VAR_10);


   if(!(VAR_15 & 0x7F)) goto skip;

   if(!FUNC_14(&VAR_17, &VAR_8, sizeof(GUID_T)))
      VAR_16 = VAR_5;
   else if(!FUNC_14(&VAR_17, &VAR_7, sizeof(GUID_T)))
      VAR_16 = VAR_3;


   if(VAR_16 == VAR_4) goto skip;


   if(VAR_14 > VAR_10) return VAR_0;

   VAR_13 = FUNC_13( VAR_9, VAR_15, 1);
   if(!VAR_13) return VAR_1;

   VAR_13->format->es_type = VAR_16;

   VAR_18 = FUNC_8(VAR_9);
   if(VAR_16 == VAR_3)
      VAR_11 = FUNC_12(VAR_9, VAR_13, (int64_t)VAR_14);
   else if(VAR_16 == VAR_5)
      VAR_11 = FUNC_11(VAR_9, VAR_13, (int64_t)VAR_14);
   VAR_10 -= FUNC_8(VAR_9) - VAR_18;

   if(VAR_11) return VAR_11;

   VAR_13->priv->module->b_valid = 1;
   VAR_13->is_enabled = 1;
   VAR_13->format->flags |= VAR_2;


   switch(VAR_13->format->codec)
   {
   case 128:

      VAR_13->format->flags &= ~VAR_2;
      break;
   default: break;
   }

 skip:
   if(VAR_10) FUNC_7(VAR_9, VAR_10);
   return FUNC_9(VAR_9);
}
