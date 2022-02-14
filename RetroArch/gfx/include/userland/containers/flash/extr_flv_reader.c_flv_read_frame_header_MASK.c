
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_18__ {unsigned int tracks_num; TYPE_5__* priv; TYPE_2__** tracks; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef scalar_t__ VC_CONTAINER_ES_TYPE_T ;
struct TYPE_17__ {TYPE_4__* module; } ;
struct TYPE_15__ {scalar_t__ index; } ;
struct TYPE_16__ {scalar_t__ video_track; TYPE_3__ state; } ;
struct TYPE_14__ {TYPE_1__* format; } ;
struct TYPE_13__ {scalar_t__ es_type; scalar_t__ codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (TYPE_6__*,scalar_t__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int*,int*,int*,scalar_t__*) ;
 int FUNC_4 (TYPE_6__*,scalar_t__*,int*) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(VC_CONTAINER_T *VAR_11, int *VAR_12,
   int *VAR_13, int *VAR_14, uint32_t *VAR_15, int *VAR_16,
   int VAR_17)
{
   int64_t VAR_18 = FUNC_0(VAR_11);
   int VAR_19, VAR_20, VAR_21 = 0, VAR_22 = 0;
   VC_CONTAINER_STATUS_T VAR_23;
   VC_CONTAINER_ES_TYPE_T VAR_24 = VAR_8;
   unsigned int VAR_25 = VAR_11->tracks_num;
   uint32_t VAR_26 = 0;

   VAR_23 = FUNC_3(VAR_11, VAR_12, &VAR_19, &VAR_20, VAR_15);
   if(VAR_23 != VAR_10) return VAR_23;

   if(FUNC_1(VAR_11) != VAR_10) return VAR_23;
   if(VAR_18 == FUNC_0(VAR_11)) return VAR_6;
   if(VAR_19 == 0) return VAR_5;


   if(VAR_17 && VAR_19 != VAR_2 &&
      VAR_19 != VAR_4 && VAR_19 != VAR_3)
      return VAR_5;


   if((VAR_19 != VAR_2 && VAR_19 != VAR_4) || !VAR_20)
   {
      VAR_21 |= VAR_0;
      goto end;
   }

   if(VAR_19 == VAR_2)
   {
      FUNC_2(VAR_11, &VAR_26, 0, 0, 0);
      VAR_24 = VAR_7;
   }
   else if(VAR_19 == VAR_4)
   {
      FUNC_4(VAR_11, &VAR_26, &VAR_22);
      VAR_24 = VAR_9;
   }
   VAR_20--;


   for(VAR_25 = 0; VAR_25 < VAR_11->tracks_num; VAR_25++)
      if(VAR_24 == VAR_11->tracks[VAR_25]->format->es_type) break;
   if(VAR_25 == VAR_11->tracks_num)
      VAR_21 |= VAR_0;


   if(VAR_17 && VAR_26 != VAR_11->tracks[VAR_25]->format->codec)
      return VAR_5;

 end:


   if(VAR_11->priv->module->state.index && !(VAR_21 & VAR_0) &&
      (VAR_11->priv->module->video_track < 0 || (VAR_24 == VAR_9 && (VAR_22 & VAR_1))))
      FUNC_5(VAR_11->priv->module->state.index, (int64_t) (*VAR_15) * 1000LL, VAR_18);

   *VAR_16 = VAR_21 | VAR_22;
   *VAR_14 = VAR_20;
   *VAR_13 = VAR_25;
   return VAR_10;
}
