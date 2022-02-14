
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_20__ {unsigned int tracks_num; TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_SEEK_MODE_T ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;
struct TYPE_21__ {scalar_t__ data_offset; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_22__ {int timestamp; int data_offset; scalar_t__ data_position; scalar_t__ tag_position; scalar_t__ status; scalar_t__ index; int member_0; } ;
struct TYPE_19__ {TYPE_4__* priv; TYPE_2__* format; } ;
struct TYPE_18__ {TYPE_3__* module; } ;
struct TYPE_17__ {TYPE_8__* state; } ;
struct TYPE_16__ {scalar_t__ es_type; } ;
struct TYPE_15__ {TYPE_7__* module; } ;
typedef TYPE_8__ FLV_READER_STATE_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,char*,int,...) ;
 scalar_t__ FUNC_2 (TYPE_6__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_6__*,unsigned int,int*,int*,int ,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_6__*,unsigned int,int*,int*,int ,int,int ) ;
 int FUNC_6 (TYPE_6__*,unsigned int,int,int ,int,int ,int,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int,int*,int*,int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8(VC_CONTAINER_T *VAR_4,
   int64_t *VAR_5, VC_CONTAINER_SEEK_MODE_T VAR_6, VC_CONTAINER_SEEK_FLAGS_T VAR_7)
{
   VC_CONTAINER_MODULE_T *VAR_8 = VAR_4->priv->module;
   VC_CONTAINER_STATUS_T VAR_9 = VAR_3;
   FLV_READER_STATE_T VAR_10 = {0};
   FLV_READER_STATE_T *VAR_11;
   uint32_t VAR_12 = (*VAR_5 / 1000), VAR_13, VAR_14;
   unsigned int VAR_15, VAR_16;
   int VAR_17, VAR_18 = 0;
   int64_t VAR_19;
   FUNC_3(VAR_6);






   for(VAR_15 = 0, VAR_16 = 0; VAR_15 < VAR_4->tracks_num; VAR_15++)
   {
      if(VAR_4->tracks[VAR_15]->format->es_type != VAR_1) continue;
      VAR_16 = VAR_15;
      break;
   }
   if(VAR_16 >= VAR_4->tracks_num) return VAR_0;
   VAR_11 = VAR_4->tracks[VAR_16]->priv->module->state;
   VAR_14 = VAR_11->timestamp;

   FUNC_1(VAR_4, "seek (%i, prev %i)", VAR_12, VAR_14);

   if(VAR_11->index && FUNC_7(VAR_11->index, VAR_7 & VAR_2,
                                             VAR_5, &VAR_19, &VAR_18) == VAR_3)
   {
      FUNC_6(VAR_4, VAR_16, VAR_19, 0, VAR_19, 0, (uint32_t) (*VAR_5 / 1000LL), 0);
   }
   else
   {
      if(VAR_12 < VAR_11->timestamp / 2)
         FUNC_6(VAR_4, VAR_16, (int64_t)VAR_8->data_offset, 0,
                                   (int64_t)VAR_8->data_offset, 0, 0, 0);
      VAR_18 = 1;
   }


   if(VAR_18 == 0)
   {
      VAR_9 = FUNC_4(VAR_4, VAR_16, &VAR_17, &VAR_13, 0, 1 , 0);
   }
   else
   {
      if(VAR_12 > VAR_14)
      {
         while(!VAR_9)
         {
            VAR_9 = FUNC_4(VAR_4, VAR_16, &VAR_17, &VAR_13, 0, 1 , 0);
            if(VAR_9) break;


            if(VAR_12 <= VAR_13) break;

            VAR_10 = *VAR_11;
            VAR_11->data_offset = VAR_17;
         }
      }
      else
      {
         while(!VAR_9)
         {
            VAR_9 = FUNC_5(VAR_4, VAR_16, &VAR_17, &VAR_13, 0, 1 , 0);
            if(VAR_9) break;


            if(VAR_12 >= VAR_13) break;


            if(VAR_11->timestamp == VAR_10.timestamp) break;

            VAR_10 = *VAR_11;
            VAR_11->data_offset = VAR_17;
         }
      }
   }

   if(VAR_9 != VAR_3 && (VAR_7 & VAR_2))
   {
      FUNC_1(VAR_4, "seek failed (%i)", VAR_9);
      return VAR_9;
   }
   else if(VAR_9 != VAR_3)
   {
      FUNC_1(VAR_4, "seek failed (%i), look for previous frame", VAR_9);
      if(VAR_10.tag_position) *VAR_11 = VAR_10;
      else VAR_9 = FUNC_5(VAR_4, VAR_16, &VAR_17, &VAR_13, 0, 1 , 0);
   }

   FUNC_1(VAR_4, "seek done (%i)", VAR_13);
   VAR_11->status = VAR_3;
   VAR_10.status = VAR_3;

   if(VAR_18 == 1)
   {

      if((VAR_7 & VAR_2) && VAR_13 < VAR_12 && VAR_13 < VAR_14)
      {
         if(VAR_10.tag_position) *VAR_11 = VAR_10;
         else VAR_9 = FUNC_4(VAR_4, VAR_16, &VAR_17, &VAR_13, 0, 1 , 0);
      }
      else if(!(VAR_7 & VAR_2) && VAR_13 > VAR_12)
      {
         if(VAR_10.tag_position) *VAR_11 = VAR_10;
         else VAR_9 = FUNC_5(VAR_4, VAR_16, &VAR_17, &VAR_13, 0, 1 , 0);
      }

      FUNC_1(VAR_4, "seek adjustment (%i)", VAR_13);
   }

   if(VAR_11->data_position == VAR_10.data_position)
      VAR_9 = FUNC_2(VAR_4, VAR_11->data_position);

   *VAR_5 = VAR_13 * FUNC_0(1000);

   return VAR_3;
}
