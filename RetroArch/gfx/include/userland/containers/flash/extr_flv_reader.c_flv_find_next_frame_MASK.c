
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_19__ {TYPE_4__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_20__ {int data_offset; scalar_t__ data_size; scalar_t__ data_position; scalar_t__ tag_position; } ;
struct TYPE_18__ {TYPE_3__* format; TYPE_2__* priv; } ;
struct TYPE_17__ {scalar_t__ es_type; } ;
struct TYPE_16__ {TYPE_1__* module; } ;
struct TYPE_15__ {TYPE_6__* state; } ;
typedef TYPE_6__ FLV_READER_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,scalar_t__) ;
 size_t FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_5__*,int*,int*,int*,int *,int*,int ) ;
 int FUNC_6 (TYPE_5__*,int,scalar_t__,int,scalar_t__,int,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int,int*,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8(VC_CONTAINER_T *VAR_4, int VAR_5, int *VAR_6,
   uint32_t *VAR_7, int *VAR_8, int VAR_9, int VAR_10)
{
   int VAR_11, VAR_12, VAR_13, VAR_14;
   VC_CONTAINER_STATUS_T VAR_15 = VAR_3;
   FLV_READER_STATE_T *VAR_16 = VAR_4->tracks[VAR_5]->priv->module->state;
   uint32_t VAR_17;
   int64_t VAR_18;
   FUNC_4(VAR_10);



   VAR_18 = VAR_16->tag_position;
   if(VAR_16->data_offset)
      VAR_18 = VAR_16->data_position + VAR_16->data_size;
   VAR_15 = FUNC_0(VAR_4, VAR_18);
   if(VAR_15 != VAR_3) return VAR_15;


   while (VAR_15 == VAR_3)
   {
      VAR_18 = FUNC_2(VAR_4);
      VAR_15 = FUNC_5(VAR_4, &VAR_12, &VAR_11,
                                     &VAR_13, &VAR_17, &VAR_14, 0);
      if(VAR_15 != VAR_3) break;

      if(VAR_14 & VAR_0) goto skip;
      if(VAR_11 != VAR_5) goto skip;

      if(VAR_9 && VAR_4->tracks[VAR_5]->format->es_type == VAR_2 &&
         !(VAR_14 & VAR_1)) goto skip;

      if(FUNC_7(VAR_4, VAR_5, &VAR_13, &VAR_17) != VAR_3)
         goto skip;


      FUNC_6(VAR_4, VAR_5, VAR_18, VAR_12, FUNC_2(VAR_4),
                                VAR_13, VAR_17, VAR_14);
      break;

   skip:
      FUNC_6(VAR_4, VAR_5, VAR_18, VAR_12, FUNC_2(VAR_4),
                                VAR_13, VAR_17, 0);
      VAR_16->data_offset = VAR_13;

      if(FUNC_1(VAR_4, VAR_13) != (size_t)VAR_13) VAR_15 = FUNC_3(VAR_4);
   }

   if(!VAR_15)
   {
      if(VAR_6) *VAR_6 = VAR_13;
      if(VAR_7) *VAR_7 = VAR_17;
      if(VAR_8) *VAR_8 = VAR_14;
   }

   return VAR_15;
}
