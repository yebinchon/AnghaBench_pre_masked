
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_21__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_22__ {scalar_t__ data_offset; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_23__ {scalar_t__ tag_position; scalar_t__ tag_prev_size; int data_offset; } ;
struct TYPE_20__ {TYPE_4__* format; TYPE_3__* priv; } ;
struct TYPE_19__ {scalar_t__ es_type; } ;
struct TYPE_18__ {TYPE_2__* module; } ;
struct TYPE_17__ {TYPE_8__* state; } ;
struct TYPE_16__ {TYPE_7__* module; } ;
typedef TYPE_8__ FLV_READER_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_6__*,int,int*,scalar_t__*,int*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int*,int*,int*,scalar_t__*,int*,int ) ;
 int FUNC_4 (TYPE_6__*,int,scalar_t__,int,scalar_t__,int,scalar_t__,int) ;
 scalar_t__ FUNC_5 (TYPE_6__*,int,int*,scalar_t__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6(VC_CONTAINER_T *VAR_4, int VAR_5, int *VAR_6,
   uint32_t *VAR_7, int *VAR_8, int VAR_9, int VAR_10)
{
   VC_CONTAINER_MODULE_T *VAR_11 = VAR_4->priv->module;
   FLV_READER_STATE_T *VAR_12 = VAR_4->tracks[VAR_5]->priv->module->state;
   int VAR_13, VAR_14, VAR_15, VAR_16;
   VC_CONTAINER_STATUS_T VAR_17 = VAR_3;
   uint32_t VAR_18;
   int64_t VAR_19;


   while (VAR_17 == VAR_3)
   {

      VAR_19 = VAR_12->tag_position - VAR_12->tag_prev_size;
      if(VAR_19 < VAR_11->data_offset) VAR_19 = VAR_11->data_offset;
      VAR_17 = FUNC_0(VAR_4, VAR_19);
      if(VAR_17 != VAR_3) return VAR_17;

      VAR_17 = FUNC_3(VAR_4, &VAR_14, &VAR_13,
                                     &VAR_15, &VAR_18, &VAR_16, 0);
      if(VAR_17) break;

      if(VAR_16 & VAR_0) goto skip;
      if(VAR_13 != VAR_5) goto skip;

      if(VAR_9 && VAR_4->tracks[VAR_5]->format->es_type == VAR_2 &&
         !(VAR_16 & VAR_1)) goto skip;

      if(FUNC_5(VAR_4, VAR_5, &VAR_15, &VAR_18) != VAR_3)
         goto skip;


      FUNC_4(VAR_4, VAR_5, VAR_19, VAR_14, FUNC_1(VAR_4),
                                VAR_15, VAR_18, VAR_16);
      break;

   skip:
      if(VAR_19 <= VAR_11->data_offset)
      {

         FUNC_4(VAR_4, VAR_5, (int64_t)VAR_11->data_offset, 0,
                                   (int64_t)VAR_11->data_offset, 0, 0, 0);
         return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
      }
      FUNC_4(VAR_4, VAR_5, VAR_19, VAR_14, FUNC_1(VAR_4),
                                VAR_15, VAR_18, 0);
      VAR_12->data_offset = VAR_15;
   }

   if(!VAR_17)
   {
      if(VAR_6) *VAR_6 = VAR_15;
      if(VAR_7) *VAR_7 = VAR_18;
      if(VAR_8) *VAR_8 = VAR_16;
   }
   return VAR_17;
}
