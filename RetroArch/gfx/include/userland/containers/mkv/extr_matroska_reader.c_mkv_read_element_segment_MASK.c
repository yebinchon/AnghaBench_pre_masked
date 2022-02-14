
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_13__ {TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {int level; TYPE_2__* levels; } ;
struct TYPE_14__ {int timecode_scale; double duration; int element_level; TYPE_3__ state; int element_offset; int cluster_offset; scalar_t__ segment_size; scalar_t__ segment_offset; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_11__ {scalar_t__ data_offset; scalar_t__ data_start; scalar_t__ id; scalar_t__ size; scalar_t__ offset; } ;
struct TYPE_10__ {TYPE_5__* module; } ;
typedef int MKV_ELEMENT_T ;
typedef scalar_t__ MKV_ELEMENT_ID_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__,int **) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_5, MKV_ELEMENT_ID_T VAR_6, int64_t VAR_7 )
{
   VC_CONTAINER_MODULE_T *VAR_8 = VAR_5->priv->module;
   VC_CONTAINER_STATUS_T VAR_9 = VAR_3;
   int64_t VAR_10 = FUNC_0(VAR_5);
   bool VAR_11 = VAR_7 < 0;



   VAR_8->state.level = 0;
   VAR_8->state.levels[0].offset = FUNC_0(VAR_5);
   VAR_8->state.levels[0].size = VAR_7;
   VAR_8->state.levels[0].id = VAR_1;
   VAR_8->state.levels[0].data_start = 0;
   VAR_8->state.levels[0].data_offset = 0;
   VAR_8->timecode_scale = 1000000;
   VAR_8->duration = 0.0;
   VAR_8->segment_offset = FUNC_0(VAR_5);
   VAR_8->segment_size = VAR_7;



   VAR_8->element_level++;
   while(VAR_9 == VAR_3 &&
         (VAR_11 || VAR_7 >= VAR_2))
   {
      MKV_ELEMENT_T *VAR_12 = VAR_4;
      MKV_ELEMENT_ID_T VAR_13;
      int64_t VAR_14;

      VAR_10 = FUNC_0(VAR_5);

      VAR_9 = FUNC_2(VAR_5, VAR_7, &VAR_13, &VAR_14, VAR_6, &VAR_12);
      if(VAR_9 != VAR_3) break;

      if(VAR_13 == VAR_0)
      {

         VAR_8->cluster_offset = VAR_8->element_offset;
         VAR_8->state.level = 1;
         VAR_8->state.levels[1].offset = FUNC_0(VAR_5);
         VAR_8->state.levels[1].size = VAR_14;
         VAR_8->state.levels[1].id = VAR_0;
         VAR_8->state.levels[1].data_start = 0;
         VAR_8->state.levels[1].data_offset = 0;
         break;
      }

      VAR_9 = FUNC_1(VAR_5, VAR_12, VAR_14, VAR_7);
      if(!VAR_11) VAR_7 -= (FUNC_0(VAR_5) - VAR_10);
   }

   VAR_8->element_level--;
   return VAR_9;
}
